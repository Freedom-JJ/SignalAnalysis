#include "rediscontroller.h"

RedisController::RedisController(QObject *parent) : QObject(parent)
{

}

RedisController::~RedisController()
{
    delete redis;
}

void RedisController::OpenRedis(QString host , int port){

    redis = new QtRedis(host,port);

    if (!redis->openConnection())
    {
        qDebug() << "Could not connect to server...";
        exit(0);
    }

    qDebug() << "Connected to server...";

}

QtRedis* RedisController::SetRedisObject(){

    return redis;
    qDebug() <<"对象可以传进来"<<endl;
}

QString RedisController::DataSerialize(ThreadSafeQueue<double> &dataQueue){

    Document jsonDoc;
    Document::AllocatorType &allocator = jsonDoc.GetAllocator();
    jsonDoc.SetObject();
    rapidjson::Value dataArray(rapidjson::kArrayType);// 创建一个数组元素
    int saveCount = dataQueue.size();
    for (int i = 0; i < saveCount; i++){
        ////循环采集数据的队列去保存数据
        shared_ptr<double> signal = dataQueue.wait_and_pop();
        dataArray.PushBack(*signal, allocator);
    }

    jsonDoc.AddMember("CollectionData", dataArray, allocator);

    //生成字符串
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    jsonDoc.Accept(writer);

    std::string strJson = std::string(buffer.GetString());
    QString q_strSson = QString::fromStdString(strJson);
    return q_strSson;
}

QString RedisController::VectorDataSerialize(QVector<double> restVector){

    Document jsonDoc;
    Document::AllocatorType &allocator = jsonDoc.GetAllocator();
    jsonDoc.SetObject();
    rapidjson::Value dataArray(rapidjson::kArrayType);// 创建一个数组元素
    int saveCount = restVector.size();
    for (int i = 0; i < saveCount; i++){
        dataArray.PushBack(restVector[i], allocator);
    }

    jsonDoc.AddMember("\"CollectionData\"", dataArray, allocator);

    //生成字符串
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    jsonDoc.Accept(writer);

    std::string strJson = std::string(buffer.GetString());
    QString q_strSson = QString::fromStdString(strJson);
    return q_strSson;
}


void RedisController::RedisSetCollectionData(QString channelCode, QString jsonData){

    QString redisKey = QString("redisCollectionData-%1").arg(channelCode);
    this->redis->lpush(redisKey,jsonData);

}
