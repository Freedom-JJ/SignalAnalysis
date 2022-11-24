#include "usercontroller.h"


UserController::UserController()
{
    this->userService = new UserService();
}

//解决无法得到用户所有信息bug
Result UserController::UserLogin(User* user)
{
    User* quser = userService->getUsersByLoginName(user->getLoginName());
    if(quser){
        if(quser->getLoginPassword()==user->getLoginPassword()){
            *user = *quser;
            return Result(200,"登录成功");
        }
        else{
            return Result(204,"密码错误，请重新输入");
        }
    }
    else{
        return Result(203,"该用户不存在，请重新登录");
    }
}

Result UserController::UserRegister(User *user)
{
    User* quser = userService->getUsersByLoginName(user->getLoginName());
    if(quser){
        return Result(202,"该用户已存在,请重新选择用户名");
    }
    int id = userService->addUser(user);
    if(id ==0 ){
        return Result(201,"注册失败");
    }
    else{
        return Result(200,"注册成功");
    }

}

