#include "analysisresult.h"

AnalysisResult::AnalysisResult()
{
    errorMap[Level::ABNORMAL1] = QString("棒轴承");
    errorMap[Level::ABNORMAL2] = QString("棒轴承加铁屑剥落");
    errorMap[Level::ABNORMAL3] = QString("齿轮啮合故障");
    errorMap[Level::ABNORMAL4] = QString("轴心偏离30");
    errorMap[Level::ABNORMAL5] = QString("轴心偏离70");
}

AnalysisResult::AnalysisResult(const QString &vid,const QString &vchannel,const Level &vinf,const QString &vstart,const QString &vend)
{
    id = id;
    channel = vchannel;
    errorInf = vinf;
    start = vstart;
    end= vend;
}

QString AnalysisResult::getId() const
{
    return id;
}

void AnalysisResult::setId(const QString &value)
{
    id = value;
}

QString AnalysisResult::getChannel() const
{
    return channel;
}

void AnalysisResult::setChannel(const QString &value)
{
    channel = value;
}


QString AnalysisResult::getStart() const
{
    return start;
}

void AnalysisResult::setStart(const QString &value)
{
    start = value;
}

QString AnalysisResult::getEnd() const
{
    return end;
}

void AnalysisResult::setEnd(const QString &value)
{
    end = value;
}

AnalysisResult::Level AnalysisResult::getErrorInf() const
{
    return errorInf;
}

QString AnalysisResult::strLevel()
{
    return errorMap[this->errorInf];
}

void AnalysisResult::setErrorInf(const Level &value)
{
    errorInf = value;
}

QMap<AnalysisResult::Level, QString> AnalysisResult::getErrorMap()
{
    return errorMap;
}

AnalysisResult::Level AnalysisResult::getLevelByQStr(QString value)
{
    value = value.simplified();
    auto it = errorMap.begin();
    while(it != errorMap.end()){
        if (it.value() == value){
            return it.key();
        }
        it++;
    }
    return Level::NORMAL;
}


