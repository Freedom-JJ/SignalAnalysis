#ifndef STATICSPECTRALECHOSIGNAL_H
#define STATICSPECTRALECHOSIGNAL_H

/******************************************************************************
 * Copyright 2022/10/11 Co., Ltd.
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       StaticSpectralEchoSignal.h
 * @brief      文件概述：用于送至静态刷新界面的信号类
 *
 * @author     wangzexin<wangzexin19990311@163.com>
 * @date       2022/10/11
 * @location   哈尔滨理工大学人工智能实验室
 *****************************************************************************/
#include <QDebug>
#include "BaseEchoSignal.h"
#include "Utils/ThreadSafeQueue.h"
#include "Utils/SmartFFTWComplexArray.h"
#include "Utils/FFTWUtil.h"
#include "Utils/aircraftcasingvibratesystem.h"
#include "Utils/GetDataThread.h"
#include "../mainwindow.h"
class StaticSpectralEchoSignal : public BaseEchoSignal
{
public:
    friend class AirCraftCasingVibrateSystem;
    friend class GetDataThread;
    friend class MainWindow;

    StaticSpectralEchoSignal();

    /**
     * @brief 将数据送入回显队列
     */
    void PushEchoSignal(double* chartPoints);

    /**
     * @brief ：从回显队列中取出数据
     */
    std::map<QString,QVector<double>> PopEchoSignal();

    /**
    * @brief ：清空回显队列
    */
    void clearEchoSignal();


private:
    ThreadSafeQueue<double*> m_staticSpectralEchoSignalQueue;

};

#endif // STATICSPECTRALECHOSIGNAL_H
