#ifndef HARDWARECONTROLLER_H
#define HARDWARECONTROLLER_H
#include <QDebug>
#include <string>
#include <QString>
#include <Windows.h>
#include <QLibrary>
#include <QCoreApplication>
#include "Domain/channel.h"

class HardWareController
{
public:
    HardWareController();

public:
    bool InitLibrary();

    char pMacInfo[256]; //仪器ip

    std::string upFrequency = "PASS";   //默认上限频率    参数id:10

    std::string fullValue = "10000";     //默认满度量程   参数id:5

    std::string inputMode = "DIF_DC";    //默认输入方式   参数id:12

    std::string elcPressure = "10000";    //默认电压测量范围  参数id:90

    std::string measureType = "电压测量";   //默认测量方式 参数id:4

    std::vector<Channel *> m_channels;

public:

    /**
     * @brief:初始化硬件连接并检测仪器
     */
    bool InitHardWare();

    /**
     * @brief: 初始化采样参数
     */
    void initSamplingPara(float frequency);

    /**
     * @brief:初始化通道参数
     */
    void initChannelPara();

    void SetChannels(std::vector<Channel*> channels);


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

    /**
     * @brief: 修改仪器参数
     */
    typedef bool(*ModifyMacChnParam)(int, const char*,int, int, const char*);
    ModifyMacChnParam m_pModifyMacChnParam;

    /**
     * @brief: 获取通道参数可选列表
     */
    typedef int (*GetMacChnParamListValue)(int, const char*,int, int, char*, int, int*);
    GetMacChnParamListValue m_pGetMacChnParamListValue;

    /**
     * @brief: 获取仪器信息
     */
    typedef int (*GetMacInfoFromIndex)(int, int*, char*, int,int*);
    GetMacInfoFromIndex m_pGetMacInfoFromIndex;

    /**
     * @brief: 获取当前通道仪器参数
     */
    typedef int (*GetMacChnCurrentParam)(int,int, const char*,int, char*, int, int*);
    GetMacChnCurrentParam m_pGetMacChnCurrentParam;
};

#endif // HARDWARECONTROLLER_H
