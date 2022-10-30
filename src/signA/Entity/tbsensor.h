#ifndef TBSENSOR_H
#define TBSENSOR_H
#include <string>

using namespace std;
class TbSensor
{
public:
    TbSensor();
    TbSensor(int sensorId, string sensorName, string sensorType);
    ~TbSensor();
private:
    int m_sensorId;
    string m_sensorName;
    string m_sensorType;
public:
    int GetSensorId();
    void SetSensorId(int sensorId);

    string GetSensorName();
    void SetSensorName(string sensorName);

    string GetSensorType();
    void SetSensorType(string sensorType);
};

#endif // TBSENSOR_H
