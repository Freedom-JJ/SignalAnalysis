#include "redissetupdialog.h"
#include "ui_redissetupdialog.h"

RedisSetUpDialog::RedisSetUpDialog(MainWindow *redisDia,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RedisSetUpDialog)
{
    ui->setupUi(this);
    this->redisDia = redisDia;
    ui->IsOPenRedisCheckBox->setText("是否开启服务器传输");
    ui->IsOPenRedisCheckBox->setStyleSheet("font-size : 10px");
    ui->hostEdit->setPlaceholderText("请输入redis地址，如：localhost");
    ui->portEdit->setPlaceholderText("请输入redis端口号，如：6379");
    if(redisDia->theApp->redisState == redisDia->theApp->RedisState::REDIS_OPEND){
           ui->IsOPenRedisCheckBox->setCheckState(Qt::Checked);
    }else if(redisDia->theApp->redisState == redisDia->theApp->RedisState::REDIS_NOT_OPEN){
           ui->IsOPenRedisCheckBox->setCheckState(Qt::Unchecked);
    }
}

RedisSetUpDialog::~RedisSetUpDialog()
{
    delete ui;
}

void RedisSetUpDialog::on_IsOPenRedisCheckBox_stateChanged(int state)
{
    if (state == Qt::Checked) // "选中"
        {
            redisDia->theApp->redisState = redisDia->theApp->RedisState::REDIS_OPEND;
        }
    else if(state == Qt::Unchecked)// 未选中 - Qt::Unchecked
    {
         redisDia->theApp->redisState = redisDia->theApp->RedisState::REDIS_NOT_OPEN;
    }

}


void RedisSetUpDialog::on_redisButton_clicked()
{
    QString editHost = ui->hostEdit->text();
    QString editPort = ui->portEdit->text();
    int transPort = editPort.toInt();

    redis = new QtRedis(editHost,transPort);

    if (!redis->openConnection())
    {
        qDebug() << "Could not connect to server...";
        QMessageBox msgBox;
        msgBox.setText("连接服务器失败");
        msgBox.exec();
        exit(0);
    }

    qDebug() << "Connected to server...";
    QMessageBox msgBox2;
    msgBox2.setText("连接服务器成功");
    msgBox2.exec();

    redisDia->theApp->initHost = editHost;
    redisDia->theApp->initPort = transPort;

}

void RedisSetUpDialog::on_InitButton_clicked()
{
    QString initHost  = redisDia->theApp->initHost;
    int initPort = redisDia->theApp->initPort;

    QtRedis *redisInit = new QtRedis(initHost,initPort);

    redisInit->openConnection();

    for(int i=0;i<redisDia->theApp->m_vchannelCodes.size();i++){
        QString signalCode = redisDia->theApp->m_vchannelCodes[i];
        QString redisKey = QString("redisCollectionData-%1").arg(signalCode);
        QString resultKey = QString("AnalysisResult-%1").arg(signalCode);
        redisInit->del(redisKey);
        redisInit->del(resultKey);
    }

    QMessageBox msgBox3;
    msgBox3.setText("清空redis数据库成功");
    msgBox3.exec();


}
