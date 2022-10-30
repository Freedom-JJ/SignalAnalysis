#ifndef TBUSERDAO_H
#define TBUSERDAO_H

#include "mapper/pddatabase.h"
#include "entity/tbuser.h"
class TbUserDao: public PDDatabase
{
public:
    //父类具有显式构造函数，因此编译器不会向其添加隐式“empty”构造函数
    TbUserDao(PDSQL* pdsql);
    TbUserDao(PDSQL* pdsql,const TbUserDao &useDao);
    ~TbUserDao();

    PDAttribute  m_userId;
    PDAttribute  m_loginName;
    PDAttribute  m_password;
    PDAttribute  m_Name;
    PDAttribute  m_Post;
    PDAttribute  m_Telephone;
    PDAttribute  m_status;
    void SetTableFieldValues(TbUser user);
    void GetTableFieldValues(TbUser &user);
};

#endif // TBUSERDAO_H
