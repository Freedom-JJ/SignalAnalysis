#include "randdatawithdemo.h"

randDataWithDemo::randDataWithDemo()
{
    qDebug()<<"数据演示接口"<<endl;
}

map<QString , QVector<double>> randDataWithDemo::getNextData(){
    map<QString , QVector<double>> res;
    QVector<double> tem;
    static double  qq = 0;
    for(int code = 0 ; code < 4 ; code ++){
        for(int j = 0 ; j < 10000 ; j++){
            double signal = sin(qq + j * 0.01);
            tem.append(signal);
        }
        res[QString::number(code)] = tem;
        tem.clear();
    }
    qq += 0.2;
    qDebug()<<"qq:"<<qq<<endl;
    return res;
}
