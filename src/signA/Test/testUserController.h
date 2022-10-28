#ifndef TESTUSERCONTROLLER_H
#define TESTUSERCONTROLLER_H

#include "../Controller/usercontroller.h"

void testUserController(){
    UserController userController;
    Result result = userController.UserLogin("ljl");
    qDebug()<<"ljl login :"<<mstoqs(result.getMsg());
    result =userController.UserLogin("wrongName");
    qDebug()<<"wrongName login :"<<mstoqs(result.getMsg());

}



#endif // TESTUSERCONTROLLER_H
