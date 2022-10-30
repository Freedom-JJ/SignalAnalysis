/******************************************************************************
 * Copyright 2022/10/11 Co., Ltd.
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       SaveCollectionDataThread.h
 * @brief      文件概述：保存文件线程类
 *
 * @author     wangzexin<wangzexin19990311@163.com>
 * @date       2022/10/11
 * @location   哈尔滨理工大学人工智能实验室
 *****************************************************************************/
#ifndef SAVECOLLECTIONDATATHREAD_H
#define SAVECOLLECTIONDATATHREAD_H
#include<QThread>
#include"aircraftcasingvibratesystem.h"
#include"mainwindow.h"
#include<QDir>
#include<QMessageBox>
#include<QFile>
class ConsumerThread;

class SaveCollectionDataThread : public QThread
{
public:
    SaveCollectionDataThread(class MainWindow *st):saveThread(st){

    }

public:
    MainWindow *saveThread;

    std::vector<ConsumerThread*> threadVector;

    void run() override;

};

/******************************************************************************
 * Copyright 2022/10/18 Co., Ltd.
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       ConsumerThread
 * @brief      文件概述：消费者子线程类
 *
 * @author     wangzexin<wangzexin19990311@163.com>
 * @date       2022/10/18
 * @location   哈尔滨理工大学人工智能实验室
 *****************************************************************************/
class ConsumerThread : public QThread
{
public:
    ConsumerThread(class MainWindow *ct , QString code):consumer(ct),signalCode(code){

    }

public:
    MainWindow *consumer;

    QString signalCode;

    void run() override;
};
#endif // SAVECOLLECTIONDATATHREAD_H
