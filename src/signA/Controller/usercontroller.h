#ifndef USERCONTROLLER_H
#define USERCONTROLLER_H
#include "entity/result.h"
#include "entity/tbuser.h"
#include "service/userservice.h"
class UserController
{

private:
    UserService m_userService;
public:
    UserController(PDSQL* pdsql);
    ~UserController();


    Result LoginCheck(TbUser &TbUser);
    /**********************************************************************
     功能描述： 添加用户
    ***********************************************************************/
    Result AddUser(TbUser user);
};

#endif // USERCONTROLLER_H
