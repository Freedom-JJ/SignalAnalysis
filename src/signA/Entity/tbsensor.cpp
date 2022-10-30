#include "tbsensor.h"

TbSensor::TbSensor()
{

}
TbSensor::TbSensor(int sensorId, string sensorName, string sensorType)
{
    SetSensorId(sensorId);
    SetSensorName(sensorName);
    SetSensorType(sensorType);
}
TbSensor::~TbSensor()
{

}
int TbSensor::GetSensorId()
{
    return m_sensorId;
}
void TbSensor::SetSensorId(int sensorId)
{
    this->m_sensorId = sensorId;
}

string TbSensor::GetSensorName()
{
    return m_sensorName;
}
void TbSensor::SetSensorName(string sensorName)
{
    this->m_sensorName = sensorName;
}

string TbSensor::GetSensorType()
{
    return m_sensorType;
}
void TbSensor::SetSensorType(string sensorType)
{
    this->m_sensorType = sensorType;
}
