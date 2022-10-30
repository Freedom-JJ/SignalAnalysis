#include "usercontroller.h"

UserController::UserController(PDSQL* pdsql):m_userService(pdsql)
{

}


UserController::~UserController()
{
}

Result UserController::LoginCheck(TbUser & user){

    if (user.GetLoginName() == ""){
        return Result(false, "用户名不能为空");
    }
    if (user.GetPassWord() == ""){
        return Result(false, "密码不能为空");
    }
    TbUser selectedUser;
    selectedUser.SetLoginName(user.GetLoginName());
    bool  isSuccess = m_userService.getOneByCondition(selectedUser);
    if (!isSuccess){ return Result(false, "用户查询失败"); }

    if (selectedUser.GetPassWord() == user.GetPassWord()){
        user = selectedUser;
        return Result(true,"登录成功");
    }
    else{
        return Result(false, "用户名或密码错误");
    }

}


Result UserController::AddUser(TbUser user)
{

    if (user.GetLoginName() == ""){
        return Result(false, "用户名不能为空");
    }
    if (user.GetPassWord() == ""){
        return Result(false, "密码不能为空");
    }
    bool  isSuccess = m_userService.AddUser(user);
    if (!isSuccess){ return Result(false, "注册失败"); }
    else{ return Result(true, "注册成功"); }
}
