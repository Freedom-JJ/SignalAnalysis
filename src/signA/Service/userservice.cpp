#include "userservice.h"
#include "../Dao/userdao.h"
UserService::UserService()
{
    this->userDao = new UserDao();
    this->projectDao = new ProjectDao();
}

User* UserService::getUsersByLoginName(string loginName)
{
    User* user = this->userDao->getUserByLoginName(loginName);
    return user;
}

vector<Project *> UserService::getProjectsByUserLoginName(User *user)
{
    vector<Project*> projects = this->projectDao->getProjectsByUserId(user->getId());
    return projects;
}

int UserService::addUser(User *user)
{
    return this->userDao->insert(user);
}




