#ifndef USERSERVICE_H
#define USERSERVICE_H

#include "../Dao/projectdao.h"
#include "../Dao/userdao.h"

class UserService
{
public:
    UserService();

    //根据登录名获得用户，用作登录时使用
    User* getUsersByLoginName(string loginName);

    //根据用户，找到该用户创建的所有项目
    vector<Project*> getProjectsByUserLoginName(User* user);

    //添加用户,user的id不需要赋值，自增，在controller中需要判断用户的loginName是否存在
    int addUser(User* user);

private:
    UserDao* userDao;
    ProjectDao* projectDao;
};

#endif // USERSERVICE_H
