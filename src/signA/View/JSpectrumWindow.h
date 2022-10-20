#ifndef JSPECTRUMWINDOW_H
#define JSPECTRUMWINDOW_H

#include <QObject>
#include <QBarSeries>
#include <QBarSet>
#include <QBarCategoryAxis>
#include "jbasesamplewindow.h"
#include "qcustomplot.h"
#include "jdataviewecho.h"
#include "Signal/StaticSpectralEchoSignal.h"
class JSpectrumWindow:public QObject
{
    Q_OBJECT
public:
    explicit JSpectrumWindow(QWidget *parent);

    void init(QWidget * parent) ;

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
     * @brief 刷新接口
     */
     void refresh();

     void start();
     void stop();
     void setDataViewEcho(std::map<QString,std::shared_ptr<StaticSpectralEchoSignal>> mapData) ;
     void setInterval(int mec) ;
     /**
      * @brief 设置频谱范围
      * @param count为最大频谱，0为最小，那么就是总共count+1跟谱线
      */
     void setRange(int count);
private:
     QVector<QCustomPlot *> *customPlot = new QVector<QCustomPlot *> (4);
     QTimer *timer ;
     std::map<QString,std::shared_ptr<StaticSpectralEchoSignal>> mapData;
     QVector<double> * xAxis = new QVector<double>(10000);
     int range = 0;
};

#endif // JSPECTRUMWINDOW_H
