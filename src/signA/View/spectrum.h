#ifndef SPECTRUM_H
#define SPECTRUM_H

#include <QWidget>
#include "qcustomplot.h"
namespace Ui {
class Spectrum;
}

class Spectrum : public QWidget
{
    Q_OBJECT

public:
    explicit Spectrum(QWidget *parent = nullptr);
    ~Spectrum();
    /**
     * @brief 初始化一系列行为
     */
    void init(QVector<double> *initData = nullptr);
    /**
     * @brief init,刷新是否自动缩放，初始显示的值(一次)
     * @param isRescale
     * @param initData
     */
    void init(bool isRescale , QVector<double> * initData = nullptr);
    /**
     * @brief init,刷新是否自动缩放，初始显示的值(一次),以及x轴 y轴的范围
     * @param isRescale
     * @param xStart
     * @param xend
     * @param yStart
     * @param yStop
     * @param initData
     */
    void init(bool isRescale , double xStart , double xend , double yStart , double yStop ,QVector<double> * initData = nullptr);
private:
    Ui::Spectrum *ui;
    QCustomPlot *plot;
};

#endif // SPECTRUM_H
