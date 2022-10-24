#ifndef PLAYBACKTHREAD_H
#define PLAYBACKTHREAD_H
#include "../mainwindow.h"
#include <QThread>
#include <QDebug>
/******************************************************************************
 * Copyright 2022/10/23 Co., Ltd.
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       PlayBackThread.h
 * @brief      文件概述： 回放线程
 *
 * @author     wangzexin<wangzexin19990311@163.com>
 * @date       2022/10/23
 * @location   哈尔滨理工大学人工智能实验室
 *****************************************************************************/
class PlayBackThread : public QThread
{
public:
    PlayBackThread(class MainWindow *pt , QString sc):playThread(pt) , signalCode(sc){

    }

    void run() override;

    void GetDataUrl(QString dataUrl);

public:
    MainWindow *playThread;
    QString signalCode;
    QString DataUrl;

};

#endif // PLAYBACKTHREAD_H
