#include "registerwindow.h"
#include "ui_registerwindow.h"
RegisterWindow::RegisterWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegisterWindow)
{
    ui->setupUi(this);
}

RegisterWindow::~RegisterWindow()
{
    delete ui;
}

void RegisterWindow::on_registerPushButton_clicked()
{
    QString loginName = ui->loginNameLineEdit->text();
    QString loginPassword = ui->passwordLineEdit->text();
    QString name = ui->nameLineEdit->text();
    QString telephone = ui->telephoneLineEdit->text();
    bool adm = ui->administratorRadioButton->isChecked();
    if(loginName.isEmpty()){
        QMessageBox::information(this,"提示","用户名不应该为空");
        return;
    }
    if(loginPassword.isEmpty()){
        QMessageBox::information(this,"提示","登陆密码不应该为空");
        return;
    }
    User* user = new User();
    user->setLoginName(mqstos(loginName));
    user->setLoginPassword(mqstos(loginPassword));
    user->setName(mqstos(name));
    user->setTelephone(mqstos(telephone));
    user->setPostId(adm?2:1);
    UserController userController;
    Result result = userController.UserRegister(user);
    if(result.getCode()==202){
        QMessageBox::information(this,"提示","该用户名已经存在，请重新注册");
    }
    else if(result.getCode()==200){
        this->close();
        QMessageBox::information(this,"提示",mstoqs(result.getMsg()));
        MainWindow *mainWindow = new MainWindow();
        mainWindow->show();
    }
    else{
        QMessageBox::information(this,"提示",mstoqs(result.getMsg()));
    }
}
