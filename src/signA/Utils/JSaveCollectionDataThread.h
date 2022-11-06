/*******************************
*   File:       JSaveCollectionDataThread.h
*   Author:     江德鸿
*   Company:    哈尔滨理工大学
*   Time:       2022-11-06
*   brief:      单线程保存所有的数据，提供备用方案
********************************/
#ifndef JSAVECOLLECTIONDATATHREAD_H
#define JSAVECOLLECTIONDATATHREAD_H

#include <QObject>
#include "mainwindow.h"
class JSaveCollectionDataThread : public QThread
{
    Q_OBJECT
public:
    JSaveCollectionDataThread(class MainWindow *st);
    void run();

private:
    MainWindow *saveThread;
};

#endif // JSAVECOLLECTIONDATATHREAD_H
