#ifndef OPENPROJECTWINDOW_H
#define OPENPROJECTWINDOW_H

#include <QDialog>
#include<QDateTime>
#include<QSqlDatabase>
#include<QMessageBox>
#include <QDebug>
#include <QSqlQuery>
#include"MainWindow.h"
#include"Domain/project.h"
#include"Controller/projectcontroller.h"
#include"Controller/channelcontroller.h"
namespace Ui {
class OpenProjectWindow;
}

class OpenProjectWindow : public QDialog
{
    Q_OBJECT

public:
    explicit OpenProjectWindow(QWidget *parent = nullptr);
    ~OpenProjectWindow();

    void setMw(MainWindow *value);

private slots:
    void on_pushButton_clicked();

    void on_open_clicked();

    void alignVCenter(int count);

    void select(QString sqlSelest);

    void on_cancel_clicked();

    void on_comboBox_activated(const QString &arg1);

private:
    Ui::OpenProjectWindow *ui;
    MainWindow *mw;
    std::vector<Project> projectVec;
    ProjectController projectCon;
    ChannelController channelCon;
};

#endif // OPENPROJECTWINDOW_H
