#ifndef JSAVECOLLECTIONDATATHREAD_H
#define JSAVECOLLECTIONDATATHREAD_H

#include <QObject>

class JSaveCollectionDataThread : public SaveCollectionDataThread
{
    Q_OBJECT
public:
    JSaveCollectionDataThread();

    void run();
};

#endif // JSAVECOLLECTIONDATATHREAD_H
