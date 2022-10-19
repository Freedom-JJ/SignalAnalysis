#ifndef RANDDATAWITHDEMO_H
#define RANDDATAWITHDEMO_H

#include <QObject>
#include <QDebug>
#include "jdataviewecho.h"
class randDataWithDemo : public JDataViewEcho
{
    Q_OBJECT
public:
    randDataWithDemo();
    map<QString, QVector<double>> getNextData() override;
};

#endif // RANDDATAWITHDEMO_H
