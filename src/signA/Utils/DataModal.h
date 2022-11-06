/*******************************
*   File:       DataModal.h
*   Author:     江德鸿
*   Company:    哈尔滨理工大学
*   Time:       2022-11-06
*   brief:      为了解决MainWindow重复引用问题,替代其作为数据Modal,或者使theApp为静态变量
********************************/
#ifndef DATAMODAL_H
#define DATAMODAL_H

#include <QObject>

class DataModal:QObject
{
    Q_OBJECT
public:
    DataModal();
    
    
    
};

#endif // DATAMODAL_H
