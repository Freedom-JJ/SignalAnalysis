/*******************************
*   File:       spectrum.h
*   Author:     江德鸿
*   Company:    哈尔滨理工大学
*   Time:       2022-11-06
*   brief:      单个窗口的基本功能，具有通用性
********************************/
#ifndef SPECTRUM_H
#define SPECTRUM_H

#include <QWidget>
#include "qcustomplot.h"
#include "Signal/BaseEchoSignal.h"
#include "Utils/SignalFeature.h"
namespace Ui {
class Spectrum;
}

class Spectrum : public QWidget
{
    Q_OBJECT
public:
    QSize sizeHint();

public:
    explicit Spectrum(QWidget *parent = nullptr);
    ~Spectrum();
    /**
     * @brief 初始化一系列行为,vector数据为y轴，下标为x轴
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

    /**
     * @brief setYAxisRange 四个窗口的Y轴范围
     * @param start
     * @param end
     */
    void setYAxisRange(double start , double end);
    /**
     * @brief setY_isScale,设置Y轴是否动态收缩
     * @param scale
     */
    void setY_isScale(bool scale);
    /**
     * @brief 设置频谱范围
     * @param count为最大频谱，0为最小，那么就是总共count+1跟谱线
     */
    void setXAxisRange(int count);


    /**
     * @brief 继续显示
     */
     void resume();
    /**
     * @brief 暂停
     */
     void pause() ;

    /**
     * @brief 隐藏series
     */
     void hide() ;
    /**
     * @brief 显示series
     */
     void show() ;

     /**
      * @brief 由上层调用
      */
     void refresh(QVector<double> &data);
     /**
      * @brief 由上层调用
      * @param statistic
      * @param data
      */
     void refresh(std::map<QString,double> statistic , QVector<double> &data);

     void autoRescale(double rate);


     /**
      * @brief 用定时器刷新,不用定时器禁止启动
      */
     void start();
     void stop();
     void setInterval(int mec) ;
     void setDataViewEcho(BaseEchoSignal * data);

     void openStatistic();
     void closeStatstic();


private:
    Ui::Spectrum *ui;
    QCustomPlot *plot;
    QCPItemText *textItem;
    QVector<double> *key = nullptr;
    BaseEchoSignal * viewData;
    double rescaleRate = 1.2;
    QTimer *timer;
    /**
     * @brief x轴的范围
     */
    int range = 0;
    /**
     * @brief yIsRescale,Y轴是否缩放
     */
    bool yIsRescale = true;
    /**
     * @brief 当Y轴不需要自动缩放时，使用这两个值
     */
    double yStart = 0;
    double yStop;
    bool isShowStatistic = true;

    SignalFeature *feature = SignalFeature::getInstance();
};

#endif // SPECTRUM_H
