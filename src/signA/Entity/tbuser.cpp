#include "tbuser.h"

TbUser::TbUser(int userId, string loginName, string password, int Status){
    this->m_userId = userId;
    this->m_loginName = loginName;
    this->m_Password = password;
    this->m_status = Status;
}
TbUser::~TbUser()
{

}

string  TbUser::GetLoginName(){
     return m_loginName;
}

string TbUser::GetPassWord(){
    return m_Password;
}

void TbUser::SetLoginName(string loginName){
    this->m_loginName = loginName;
}
void TbUser::SetPassWord(string password){
    this->m_Password = password;
}
int TbUser::GetUserId(){
    return this->m_userId;
}
void TbUser::SetUserId(int userId){
    this->m_userId = userId;
}

string TbUser::GetName(){
    return m_Name;
}
void TbUser::SetName(string realName){
    m_Name = realName;
}
void TbUser::SetPost(string Post){
    m_Post = Post;
}
string TbUser::GetPost(){
    return m_Post;
}

void  TbUser::SetTelephone(string telephone){
    m_Telephone = telephone;
}
string TbUser::GetTelephone(){
    return m_Telephone;
}

void TbUser::SetStatus(int Status)
{
    m_status = Status;
}
int TbUser::GetStatus()
{
    return m_status;
}
