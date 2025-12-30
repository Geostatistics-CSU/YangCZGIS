#include "ColorLegendWidget.h"
#include <QPainter>
#include <QFont>
#include <cmath>

ColorLegendWidget::ColorLegendWidget(QWidget* parent)
    : QWidget(parent)
{
    setMinimumHeight(20); // 设置最小高度，确保有足够的空间显示色带和标签
}

void ColorLegendWidget::updateLegend(bool show, const QString& field,
    const QVector4D& startColor, const QVector4D& endColor,
    int steps, double minValue, double maxValue)
{
    m_showLegend = show;
    m_legendField = field;
    m_legendStartColor = startColor;
    m_legendEndColor = endColor;
    m_legendSteps = steps;
    m_legendMinValue = minValue;
    m_legendMaxValue = maxValue;
    update(); // 触发重绘
}

void ColorLegendWidget::paintEvent(QPaintEvent* event)
{
    Q_UNUSED(event);
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    if (!m_showLegend) {
        return;
    }

    const int legendHeight = 30;  // 色带高度
    const int textHeight = 15;    // 文本高度
    const int padding = 10;       // 边距

    // 计算色带位置（居中，宽度占部件的80%）
    int legendWidth = width() * 0.6;
    int legendX = (width() - legendWidth) / 2;
    int legendY = padding;

    // 检查是否单色模式
    bool isSingleColor = (m_legendSteps == 1 || m_legendStartColor == m_legendEndColor);


    QFont titleFont = painter.font();
    titleFont.setPointSize(12);  // 放大字体
    titleFont.setBold(true);     // 加粗
    painter.setFont(titleFont);
    // 计算标题高度（根据字体大小自适应）
    QFontMetrics fm(titleFont);
    const int titleHeight = fm.height() + 4; // 字体高度+额外间距

    // 单色模式显示"单色模式"，否则显示属性名称
    QString titleText = isSingleColor ? tr(u8"单色模式") : m_legendField;

    // 绘制标题（使用更大的显示区域）
    painter.drawText(legendX, legendY, legendWidth, titleHeight,
        Qt::AlignCenter, titleText);



    // 绘制色带
    int colorBarY = legendY + textHeight + 12; // 增加标题与色带的间距
    float segmentWidth = static_cast<float>(legendWidth) / m_legendSteps;

    // 单色模式处理
    if (m_legendSteps == 1 || m_legendStartColor == m_legendEndColor) {
        // 单色模式 - 绘制单一颜色
        QRectF colorRect(legendX, colorBarY, legendWidth, legendHeight);
        painter.fillRect(colorRect, QColor::fromRgbF(
            m_legendStartColor.x(), 
            m_legendStartColor.y(), 
            m_legendStartColor.z()));
    } else {
        // 渐变模式
        for (int i = 0; i < m_legendSteps; ++i) {
            float factor = static_cast<float>(i) / (m_legendSteps - 1);
            QVector4D color = getInterpolatedColor(factor);

            // 绘制色块
            QRectF colorRect(legendX + i * segmentWidth, colorBarY, segmentWidth, legendHeight);
            painter.fillRect(colorRect, QColor::fromRgbF(color.x(), color.y(), color.z()));
        }
    }
    // 绘制色带边框
    painter.setPen(Qt::black);
    painter.drawRect(legendX, colorBarY, legendWidth, legendHeight);

    // 绘制数值标签（色带下方）
    // 只在非单色模式下绘制数值标签
    if (!isSingleColor) {
       

        float segmentWidth = static_cast<float>(legendWidth) / m_legendSteps;
        painter.setFont(QFont("Arial", 8));
        for (int i = 0; i <= m_legendSteps; i++) {
            float value = m_legendMinValue + (m_legendMaxValue - m_legendMinValue) *
                (i / static_cast<float>(m_legendSteps));

            int xPos = legendX + i * segmentWidth;
            if (i == m_legendSteps) xPos = legendX + legendWidth;

            // 绘制刻度
            painter.drawLine(xPos, colorBarY + legendHeight,
                xPos, colorBarY + legendHeight + 5);

            // 绘制数值
            QString valueText = QString::number(value, 'f', 1);
            QRect textRect(xPos - 20, colorBarY + legendHeight + 5,
                40, textHeight);
            painter.drawText(textRect, Qt::AlignCenter, valueText);
        }
    }
}

// HSL转换函数（与Canvas3D中的实现一致）
void ColorLegendWidget::RGBToHSL(const QVector4D& color, float& H, float& S, float& L) {
    float r = color.x();
    float g = color.y();
    float b = color.z();
    float max_rgb = std::max({ r, g, b });
    float min_rgb = std::min({ r, g, b });
    float d = max_rgb - min_rgb;
    if (d == 0) H = 0;
    else if (max_rgb == r) H = std::fmod((g - b) / d, 6);
    else if (max_rgb == g) H = (b - r) / d + 2;
    else H = (r - g) / d + 4;
    H *= 60;
    if (H < 0) H += 360;
    L = (max_rgb + min_rgb) / 2;
    S = (d == 0) ? 0 : d / (1 - std::abs(2 * L - 1));
    S *= 100;
    L *= 100;
}

QVector4D ColorLegendWidget::HSLToRGB(float Hue, float Saturation, float Lightness, float alpha) {
    Saturation /= 100.0f;
    Lightness /= 100.0f;
    float C = (1 - std::abs(2 * Lightness - 1)) * Saturation;
    float hh = Hue / 60.0;
    float X = C * (1 - std::abs(std::fmod(hh, 2) - 1));
    float r = 0, g = 0, b = 0;
    if (hh >= 0 && hh < 1) { r = C; g = X; }
    else if (hh >= 1 && hh < 2) { r = X; g = C; }
    else if (hh >= 2 && hh < 3) { g = C; b = X; }
    else if (hh >= 3 && hh < 4) { g = X; b = C; }
    else if (hh >= 4 && hh < 5) { r = X; b = C; }
    else if (hh >= 5 && hh < 6) { r = C; b = X; }
    float m = Lightness - C / 2;
    r += m; g += m; b += m;
    return QVector4D(r, g, b, alpha);
}
// 辅助函数：获取插值颜色
QVector4D ColorLegendWidget::getInterpolatedColor(float factor) {
    float H_s, S_s, L_s;
    RGBToHSL(m_legendStartColor, H_s, S_s, L_s);
    float H_e, S_e, L_e;
    RGBToHSL(m_legendEndColor, H_e, S_e, L_e);

    float H_n = H_s + factor * (H_e - H_s);
    float S_n = S_s + factor * (S_e - S_s);
    float L_n = L_s + factor * (L_e - L_s);

    return HSLToRGB(H_n, S_n, L_n, 1.0f);
}