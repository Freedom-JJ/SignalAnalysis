/*******************************
*   File:       jvoicesampleview.h
*   Author:     江德鸿
*   Company:    哈尔滨理工大学
*   Time:       2022-11-06
*   brief:      语音采样显示界面
********************************/
#ifndef JVOICESAMPLEVIEW_H
#define JVOICESAMPLEVIEW_H

#include <QObject>
#include <QLineSeries>
#include <QDebug>
#include "jdataviewecho.h"
#include "jbasesamplewindow.h"
class JVoiceSampleView : public JBaseSampleWindow
{
    Q_OBJECT
public:

    explicit JVoiceSampleView(QWidget *parent);


    void pause() override;
    void resume() override;
    void init(QWidget *parent) override;
    void setDataViewEcho(JDataViewEcho *data) ;
    void setInterval(int mec) ;
    void start();
    void refresh() override;
    void hide() override;
    void show() override;
    void stop();
protected:

    QVector<QVector<QPointF>> convertIntToQPointF(map<QString,QVector<double>> &data);
private:
    QVector<QChart *> *charts = new QVector<QChart *>(4);
    QVector<QLineSeries *> *lines = new QVector<QLineSeries *>(4);
    QTimer *timer;
    JDataViewEcho *data;
    int currentAxisX = 20000;
};

#endif // JVOICESAMPLEVIEW_H
