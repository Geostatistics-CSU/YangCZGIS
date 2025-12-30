#pragma once

#include <QWidget>
#include <QVector4D>

class ColorLegendWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ColorLegendWidget(QWidget* parent = nullptr);

    void updateLegend(bool show, const QString& field,
        const QVector4D& startColor, const QVector4D& endColor,
        int steps, double minValue, double maxValue);

protected:
    void paintEvent(QPaintEvent* event) override;

private:
    bool m_showLegend = false;
    QString m_legendField;
    QVector4D m_legendStartColor;
    QVector4D m_legendEndColor;
    int m_legendSteps = 5;
    double m_legendMinValue = 0.0;
    double m_legendMaxValue = 1.0;

    // 辅助函数：使用HSL插值计算颜色
    void RGBToHSL(const QVector4D& color, float& H, float& S, float& L);
    QVector4D HSLToRGB(float Hue, float Saturation, float Lightness, float alpha);
    QVector4D ColorLegendWidget::getInterpolatedColor(float factor);
};