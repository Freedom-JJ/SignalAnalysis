#ifndef REDISSETUPDIALOG_H
#define REDISSETUPDIALOG_H

#include <QDialog>
#include <QDebug>
#include <QMessageBox>
#include "mainwindow.h"
#include "./RedisTools/qtredis.h"
#include "./RedisTools/reader.h"
namespace Ui {
class RedisSetUpDialog;
}

class RedisSetUpDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RedisSetUpDialog(MainWindow *redisDia, QWidget *parent = nullptr);
    ~RedisSetUpDialog();

public:
    MainWindow *redisDia;

private slots:
    void on_IsOPenRedisCheckBox_stateChanged(int arg1);

    void on_redisButton_clicked();

    void on_InitButton_clicked();

private:
    Ui::RedisSetUpDialog *ui;

    QtRedis *redis;

};

#endif // REDISSETUPDIALOG_H
