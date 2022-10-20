#ifndef JDATAVIEWECHO_H
#define JDATAVIEWECHO_H

#include <QObject>
#include <map>
using namespace std;
class JDataViewEcho : public QObject
{
    Q_OBJECT
public:
    explicit JDataViewEcho(QObject *parent = nullptr);
    virtual map<QString, QVector<double>> getNextData() = 0;
signals:

};

#endif // JDATAVIEWECHO_H
