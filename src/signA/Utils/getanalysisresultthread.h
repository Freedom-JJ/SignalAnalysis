/******************************************************************************
 * Copyright 2022/11/16 Co., Ltd.
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       getanalysisresultthread.h
 * @brief      文件概述： 获取redis后端分析结果线程
 *
 * @author     wangzexin<wangzexin19990311@163.com>
 * @date       2022/11/16
 * @location   哈尔滨理工大学人工智能实验室
 *****************************************************************************/
#ifndef GETANALYSISRESULTTHREAD_H
#define GETANALYSISRESULTTHREAD_H
#include <QThread>
#include "mainwindow.h"
#include "./RedisTools/rediscontroller.h"
#include "PlayBackThread.h"
#include "interface/itimeaxis.h"
#include"Vo/analysisresult.h"
class MainWindow;

class GetAnalysisResultThread : public QThread
{
    Q_OBJECT //必须包含的宏

public:
    GetAnalysisResultThread(class MainWindow* dt , QString host , int port , int channelNum) : result(dt),redisHost(host),redisPort(port){
        channelNumber = channelNum;
    }

    void setTimeAxis(ITimeAxis *value);
    void run() override;
public:
    MainWindow *result;

    QString redisHost;
    int redisPort;
    int channelNumber;
    int getAnalysisSwitch;
    ITimeAxis *timeAxis;
    QtRedis * resultRedis;
    std::map<QString,int> count;

public slots:
    void CloseGetResult();
};

#endif // GETANALYSISRESULTTHREAD_H
