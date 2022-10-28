#ifndef USERDAO_H
#define USERDAO_H

#include "../Domain/user.h"
#include "pdsqlinitialize.h"
#include <vector>

class UserDao
{
public:
    UserDao();
    //返回所有的用户
    vector<User*> listUsers(string query_condition="");

    //根据用户id返回用户
    User* getUserById(long long id);

    //根据用户登陆名返回用户
    User* getUserByName(string loginName);

    //插入用户，返回用户id
    int insert(User* user,bool insert_id=false);


};

#endif // USERDAO_H
