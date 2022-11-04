#ifndef OPENDATAFILEDIALOG_H
#define OPENDATAFILEDIALOG_H

#include <QDialog>
#include<QGridLayout>
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
    void initTableView();
private slots:
    void on_tableView_pressed(const QModelIndex &index);

private:
    Ui::OpenDataFileDialog *ui;
};

#endif // OPENDATAFILEDIALOG_H
