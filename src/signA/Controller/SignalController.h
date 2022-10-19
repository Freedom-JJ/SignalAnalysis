#ifndef SIGNALCONTROLLER_H
#define SIGNALCONTROLLER_H


#include <QFile>
#include <QDataStream>
#include <QVector>
#include "Entity/result.h"
#include "Utils/ThreadSafeQueue.h"

class SignalController
{
public:
    SignalController();
    ~SignalController();

public:
    /**********************************************************************
    功能描述： 保存采样数据为二进制文件
    输入参数：outputStream--输出流；acquireSigna--采集信号
    ***********************************************************************/
    Result SaveCollectionData2Binary(QDataStream &outputStream, ThreadSafeQueue<double> & acquireSignal);
};

#endif // SIGNALCONTROLLER_H
