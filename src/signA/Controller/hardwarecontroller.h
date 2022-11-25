#ifndef HARDWARECONTROLLER_H
#define HARDWARECONTROLLER_H
#include <QDebug>
#include <string>
#include <QString>
#include <Windows.h>
#include <QLibrary>

class HardWareController
{
public:
    HardWareController();

public:
    bool InitLibrary();

public:

    /**
     * @brief:获取仪器数据
     */
    typedef int(*GetOneMacChnDataEx)(int, long*, long*, long long*, long, long*);
    GetOneMacChnDataEx m_pGetOneMacChnDataEx;

    /**
     * @brief: 获取数据索引
     */
    typedef int(*GetOneMacDataIndex)(int, int);
    GetOneMacDataIndex m_pGetOneMacDataIndex;

    /**
     * @brief:初始化仪器
     */
    typedef void(*InitMacControl)(const char*);
    InitMacControl m_pInitMacControlEx;

    /**
     * @brief:退出仪器
     */
    typedef void(*QuitMacControl)();
    QuitMacControl m_pQuitMacControl;

    /**
     * @brief:刷新仪器并重连
     */
    typedef bool(*RefindAndConnecMac)();
    RefindAndConnecMac m_pRefindAndConnecMac;

    /**
     * @brief:开始仪器采集
     */
    typedef bool(*StartMacSample)();
    StartMacSample m_pStartMacSample;

    /**
     * @brief:停止仪器采集
     */
    typedef bool(*StopMacSample)();
    StopMacSample m_pStopMacSample;

    /**
     * @brief:检测仪器是否正在采集
     */
    typedef int(*IsSampling)();
    IsSampling m_pIsSampling;

    /**
     * @brief:设置采样频率
     */
    typedef bool(*SetMacSampleFreq)(float);
    SetMacSampleFreq m_pSetMacSampleFreq;

    /**
     * @brief: 设置每次获取数据的数据量
     */
    typedef int(*SetGetDataCountEveryTime)(long);
    SetGetDataCountEveryTime m_pSetGetDataCountEveryTime;

    /**
     * @brief: 获取已连接仪器
     */
    typedef int(*GetWaitDealMacInfo)(char*, int, int*);
    GetWaitDealMacInfo m_pGetWaitDealMacInfo;

};

#endif // HARDWARECONTROLLER_H
