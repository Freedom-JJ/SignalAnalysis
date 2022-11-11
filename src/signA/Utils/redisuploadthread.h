#ifndef REDISUPLOADTHREAD_H
#define REDISUPLOADTHREAD_H
/******************************************************************************
 * Copyright 2022/11/08 Co., Ltd.
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       redisuploadthread.h
 * @brief      文件概述： redis上传线程
 *
 * @author     wangzexin<wangzexin19990311@163.com>
 * @date       2022/11/08
 * @location   哈尔滨理工大学人工智能实验室
 *****************************************************************************/
#include<QThread>
#include"aircraftcasingvibratesystem.h"
#include "./RedisTools/rediscontroller.h"

class RedisController;
class RedisUploadThread : public QThread
{
    Q_OBJECT //必须包含的宏
public:
    RedisUploadThread(class MainWindow *sr , QString host , int port):saveRedis(sr){
        this->redisHost = host;
        this->redisPort = port;
    }

public:
    MainWindow *saveRedis;
    void run() override;

    QString redisHost;
    int redisPort;

    QtRedis * consumerRedis;

signals:
    void AllRedisConsumerSaved();
};



/******************************************************************************
 * Copyright 2022/11/08 Co., Ltd.
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       redisuploadthread.h
 * @brief      文件概述： redis消费子线程
 *
 * @author     wangzexin<wangzexin19990311@163.com>
 * @date       2022/11/08
 * @location   哈尔滨理工大学人工智能实验室
 *****************************************************************************/

class RedisConSumerThread : public QThread{

    Q_OBJECT //必须包含的宏
public:
    RedisConSumerThread(class MainWindow *ct , QString code):redisConsumer(ct),signalCode(code){

    }

public:
    void run() override;

    MainWindow *redisConsumer;
    QString signalCode;

    QtRedis *consumerRedis;


};


#endif // REDISUPLOADTHREAD_H
