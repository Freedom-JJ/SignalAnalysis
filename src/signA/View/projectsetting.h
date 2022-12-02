#ifndef PROJECTSETTING_H
#define PROJECTSETTING_H

#include <QDialog>
#include<QMessageBox>
#include<QPushButton>
#include"Controller/projectcontroller.h"
#include"Controller/channelcontroller.h"

namespace Ui {
class ProjectSetting;
}

class ProjectSetting : public QDialog
{
    Q_OBJECT

public:
    explicit ProjectSetting(QWidget *parent = nullptr);
    ~ProjectSetting();
    void initAllProject();
private slots:
    void on_comboBox_currentIndexChanged(int index);

    void on_updateBtn_clicked();

    void on_deleteBtn_clicked();

private:
    Ui::ProjectSetting *ui;
    std::vector<Project *> projectVec;
    QVector<Channel *> channelVec;

    ProjectController projectCon;
    ChannelController channelCon;
};

#endif // PROJECTSETTING_H
