#ifndef JSAMPLEVIEW_H
#define JSAMPLEVIEW_H

#include <QWidget>
#include <QChart>
#include <QChartView>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QLineSeries>
#include <QChartView>
#include <QDebug>
#include <QTimer>
#include "jdataviewecho.h"
QT_CHARTS_USE_NAMESPACE
/**
 * 重新一次性画图需要，重新创建LineSeriers
 *
 *
 *
 *
 *
 * @brief The JSampleView class
 */
class JSampleView : public QWidget
{
    Q_OBJECT
public:


    explicit JSampleView(QWidget *parent = nullptr);
    /**
     * 初始化布局
     * @brief init
     */
    void init(QWidget *parent);
    /**
     * 初始化对应的slots
     * @brief initUI
     */
    void initUI();//设置对应的slots

    /**
     * 将窗口显示为空，可以用在暂停和开始的交互界面
     * @brief empty
     */
    void stopSample();

    /**
     * 简单的演示接口，也参与定时自动刷新显示,消费了数据后会在flag中表示为true,并且清除data，记得手动把flag转换为false
     * @brief setNextShowData(int data[],int size);
     * @param data 四个通道数据
     */
    void setNextShowData(QVector<QVector<int>> *data,int size,bool *flag);

    /**
     * 推荐实现该接口，定时器将定时获取JDataViewEcho::getNextData()中的数据
     * @brief setDataViewEcho
     * @param data
     */
    void setDataViewEcho(JDataViewEcho *data);

    /**
     * 设置刷新间隔
     * @brief setInterval
     * @param mesc
     */
    void setInterval(int mesc);

    /**
     *
     * @brief 隐藏或使信号消失,停止采样使用
     */
    void hide();
    /**
     *
     * @brief 重新开始采样使用,针对停止采样
     */
    void show();

    /**
     *
     * @brief 继续采样，针对暂停采样
     */
    void resume();
    /**
     *
     * @brief 暂停采样,波形保持不动
     */
    void pause();
private:
    QVector<QChart *> *charts = new QVector<QChart*> (4);
    QVector<QLineSeries *> *lineSeries = new QVector<QLineSeries*> (4);
    QVector<QChartView *> *chartview = new QVector<QChartView*> (4);
    JDataViewEcho *dataViewEcho;
    QTimer *timer;
    int  mec;



signals:

public slots:
    /**
     * 设置刷新间隔，单位毫秒,在调用setDataViewEcho后使用
     *
     * @brief startRefreshWithTimer
     * @param mec
     */
    void startSampleWithTimer();
    void refresh();
};

#endif // JSAMPLEVIEW_H
