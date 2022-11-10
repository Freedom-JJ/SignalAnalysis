/*******************************
*   File:       SignalFeature.h
*   Author:     江德鸿
*   Company:    哈尔滨理工大学
*   Time:       2022-11-10
*   eMail:      1714203542@qq.com
*   brief:      计算信号特征值
********************************/
#ifndef SIGNALFEATURE_H
#define SIGNALFEATURE_H

#include<map>
#include<QVector>
#include<QString>

//c++11单例写法，c++11对static有特殊处理
class SignalFeature
{

private:
    SignalFeature();

public:
    //必须返回指针，要不然会有赋值构造
    static SignalFeature * getInstance(){
          static SignalFeature feature;
          return &feature;
    }

    std::map<QString,double> getFeaturesWithMap(QVector<double> &value);
    QString getFeaturesWithString(QVector<double> &value);
    double getMax();
    double maxv,minv,meanv;
    double s2v,ev,sumv,peakv=0; //方差，有效值，总值,峰值

};

#endif // SIGNALFEATURE_H
