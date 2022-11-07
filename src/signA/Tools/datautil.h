#ifndef DATAUTIL_H
#define DATAUTIL_H
/******************************************************************************
 * Copyright 2022/11/01 Co., Ltd.
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       datautil.h
 * @brief      文件概述：按照指定格式得到当前时间
 *
 * @author     wangzexin<wangzexin19990311@163.com>
 * @date       2022/11/01
 * @location   哈尔滨理工大学人工智能实验室
 *****************************************************************************/
#include <QDateTime>

using std::string;
class DataUtil
{
public:
    static string GetCurrentCStringTime();
};

#endif // DATAUTIL_H
