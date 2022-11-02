#ifndef UUIDUTIL_H
#define UUIDUTIL_H
/******************************************************************************
 * Copyright 2022/11/01 Co., Ltd.
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       uuidutil.h
 * @brief      文件概述：生成UUID，随机文件名
 *
 * @author     wangzexin<wangzexin19990311@163.com>
 * @date       2022/11/01
 * @location   哈尔滨理工大学人工智能实验室
 *****************************************************************************/

#include <QString>
#include <QUuid>
#include "Result/result.h"
using std::string;


class UUIDUtil
{
public:
    static Result GetUUID(string &uuid);
};

#endif // UUIDUTIL_H
