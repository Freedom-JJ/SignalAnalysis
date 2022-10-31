#include "user.h"

User::User()
{
    this->loginPassword = "123456";//默认登陆密码
    this->postId = 1;//默认普通用户
}

User::User(vector<string> user_attribute)
{
    if(int(user_attribute.size())!=attribute_num){
        qCritical()<<"user initialized falsed, the size of user_attribute should be equal to attribute_num";
    }
    this->id = mstoll(user_attribute[0]);
    this->loginName = user_attribute[1];
    this->loginPassword = user_attribute[2];
    this->name = user_attribute[3];
    this->postId = mstoll(user_attribute[4]);
    this->telephone = user_attribute[5];
}


void User::setId(long long id)
{
    this->id = id;
}

long long User::getId()
{
    return this->id;
}

void User::setLoginName(string loginName)
{
    this->loginName = loginName;
}

string User::getLoginName()
{
    return this->loginName;
}

void User::setLoginPassword(string loginPassword)
{
    this->loginPassword = loginPassword;
}

string User::getLoginPassword()
{
    return this->loginPassword;
}

void User::setName(string name)
{
    this->name = name;
}

string User::getName()
{
    return this->name;
}

void User::setPostId(long long postId)
{
    this->postId = postId;
}

long long User::getPostId()
{
    return this->postId;
}

void User::setTelephone(string telephone)
{
    this->telephone = telephone;
}

string User::getTelephone()
{
    return this->telephone;
}


