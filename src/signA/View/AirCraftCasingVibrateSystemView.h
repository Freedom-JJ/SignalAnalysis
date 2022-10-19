#ifndef AIRCRAFTCASINGVIBRATESYSTEMVIEW_H
#define AIRCRAFTCASINGVIBRATESYSTEMVIEW_H
#include <QMap>
#include <QVector>
#include "Utils/ThreadSafeQueue.h"
class AirCraftCasingVibrateSystemView
{
public:
    AirCraftCasingVibrateSystemView();

public:

    virtual QMap<QString, QVector<int>> getNextData() = 0;

};

#endif // AIRCRAFTCASINGVIBRATESYSTEMVIEW_H
