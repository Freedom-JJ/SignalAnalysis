#ifndef NEWPROJECTDIALOG_H
#define NEWPROJECTDIALOG_H

#include <QDialog>
#include"mainwindow.h"
#include"spectrum.h"
namespace Ui {
class NewProjectDialog;
}

class NewProjectDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NewProjectDialog(MainWindow * mv,QWidget *parent = nullptr);
    ~NewProjectDialog();

private slots:
    void on_lineEdit_3_editingFinished();



    void on_previousbtn_clicked();

    void on_nextbtn_clicked();

    void on_lineEdit_3_textChanged(const QString &arg1);

    void on_okbtn_clicked();

private:
    Ui::NewProjectDialog *ui;
    MainWindow *mv;
    int channelNumber = 4;
};

#endif // NEWPROJECTDIALOG_H
