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
};

#endif // SIGNALFEATURE_H
