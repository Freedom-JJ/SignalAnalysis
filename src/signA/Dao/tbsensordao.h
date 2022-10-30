#ifndef TBSENSORDAO_H
#define TBSENSORDAO_H
#include "mapper/pddatabase.h"
#include "entity/tbsensor.h"
#include <string>

using namespace std;
class TbSensorDao :public PDDatabase
{
public:
    TbSensorDao(PDSQL* pdsql);
    TbSensorDao(PDSQL* pdsql,const TbSensorDao &sensor);
    ~TbSensorDao();

public:
    PDAttribute m_sensorId;
    PDAttribute m_sensorName;
    PDAttribute m_sensorType;

    void SetTableFieldValues(TbSensor sensor);
    void GetTableFieldValues(TbSensor &sensor);

    bool SelectObjectsByCondition(vector<TbSensorDao> &selectedValueVector, string strSqlQueryWhere);
    bool SelectObjectsByCondition(vector<TbSensorDao> &selectedValueVector, int iStartNumber, int iRecordCount, string strSqlQueryWhere );

};

#endif // TBSENSORDAO_H
