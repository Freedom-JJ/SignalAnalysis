#ifndef JSAVECOLLECTIONDATATHREAD_H
#define JSAVECOLLECTIONDATATHREAD_H

#include <QObject>
#include "mainwindow.h"
class JSaveCollectionDataThread : public QThread
{
    Q_OBJECT
public:
    JSaveCollectionDataThread(class MainWindow *st);
    void run();

private:
    MainWindow *saveThread;
};

#endif // JSAVECOLLECTIONDATATHREAD_H
