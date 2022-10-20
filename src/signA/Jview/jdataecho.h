#ifndef JDATAECHO_H
#define JDATAECHO_H

#include <QObject>

class JDataEcho : public QObject
{
    Q_OBJECT
public:
    explicit JDataEcho(QObject *parent = nullptr);

signals:

};

#endif // JDATAECHO_H
