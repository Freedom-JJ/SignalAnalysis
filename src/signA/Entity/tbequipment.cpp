#include "tbequipment.h"

TbEquipment::TbEquipment()
{

}
TbEquipment::TbEquipment(int equipmentId, string ip, string createTime, int status)
{
    SetEquipmentId(equipmentId);
    SetIp(ip);
    SetCreateTime(createTime);
    SetStatus(status);
}
TbEquipment::~TbEquipment()
{

}
int TbEquipment::GetEquipmentId()
{
    return m_equipmentId;
}
void TbEquipment::SetEquipmentId(int equipmentId)
{
    this->m_equipmentId = equipmentId;
}

string TbEquipment::GetIp()
{
    return m_ip;
}
void TbEquipment::SetIp(string ip)
{
    this->m_ip = ip;
}

string TbEquipment::GetCreateTime()
{
    return m_createTime;
}
void TbEquipment::SetCreateTime(string createTime)
{
    this->m_createTime = createTime;
}

int TbEquipment::GetStatus()
{
    return m_status;
}
void TbEquipment::SetStatus(int status)
{
    this->m_status = status;
}

