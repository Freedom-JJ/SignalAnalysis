#ifndef TBEQUIPMENT_H
#define TBEQUIPMENT_H
#include<string>
using namespace std;

class TbEquipment
{
public:
    TbEquipment();
    TbEquipment(int equipmentId=0, string ip="", string createTime="", int status=0);
    ~TbEquipment();
private:
    int m_equipmentId;
    string m_ip;
    string m_createTime;
    int m_status;
public:
    int GetEquipmentId();
    void SetEquipmentId(int equipmentId);

    string GetIp();
    void SetIp(string ip);

    string GetCreateTime();
    void SetCreateTime(string createTime);

    int GetStatus();
    void SetStatus(int status);

};

#endif // TBEQUIPMENT_H
