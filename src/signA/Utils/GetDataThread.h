/******************************************************************************
 * Copyright 2022/10/11 Co., Ltd.
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       GetDataThread.h
 * @brief      文件概述：取数线程类
 *
 * @author     wangzexin<wangzexin19990311@163.com>
 * @date       2022/10/11
 * @location   哈尔滨理工大学人工智能实验室
 *****************************************************************************/
#ifndef GETDATATHREAD_H
#define GETDATATHREAD_H
#include <QThread>
#include <QVector>
#include <QDebug>
#include "mainwindow.h"
#include "Signal/StaticSpectralEchoSignal.h"
class MainWindow;
class StaticSpectralEchoSignal;

class GetDataThread : public QThread
{
public:
    GetDataThread(class MainWindow* dt) : data_thread(dt){
    }

    void run() override;

public:
    MainWindow *data_thread;
};

#endif // GETDATATHREAD_H
