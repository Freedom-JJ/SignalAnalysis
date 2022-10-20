#ifndef JDATAVIEWECHO_H
#define JDATAVIEWECHO_H

#include <QObject>

class JDataViewEcho : public QObject
{
    Q_OBJECT
public:
    explicit JDataViewEcho(QObject *parent = nullptr);
    virtual QMap<QString, QVector<int>> getNextData() = 0;
signals:

};

#endif // JDATAVIEWECHO_H
