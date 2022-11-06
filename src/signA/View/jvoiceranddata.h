/*******************************
*   File:       jvoiceranddata.h
*   Author:     江德鸿
*   Company:    哈尔滨理工大学
*   Time:       2022-11-06
*   brief:      生成语音随机数据
********************************/
#ifndef JVOICERANDDATA_H
#define JVOICERANDDATA_H

#include <QObject>
#include <QVector>
#include "jdataviewecho.h"
class JVoiceRandData : public JDataViewEcho
{
    Q_OBJECT
public:
    JVoiceRandData();
    map<QString, QVector<double>> getNextData() override;
};

#endif // JVOICERANDDATA_H
