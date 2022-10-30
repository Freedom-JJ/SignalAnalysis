#include "tbequipmentdao.h"

TbEquipmentDao::TbEquipmentDao(PDSQL* pdsql):PDDatabase(pdsql)
{
    this->m_strTableName = "tb_equipment";
    m_key = &m_equipmentId;
    SetVectorAndField("equipment_id", "int", m_equipmentId);
    SetVectorAndField("ip", "string", m_ip);
    SetVectorAndField("create_time", "string", m_createTime);
    SetVectorAndField("status", "int", m_status);
}
TbEquipmentDao::TbEquipmentDao(PDSQL* pdsql,const TbEquipmentDao &equipment):PDDatabase(pdsql)
{
    this->m_strTableName = "tb_equipment";
    m_key = &m_equipmentId;
    SetVectorAndField("equipment_id", "int", m_equipmentId);
    SetVectorAndField("ip", "string", m_ip);
    SetVectorAndField("create_time", "string", m_createTime);
    SetVectorAndField("status", "int", m_status);
    operator = (equipment);
}
TbEquipmentDao::~TbEquipmentDao()
{

}

void TbEquipmentDao::SetTableFieldValues(TbEquipment equipment)
{
    this->m_equipmentId.SetValue(equipment.GetEquipmentId());
    this->m_ip.SetValue(equipment.GetIp());
    this->m_createTime.SetValue(equipment.GetCreateTime());
    this->m_status.SetValue(equipment.GetStatus());
}
void TbEquipmentDao::GetTableFieldValues(TbEquipment &equipment)
{
    equipment.SetEquipmentId(m_equipmentId.GetInt());
    equipment.SetIp(m_ip.m_strValue);
    equipment.SetCreateTime(m_createTime.m_strValue);
    equipment.SetStatus(m_status.GetInt());
}

bool TbEquipmentDao::SelectObjectsByCondition(vector<TbEquipmentDao> &selectedValueVector, string strSqlQueryWhere = "")
{
    int iStartNumberIn = 0; int iRecordCountIn = 0;
    return SelectObjectsByCondition(selectedValueVector, iStartNumberIn, iRecordCountIn, strSqlQueryWhere);
}
bool TbEquipmentDao::SelectObjectsByCondition(vector<TbEquipmentDao> &selectedValueVector, int iStartNumber, int iRecordCount, string strSqlQueryWhere = "")
{
    vector<string> tmpDetectedObjecIDs;
    TbEquipmentDao equipment(pdsql);
    if (equipment.GetKeyIdList(tmpDetectedObjecIDs, strSqlQueryWhere, iStartNumber, iRecordCount))
    {
        for (int iStart = 0; iStart < int(tmpDetectedObjecIDs.size()); iStart++)
        {
            equipment.m_equipmentId.m_strValue = tmpDetectedObjecIDs[iStart];
            if (equipment.SelectByKey())
            {
                selectedValueVector.push_back(equipment);
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
