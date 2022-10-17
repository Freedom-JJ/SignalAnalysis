#ifndef RANDDATAWITHDEMO_H
#define RANDDATAWITHDEMO_H

#include <QObject>
#include <QDebug>
#include "jdataviewecho.h"
#include "Signal/BaseEchoSignal.h"
class randDataWithDemo : public JDataViewEcho,public BaseEchoSignal
{
    Q_OBJECT
public:
    randDataWithDemo();
    std::map<QString, QVector<double>> getNextData() override;
    void PushEchoSignal(double* chartPoints) override;

    std::map<QString,QVector<double>> PopEchoSignal() override;
};

#endif // RANDDATAWITHDEMO_H
