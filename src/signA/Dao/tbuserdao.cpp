#include "tbuserdao.h"

TbUserDao::TbUserDao(PDSQL *pdsql):PDDatabase(pdsql)
{
    this->m_strTableName = "tb_user";
    m_key = &m_userId;
    SetVectorAndField("user_id", "int", m_userId);
    SetVectorAndField("login_name", "string", m_loginName);
    SetVectorAndField("login_password", "string", m_password);
    SetVectorAndField("name", "string", m_Name);
    SetVectorAndField("post", "string", m_Post);
    SetVectorAndField("telephone", "string", m_Telephone);
    SetVectorAndField("status", "int", m_status);
}

TbUserDao::TbUserDao(PDSQL *pdsql,const TbUserDao &userDao):PDDatabase(pdsql)
{
    this->m_strTableName = "tb_user";
    m_key = &m_userId;
    SetVectorAndField("user_id", "int", m_userId);
    SetVectorAndField("login_name", "string", m_loginName);
    SetVectorAndField("login_password", "string", m_password);
    SetVectorAndField("name", "string", m_Name);
    SetVectorAndField("post", "string", m_Post);
    SetVectorAndField("telephone", "string", m_Telephone);
    SetVectorAndField("status", "int", m_status);
    operator = (userDao);
}

TbUserDao::~TbUserDao()
{

}

void TbUserDao::SetTableFieldValues(TbUser user)
{
    m_userId.SetValue(user.GetUserId());
    m_Name.SetValue(user.GetName());
    m_loginName.SetValue(user.GetLoginName());
    m_password.SetValue(user.GetPassWord());
    m_Post.SetValue(user.GetPost());
    m_Telephone.SetValue(user.GetTelephone());
    m_status.SetValue(user.GetStatus());
}

void TbUserDao::GetTableFieldValues(TbUser &user){
    user.SetUserId(m_userId.GetInt());
    user.SetLoginName(m_Name.m_strValue);
    user.SetPassWord(m_password.m_strValue);
    user.SetName(m_Name.m_strValue);
    user.SetPost(m_Post.m_strValue);
    user.SetTelephone(m_Telephone.m_strValue);
    user.SetStatus(m_status.GetInt());
}
