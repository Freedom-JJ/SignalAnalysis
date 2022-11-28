#ifndef INITHARDWARETHREAD_H
#define INITHARDWARETHREAD_H

/******************************************************************************
 * Copyright 2020-xxxx xxx Co., Ltd.
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       inithardwarethread.h
 * @brief      初始化仪器类
 *
 * @author     wangzexin<wangzexin19990311@163.com>
 * @date       2022/11/27
 * @history
 *****************************************************************************/

#include <QThread>
#include <QVector>
#include <QDebug>
#include "mainwindow.h"
#include "Controller/hardwarecontroller.h"

class MainWindow;

class InitHardWareThread : public QThread
{
    Q_OBJECT //必须包含的宏
public:
    InitHardWareThread(class MainWindow*ih):initHardWare(ih){

    }

    void run() override;

    signals:
        void hardwareInited(bool b_hdconnected);

public:
    MainWindow *initHardWare;
};

#endif // INITHARDWARETHREAD_H
