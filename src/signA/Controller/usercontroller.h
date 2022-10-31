#ifndef USERCONTROLLER_H
#define USERCONTROLLER_H

#include "../Service/userservice.h"
#include "../Result/result.h"

class UserController
{
public:
    UserController();

    Result UserLogin(User* user);

    Result UserRegister(User* user);
private:
    UserService* userService;
};

#endif // USERCONTROLLER_H
