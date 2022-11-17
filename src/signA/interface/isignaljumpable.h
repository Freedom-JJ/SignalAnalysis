/*******************************
*   File:       isignaljumpable.cpp
*   Author:     江德鸿
*   Company:    哈尔滨理工大学
*   Time:       2022-11-16
*   eMail:      1714203542@qq.com
*   brief:      开启信号可跳转功能，刷新,可能需要保存之前的信号
********************************/
#ifndef ISIGNALJUMPABLE_H
#define ISIGNALJUMPABLE_H

#include<map>
#include<QVector>
#include<QString>
#include"Vo/analysisresult.h"

class ISignalJumpAble
{
public:
    ISignalJumpAble();

    virtual void jumpAndRefresh(const AnalysisResult &) = 0;
    virtual void jumpAndRefresh(const std::map<QString,QVector<double>> &) =0;
};

#endif // ISIGNALJUMPABLE_H
