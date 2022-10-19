#include "jvoiceranddata.h"

JVoiceRandData::JVoiceRandData()
{

}

map<QString, QVector<double>> JVoiceRandData::getNextData(){
    map<QString, QVector<double>>  data;
    for (int i = 0; i < 4; ++i) {
        QVector<double> *t = new QVector<double>;
        for (int j = 0; j < 100; ++j) {
            double singal = sin(2 * 3.1415926 * j / 100.0) + qrand()%5 * 0.002;
            t->append(singal);
        }
        data[QString::number(i)]=*t;
    }
    return data;
}
