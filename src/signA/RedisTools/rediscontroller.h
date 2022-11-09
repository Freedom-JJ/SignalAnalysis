#ifndef REDISCONTROLLER_H
#define REDISCONTROLLER_H
/******************************************************************************
 * Copyright 2022/11/07 Co., Ltd.
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       rediscontroller.h
 * @brief      文件概述：Redis工具，redis相关内容都在此
 *
 * @author     wangzexin<wangzexin19990311@163.com>
 * @date       2022/11/07
 * @location   哈尔滨理工大学人工智能实验室
 *****************************************************************************/
#include <QObject>
#include <QVector>
#include "qtredis.h"
#include "reader.h"
#include <QTime>
#include "./Utils/ThreadSafeQueue.h"
#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/rapidjson.h"
#include "rapidjson/stringbuffer.h"

using namespace std;
using namespace rapidjson;

class RedisController : public QObject
{
    Q_OBJECT
public:
    explicit RedisController(QObject *parent = 0);
    ~RedisController();

    /**
     * @brief ：连接redis
     */
    void OpenRedis(QString host , int port);

public:
    static Document m_document;

    QString DataSerialize(ThreadSafeQueue<double> &dataQueue);

    void RedisSetCollectionData(QString channelCode, QString jsonData);

    QString VectorDataSerialize(QVector<double> restVector);

    QtRedis * SetRedisObject();

public:
    QtRedis *redis;
};

#endif // REDISCONTROLLER_H
