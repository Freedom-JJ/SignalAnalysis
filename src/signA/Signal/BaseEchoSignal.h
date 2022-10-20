#ifndef BASEECHOSIGNAL_H
#define BASEECHOSIGNAL_H
/******************************************************************************
 * Copyright 2022/10/11 Co., Ltd.
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       BaseEchoSignal.h
 * @brief      文件概述：信号基类，用于将信号传递至View层
 *
 * @author     wangzexin<wangzexin19990311@163.com>
 * @date       2022/10/11
 * @location   哈尔滨理工大学人工智能实验室
 *****************************************************************************/
#include <vector>
#include <map>
#include <QString>

class BaseEchoSignal
{
public:
    BaseEchoSignal();

    virtual void PushEchoSignal(double* chartPoints)=0;

    virtual std::map<QString,QVector<double>> PopEchoSignal()=0;

    virtual void clearEchoSignal()=0;

public:

};

#endif // BASEECHOSIGNAL_H
