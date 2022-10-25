#include <QCoreApplication>
#include <iostream>
#include <QFile>
#include <QVector>
#include <QDataStream>
#include <QString>
#include <QDebug>
using namespace std;

int readFile(){

    QVector<QVector<double>> sum;

    QFile file("D:\\QtCollectionData\\change-0-2.txt");
    if(!file.open(QIODevice::ReadOnly))
    {
        std::cerr << "Cannot open file for reading: "
                  << qPrintable(file.errorString())
                  << std::endl;
        return 0;
    }
    QDataStream in(&file);
    in.setVersion(QDataStream::Qt_5_9);

    in >> sum;

    cout<<sum.size();

////    for(int i=0;i<nums.size();i++){
////        cout<<nums[i]<<endl;
////    }


}

QVector<QVector<double>> readFileforsin(){

    QVector<QVector<double>> sum;

    QFile file("D:\\QtCollectionData\\81BF1D2E-6C1A-413a-A3BC-860B173949DB-0-3.txt");
    if(!file.open(QIODevice::ReadOnly))
    {
        std::cerr << "Cannot open file for reading: "
                  << qPrintable(file.errorString())
                  << std::endl;
//        return 0;
    }

    QVector<double> singleData;
    while(!file.atEnd()){
        if(singleData.size()==20000){
            sum.append(singleData);
            QVector<double>().swap(singleData);
        }
        QByteArray line = file.readLine();
        QString str(line);
        QStringList list = str.split("\r");
        QString ereryData = list[0];
        double d = ereryData.toDouble();
        //qDebug() << d<<endl;
        singleData.append(d);
    }
    sum.append(singleData);

    return sum;
}

void writeSignal(QVector<QVector<double>> sum){
    QString fileName = QString("D:\\QtCollectionData\\change-0-3.txt");
    QFile f(fileName);

    if(!f.open(QIODevice::WriteOnly))
    {
       qDebug()<<"fileed"<<endl;
    }
    QDataStream outputStream(&f);
    outputStream.setVersion(QDataStream::Qt_5_9);
    cout<<sum.size()<<endl;
    for(int i=0;i<sum.size();i++){
         outputStream<<sum[i];
    }

}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    QVector<QVector<double>> sum = readFileforsin();

    writeSignal(sum);

    return a.exec();
}
