#ifndef OPENDATAFILEDIALOG_H
#define OPENDATAFILEDIALOG_H

#include <QDialog>
#include<QGridLayout>
#include "Controller/SignalController.h"
#include "Vo/sumsignalandprojectnamevo.h"
#include<QStandardItemModel>
namespace Ui {
class OpenDataFileDialog;
}

class OpenDataFileDialog : public QDialog
{
    Q_OBJECT

public:
    explicit OpenDataFileDialog(QWidget *parent = nullptr);
    ~OpenDataFileDialog();

private:
    void initTableViewData();
private slots:
    void on_tableView_pressed(const QModelIndex &index);

    void on_tableView_clicked(const QModelIndex &index);

private:
    Ui::OpenDataFileDialog *ui;
    SignalController controller;
};

#endif // OPENDATAFILEDIALOG_H
