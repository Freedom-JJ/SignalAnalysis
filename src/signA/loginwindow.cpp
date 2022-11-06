#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "View/OpenDataFileDialog.h"
LoginWindow::LoginWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_loginButton_clicked()
{
    QString loginName = ui->loginNameLineEdit->text();
    QString loginPassword = ui->UserPasswordLineEdit->text();
    UserController userController;
    if(loginName == ""){
        QMessageBox::information(this,"提示","用户名不应该为空");
        return;
    }
    User* user = new User();
    user->setLoginName(mqstos(loginName));
    user->setLoginPassword(mqstos(loginPassword));
    Result result = userController.UserLogin(user);
    if(result.getCode()==200){
        this->close();
        MainWindow *mainWindow = new MainWindow();
        mainWindow->show();
    }
    else if(result.getCode()==204){
        QMessageBox::information(this,"提示",mstoqs(result.getMsg()));
    }
    else if(result.getCode()==203){
        QMessageBox::information(this,"提示",mstoqs(result.getMsg()));
    }
    QMessageBox::information(this,"提示",mstoqs(result.getMsg()));
    delete user;

}

void LoginWindow::on_registerButton_clicked()
{
    RegisterWindow* registerWindow = new RegisterWindow();
    this->close();
    registerWindow->show();
}
