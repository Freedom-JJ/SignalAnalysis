#ifndef PLAYBACKSINGLETHREAD_H
#define PLAYBACKSINGLETHREAD_H
/******************************************************************************
 * Copyright 2022/11/14 Co., Ltd.
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       playbacksinglethread.h
 * @brief      文件概述：取数线程的单线程版本
 *
 * @author     wangzexin<wangzexin19990311@163.com>
 * @date       2022/11/14
 * @location   哈尔滨理工大学人工智能实验室
 *****************************************************************************/
#include "../mainwindow.h"
#include"aircraftcasingvibratesystem.h"
#include "./RedisTools/rediscontroller.h"
#include <QThread>
#include <QDebug>
#include <iostream>

class RedisController;
class PLayBackSingleThread : public QThread
{
    Q_OBJECT
public:
    PLayBackSingleThread(class MainWindow *spt ,QString host , int port):singlePlayThread(spt){
        this->redisHost = host;
        this->redisPort = port;
    }

    void run() override;

public:
     MainWindow *singlePlayThread;

     QString redisHost;
     int redisPort;

     QtRedis * consumerRedis;

signals:
    /**
     * @brief stopRefresh,回放正常结束（文件读取完）
     */
    void playbackSingleDone();

};

#endif // PLAYBACKSINGLETHREAD_H
