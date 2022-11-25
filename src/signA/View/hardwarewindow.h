#ifndef HARDWAREWINDOW_H
#define HARDWAREWINDOW_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class HardwareWindow;
}

class HardwareWindow : public QDialog
{
    Q_OBJECT

public:
    explicit HardwareWindow(MainWindow *hardWare ,QWidget *parent = nullptr);
    ~HardwareWindow();

private slots:
    void on_HWCheckBox_stateChanged(int state);

    void on_initConnectButton_clicked();

    void on_refindMacButton_clicked();


    void on_initParaButton_clicked();

public:
    MainWindow *hardWare;

private:
    Ui::HardwareWindow *ui;
};

#endif // HARDWAREWINDOW_H
