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
#include<thread>
#include"aircraftcasingvibratesystem.h"
#include"mainwindow.h"
#include<QDir>
#include<QMessageBox>
#include<QFile>

using std::thread;
class SaveCollectionDataThread
{
public:
    SaveCollectionDataThread();

public:
    MainWindow *saveThread;

public:

    void OpenThread2SaveCollectionData();

    void SaveSumCollectionData();

    void SaveCollectionData(QString signalCode);
};

#endif // SAVECOLLECTIONDATATHREAD_H
