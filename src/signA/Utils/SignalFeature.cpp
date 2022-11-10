#include "SignalFeature.h"

SignalFeature::SignalFeature()
{

}



std::map<QString, double> SignalFeature::getFeaturesWithMap(QVector<double> &value)
{
    meanv=0,minv=0,maxv=0,s2v=0,ev=0,sumv=0,peakv=0;
    for(int index = 0 ; index < value.size(); index++){
        sumv += value[index];
        maxv = qMax(value[index],maxv);
        minv = qMin(value[index],minv);
        ev =ev + value[index]*value[index];
    }
    ev = sqrt(ev/value.size());
    meanv = sumv/value.size();
    peakv = maxv - minv;
    for(int index = 0 ; index < value.size(); index++){
        s2v += pow((value[index] - meanv),2);
    }
    s2v =s2v/ value.size();
    std::map<QString,double> res;
    res["最大值"] = maxv;
    res["最小值"] = minv;
    res["均值"] = meanv;
    res["峰值"] = peakv;
    res["有效值"] = ev;
//    res["方差"] = s2v;
    return res;
}

QString SignalFeature::getFeaturesWithString(QVector<double> &value)
{
    auto map = getFeaturesWithMap(value);
    QString res = "";
    auto it =map.begin();
    while(it!=map.end()){
       res += it->first+":"+QString::number(it->second) + "\n";
       it++;
    }
    return res;
}

double SignalFeature::getMax()
{
    return maxv;
}


