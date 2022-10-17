/******************************************************************************
 * Copyright 2022/10/11 Co., Ltd.
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       aircraftcasingvibratesystem.h
 * @brief      文件概述：辅助主函数进行参数初始化的类
 *
 * @author     wangzexin<wangzexin19990311@163.com>
 * @date       2022/10/11
 * @location   哈尔滨理工大学人工智能实验室
 *****************************************************************************/
#ifndef AIRCRAFTCASINGVIBRATESYSTEM_H
#define AIRCRAFTCASINGVIBRATESYSTEM_H
#include <QString>
#include <QMap>
#include "ThreadSafeQueue.h"
#include "Signal/StaticSpectralEchoSignal.h"
class AirCraftCasingVibrateSystem
{
public:
    AirCraftCasingVibrateSystem();

    bool m_isAlarm;//是否报警
    double m_alarmLimit;//报警上限
    const int SHOW_CHANNEL_USE = 3; 	/// 通道使用标志
    const int SHOW_CHANNEL_MEASURETYPE = 4; /// 通道测量类型1
    const int SHOW_CHANNEL_FULLVALUE = 5; 	/// 满度量程1
    const int SHOW_CHANNEL_SENSECOEF = 6; 	/// 传感器灵敏度1
    const int SHOW_CHANNEL_UPFREQ = 10; 	/// 上限频率1
    const int SHOW_CHANNEL_DOWNFREQ = 11; 	/// 下限频率1
    const int SHOW_CHANNEL_ACQ_INPUTMODE = 12; 	/// 输入方式1
    const int SHOW_CHANNEL_ANTIFILTER = 14; 	/// 抗混滤波器
    const int SHOW_ELC_PRESSURE = 90;        ///电压测量范围1

/******************************王泽鑫10月3日周更改****************************************************/


    int m_icollectState = 0; //采集状态 0 ：停止采集 1：开始采集 2：暂停采集
    int data_length = 20000;
    bool m_bisSave = false;//保存状态
    StaticSpectralEchoSignal staticEchoSignal;



/**********************************************************************************/

};



#endif // AIRCRAFTCASINGVIBRATESYSTEM_H
