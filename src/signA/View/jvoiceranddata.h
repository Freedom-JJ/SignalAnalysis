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
