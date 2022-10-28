
#include "log.h"
static int LogType = 2;//配置日志等级，Fatal = 0,Critical,Warning,Info,Debug
static QFile *gFileLog=nullptr;

static char const *msgHead[]={
    "Debug   ",
    "Warning ",
    "Critical",
    "Fatal   ",
    "Info    "
};
enum{
    Fatal = 0,
    Critical,
    Warning,
    Info,
    Debug
};


void myMessageOutput(QtMsgType type, const QMessageLogContext &context, const QString &msg)
{
    //加锁：避免对文件的同时读写
    static QMutex mutex;
    mutex.lock();
    //toLocal8Bit是将QString 以自己正确的编码方式读取并转换为编译器编码方式的字节流
    QByteArray localMsg = msg.toLocal8Bit();
    QString current_date_time = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ddd");



    if(gFileLog){
        fprintf(stderr, "%s | %s | %s:%u, %s | %s\n", msgHead[type], current_date_time.toLocal8Bit().constData(), context.file, context.line, context.function, localMsg.constData());

        //如果不大于默认日志等级，将日志写入日志文件中
        if(gFileLog->open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append)){
            QString msgText ="";
            switch(type){
            case QtDebugMsg:
                if(LogType == Debug ){
                    msgText="%1 | %6 | %2:%3, %4 | %5\n";
                    msgText = msgText.arg(msgHead[type]).arg(context.file).arg(context.line).arg(context.function).arg(localMsg.constData()).arg(current_date_time);
                }
                break;
            case QtInfoMsg:
                if(LogType>=Info ){
                    msgText="%1 | %6 | %2:%3, %4 | %5\n";
                    msgText = msgText.arg(msgHead[type]).arg(context.file).arg(context.line).arg(context.function).arg(localMsg.constData()).arg(current_date_time);
                }
                break;
            case QtWarningMsg:
                if(LogType>=Warning ){
                    msgText="%1 | %6 | %2:%3, %4 | %5\n";
                    msgText = msgText.arg(msgHead[type]).arg(context.file).arg(context.line).arg(context.function).arg(localMsg.constData()).arg(current_date_time);
                }
                break;
            case QtCriticalMsg:
                if(LogType>=Critical){
                    msgText="%1 | %6 | %2:%3, %4 | %5\n";
                    msgText = msgText.arg(msgHead[type]).arg(context.file).arg(context.line).arg(context.function).arg(localMsg.constData()).arg(current_date_time);
                }
                break;
            case QtFatalMsg:
                if(LogType>=Fatal ){
                    msgText="%1 | %6 | %2:%3, %4 | %5\n";
                    msgText = msgText.arg(msgHead[type]).arg(context.file).arg(context.line).arg(context.function).arg(localMsg.constData()).arg(current_date_time);
                }
                break;

            }
            if(msgText!=""){
                QTextStream tWrite(gFileLog);
                tWrite << msgText;
            }
            //清空缓存
            gFileLog->flush();
            //关闭文件
            gFileLog->close();
        }
    }else{
        fprintf(stderr, "logger failed %s | %s | %s:%u, %s | %s\n", msgHead[type], current_date_time.toLocal8Bit().constData(), context.file, context.line, context.function, localMsg.constData());
    }
    //解锁
    mutex.unlock();
}




void logSysInit(QString filePath)
{
    gFileLog = new QFile(filePath);
    if (!gFileLog->open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append)){
        return;
    }
    gFileLog->close();
    //初始化自定义日志处理函数myMessageOutput
    qInstallMessageHandler(myMessageOutput);
}

void logSysInit()
{
    qInstallMessageHandler(myMessageOutput);
}

