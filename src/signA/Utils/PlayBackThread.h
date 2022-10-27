#ifndef PLAYBACKTHREAD_H
#define PLAYBACKTHREAD_H
#include "../mainwindow.h"
#include <QThread>
#include <QDebug>
/******************************************************************************
 * Copyright 2022/10/25 Co., Ltd.
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       SumPlayBackThread
 * @brief      概述：回放总线程
 *
 * @author     wangzexin<wangzexin19990311@163.com>
 * @date       2022/10/25
 * @location   哈尔滨理工大学人工智能实验室
 *****************************************************************************/

class PlayBackThread;
class SumPlayBackThread : public QThread
{
    Q_OBJECT
public:

    SumPlayBackThread(class MainWindow *spt):sumPlayThread(spt){

    }

    void run() override;


public:
    MainWindow *sumPlayThread;

    std::vector<PlayBackThread*> playBackThreadVector;

signals:
    /**
     * @brief stopRefresh,回放正常结束（文件读取完）
     */
    void stopRefresh();
};


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
    PlayBackThread(class MainWindow *pt , QString sc , QString url):playThread(pt) , signalCode(sc), DataUrl(url){

    }

    void run() override;


public:
    MainWindow *playThread;
    QString signalCode;
    QString DataUrl;

};

#endif // PLAYBACKTHREAD_H
