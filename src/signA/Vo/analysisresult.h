/*******************************
*   File:       analysisresult.h
*   Author:     江德鸿
*   Company:    哈尔滨理工大学
*   Time:       2022-11-15
*   eMail:      1714203542@qq.com
*   brief:      只表示某一祯数据的错误信息，不能表达连续错误祯信息(可能为同一种错误，比如第1，2祯都是一种错误，但是无法归类到一起）
********************************/

#ifndef ANALYSISRESULT_H
#define ANALYSISRESULT_H

#include<QString>
#include<QMap>
class AnalysisResult
{

public:
    enum Level{NORMAL,ABNORMAL1,ABNORMAL2,ABNORMAL3,ABNORMAL4,ABNORMAL5}; //信号等级，(暂时)正常和不正常
public:
    AnalysisResult();
    AnalysisResult(const QString &vid,const QString &vchannel,const Level &vinf,const QString &vstart,const QString &vend);
    QString getId() const;
    void setId(const QString &value);

    QString getChannel() const;
    void setChannel(const QString &value);



    QString getStart() const;
    void setStart(const QString &value);

    QString getEnd() const;
    void setEnd(const QString &value);

    Level getErrorInf() const;
    QString strLevel();
    void setErrorInf(const Level &value);

    QMap<Level ,QString> getErrorMap();

    Level getLevelByQStr(QString value);
private:
    //表达了第几祯信号
    QString id;
    //表达了通道
    QString channel;
    //表达信号错误数据

    Level errorInf;
    //信号开始时间
    QString start;
    //信号结束时间
    QString end;

    QMap<Level , QString> errorMap;

};

#endif // ANALYSISRESULT_H
