#ifndef SIGNALFEATURE_H
#define SIGNALFEATURE_H

#include<map>
#include<QVector>
#include<QString>

class SignalFeature
{

public:
    SignalFeature();
    std::map<QString,double> getFeaturesWithMap(QVector<double> &value);
    QString getFeaturesWithString(QVector<double> &value);
    double getMax();
    double maxv,minv,meanv;
    double s2v,ev,sumv,peakv=0; //方差，有效值，总值,峰值
};

#endif // SIGNALFEATURE_H
