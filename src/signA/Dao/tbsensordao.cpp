#include "tbsensordao.h"



TbSensorDao::TbSensorDao(PDSQL *pdsql):PDDatabase(pdsql)
{
    this->m_strTableName = "tb_sensor";
    m_key = &m_sensorId;
    SetVectorAndField("sensor_id", "int", m_sensorId);
    SetVectorAndField("sensor_name", "string", m_sensorName);
    SetVectorAndField("sensor_type", "string", m_sensorType);
}
TbSensorDao::TbSensorDao(PDSQL* pdsql,const TbSensorDao &sensor):PDDatabase(pdsql)
{
    this->m_strTableName = "tb_sensor";
    m_key = &m_sensorId;
    SetVectorAndField("sensor_id", "int", m_sensorId);
    SetVectorAndField("sensor_name", "string", m_sensorName);
    SetVectorAndField("sensor_type", "string", m_sensorType);
    operator = (sensor);
}
TbSensorDao::~TbSensorDao()
{

}
void TbSensorDao::SetTableFieldValues(TbSensor sensor)
{
    this->m_sensorId.SetValue(sensor.GetSensorId());
    this->m_sensorName.SetValue(sensor.GetSensorName());
    this->m_sensorType.SetValue(sensor.GetSensorType());
}
void TbSensorDao::GetTableFieldValues(TbSensor &sensor)
{
    sensor.SetSensorId(m_sensorId.GetInt());
    sensor.SetSensorName(m_sensorName.m_strValue);
    sensor.SetSensorType(m_sensorType.m_strValue);
}

bool TbSensorDao::SelectObjectsByCondition(vector<TbSensorDao> &selectedValueVector, string strSqlQueryWhere = "")
{
    int iStartNumberIn = 0; int iRecordCountIn = 0;
    return SelectObjectsByCondition(selectedValueVector, iStartNumberIn, iRecordCountIn, strSqlQueryWhere);

}
bool TbSensorDao::SelectObjectsByCondition(vector<TbSensorDao> &selectedValueVector, int iStartNumber, int iRecordCount, string strSqlQueryWhere = "")
{
    vector<string> tmpDetectedObjecIDs;
    TbSensorDao sensor(pdsql);
    if (sensor.GetKeyIdList(tmpDetectedObjecIDs, strSqlQueryWhere, iStartNumber, iRecordCount))
    {
        for (int iStart = 0; iStart < int(tmpDetectedObjecIDs.size()); iStart++)
        {
            sensor.m_sensorId.m_strValue = tmpDetectedObjecIDs[iStart];
            if (sensor.SelectByKey())
            {
                selectedValueVector.push_back(sensor);
            }
            else
            {
                return false;
            }
        }
        return true;
    }
    else
    {
        return false;
    }
}


