#include "CorrelationMatrixWidget.h"
#include <QPainter>
#include <QPaintEvent>

CorrelationMatrixWidget::CorrelationMatrixWidget(QWidget* parent)
    : QWidget(parent) {
    setMinimumSize(400, 300); // 调整最小尺寸以确保色带有足够的空间显示
}

void CorrelationMatrixWidget::setCorrelationMatrix(const QVector<QVector<double>>& matrix) {
    correlationMatrix = matrix;
    update(); // 请求重绘
}

void CorrelationMatrixWidget::setLabels(const QStringList& labels) {
    this->labels = labels;
    update();
}

void CorrelationMatrixWidget::paintEvent(QPaintEvent* event) {
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing); // 抗锯齿

    if (correlationMatrix.isEmpty())
        return;

    int n = correlationMatrix.size();

    // --- 修改点 1：定义左侧文字区域的额外宽度 ---
    // 原始代码只用了 margin，现在我们额外加 40 像素给文字
    // 你可以根据文字长度调整这个值 (例如 30, 40, 50)
    int leftExtraSpace = 40;
    int gridStartX = margin + leftExtraSpace; // 网格的起始 X 坐标

    // --- 修改点 2：重新计算单元格宽度 ---
    // 总宽度 - (左侧总边距 + 右侧总边距 + 色带宽度)
    // 这里的 margin 假设是成员变量，如果未定义请替换为具体数值(如 40)
    int cellWidth = (width() - gridStartX - margin - 50) / n;
    int cellHeight = (height() - 2 * margin) / n;

    // 绘制矩阵
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            painter.setFont(QFont("Arial", 8));
            double value = correlationMatrix[i][j];
            QColor color = colorForValue(value);

            // --- 修改点 3：应用新的起始 X 坐标 ---
            QRect cellRect(gridStartX + j * cellWidth, margin + i * cellHeight, cellWidth, cellHeight);
            painter.fillRect(cellRect, color);
            painter.setPen(Qt::black);
            painter.drawText(cellRect, Qt::AlignCenter, QString::number(value, 'f', 2));

            // 绘制顶部列标签 (跟随着网格向右移)
            if (i == 0) {
                painter.setFont(QFont("Arial", 8));
                // 顶部标签 X 坐标也需要加上 gridStartX
                painter.drawText(QRect(gridStartX + j * cellWidth, 15, cellWidth, margin), Qt::AlignCenter, labels[j]);
            }
        }

        // --- 修改点 4：调整左侧行标签的位置和对齐 ---
        painter.setFont(QFont("Arial", 8));

        // 定义文字绘制区域：从 5px 开始，宽度为 gridStartX - 10 (留出一点缝隙不紧贴网格)
        QRect textRect(5, margin + i * cellHeight, gridStartX - 15, cellHeight);

        // 使用 AlignRight | AlignVCenter 让文字靠右对齐（靠近网格但有间隙），视觉上更专业
        // 如果你坚持要靠左，可以改回 AlignCenter 或 AlignLeft
        painter.drawText(textRect, Qt::AlignRight | Qt::AlignVCenter, labels[i]);
    }

    // 绘制色带
    drawColorBar(painter);
}

QColor CorrelationMatrixWidget::colorForValue(double value) const {
    // 映射颜色值：蓝色 (-1) 到 白色 (0) 到红色 (1)
    if (value < 0) {
        // 从蓝色到白色
        int t = static_cast<int>((value + 1) * 155);  // value + 1 是 0 到 1 的范围
        return QColor(100+t, 100+t, 255);
    } else {
        // 从白色到红色
        int t = static_cast<int>(value * 155);  // value 是 0 到 1 的范围
        return QColor(255, 255 - t, 255 - t);
    }
}
void CorrelationMatrixWidget::drawColorBar(QPainter& painter) {
    int barWidth = 20;
    int barHeight = height() - 2 * margin;
    QRect barRect(width() - margin - barWidth, margin, barWidth, barHeight);
    QLinearGradient gradient(barRect.topLeft(), barRect.bottomLeft());

    // 从蓝色到白色到红色的渐变
    gradient.setColorAt(0.0, QColor(255, 100, 100));  // 温和的红色
    gradient.setColorAt(0.5, QColor(255, 255, 255));  // 白色
    gradient.setColorAt(1.0, QColor(100, 100, 255));  // 蓝色

    painter.fillRect(barRect, gradient);

    // 绘制刻度线和标注
    int numTicks = 5;
    painter.setPen(Qt::black);
    for (int i = 0; i < numTicks; ++i) {
        double value = -1 + i * 2.0 / (numTicks - 1); // 计算刻度的相关系数值
        int y = margin + static_cast<int>(barHeight * (i * 1.0 / (numTicks - 1)));

        // 绘制刻度线
        painter.drawLine(barRect.right() + 1, y, barRect.right() + 5, y);

        // 绘制标注
        painter.drawText(barRect.right() + 10, y + painter.fontMetrics().height() / 3, QString::number(value, 'f', 1));
    }
}
