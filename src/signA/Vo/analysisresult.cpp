#include "analysisresult.h"

AnalysisResult::AnalysisResult()
{

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

void AnalysisResult::setErrorInf(const Level &value)
{
    errorInf = value;
}


