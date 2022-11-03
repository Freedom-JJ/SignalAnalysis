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
#include "Utils/uuidutil.h"
#include "Tools/datautil.h"
#include "Domain/singlesignal.h"

class ConsumerThread;

class SaveCollectionDataThread : public QThread
{
    Q_OBJECT //必须包含的宏
public:
    SaveCollectionDataThread(class MainWindow *st):saveThread(st){

    }

public:
    MainWindow *saveThread;
    void run() override;

signals:
    void AllConsumerSaved();

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
    ConsumerThread(class MainWindow *ct , QString code , SingleSignal everySig):consumer(ct),signalCode(code),m_signal(everySig){

    }

public:
    void run() override;


    MainWindow *consumer;
    QString signalCode;
    SingleSignal m_signal;


};
#endif // SAVECOLLECTIONDATATHREAD_H
