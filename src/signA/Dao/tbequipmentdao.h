#ifndef TBEQUIPMENTDAO_H
#define TBEQUIPMENTDAO_H
//这个文件在老项目中没有被调用过
#include "mapper/pddatabase.h"
#include "entity/tbequipment.h"

class TbEquipmentDao :public PDDatabase
{
public:
    TbEquipmentDao(PDSQL* pdsql);
    TbEquipmentDao(PDSQL* pdsql,const TbEquipmentDao &equipment);
    ~TbEquipmentDao();

public:
    PDAttribute m_equipmentId;
    PDAttribute m_ip;
    PDAttribute m_createTime;
    PDAttribute m_status;

    void SetTableFieldValues(TbEquipment equipment);
    void GetTableFieldValues(TbEquipment &equipment);

    bool SelectObjectsByCondition(vector<TbEquipmentDao> &selectedValueVector, string strSqlQueryWhere);
    bool SelectObjectsByCondition(vector<TbEquipmentDao> &selectedValueVector, int iStartNumber, int iRecordCount, string strSqlQueryWhere );
};

#endif // TBEQUIPMENTDAO_H
