#ifndef PRODUCTDIALOG_H
#define PRODUCTDIALOG_H

#include <QDialog>
#include<QMessageBox>
#include "Dao/productdao.h"
#include "projectdetail.h"
namespace Ui {
class ProductDialog;
}

class ProductDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ProductDialog(QWidget *parent = nullptr);
    ~ProductDialog();
    void initData(QString name );

private slots:
    void on_openBtn_clicked();

    void on_changeBtn_clicked();

    void on_newBtn_clicked();

    void on_searchBtn_clicked();

    void on_deleteBtn_clicked();

private:
    Ui::ProductDialog *ui;
    ProductDao productDao;
    QVector<Product > productVec;
};

#endif // PRODUCTDIALOG_H
