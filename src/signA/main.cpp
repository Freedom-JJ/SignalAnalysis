#include "mainwindow.h"
#include <QApplication>
#include <QTextCodec>
#include <QDir>
#include <QDateTime>
#include <QLocale>
#include <QTranslator>
#include <QScopedPointer>
#include <QProcess>
#include <QElapsedTimer>
#include <QAbstractSocket>
#include "SAThemeManager.h"
#include "SACsvStream.h"
#include "SAServeHandleFun.h"

#include "Logger/log.h"
#include "Dao/pdsqlinitialize.h"
#include "QSqlDatabase"
#include <QSqlDriver>
#include "Controller/usercontroller.h"
#include "Test/testUserController.h"


//#if defined(_MSC_VER) && (_MSC_VER >= 1600)
//#pragma execution_character_set("utf-8")
//#endif

#ifdef Q_OS_WIN
#ifdef _DEBUG
#include <crtdbg.h>
#endif
#endif
const int max_start_serve_retry_count = 10;

//按照QLocal加载语言
void load_local_language(QApplication& app);

//开启服务进程
void start_serve_process(int maxTrycount = 20);

//初始化全局数据库连接
void init_database(){
    global_pdsql = new PDSQL();
    string strIPp = "localhost";
    string strUser = "root";
    string strPassword = "root";
    string strDatabase = "aricraft_db";
    int iPort = 3306;
    global_pdsql->SetMysql(strIPp,strUser,strPassword,strDatabase,iPort);
    global_pdsql->OpenSql();
    qInfo () <<"数据库是否支持事务操作：" << QSqlDatabase::database().driver()->hasFeature(QSqlDriver::Transactions);
}

//初始化全局日志
void init_log(){
    logSysInit("log.txt");
}

int main(int argc, char *argv[])
{
    int r(-1);
    init_log();//初始化日志
    init_database();//初始化数据库
    testUserController();

#if QT_VERSION < QT_VERSION_CHECK(5, 0, 0)
#if defined(_MSC_VER) && (_MSC_VER < 1600)
    QTextCodec::setCodecForTr(QTextCodec::codecForName("GB18030"));
#else
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
#endif
#endif
    //测试数据库，暂时将界面部分注释
    /*
    QApplication a(argc, argv);
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling, true);
    qRegisterMetaType<QAbstractSocket::SocketError>("QAbstractSocket::SocketError");
    QCoreApplication::addLibraryPath(QCoreApplication::applicationDirPath() + QDir::separator() + "libs");
    qDebug() << "libs path:" << QCoreApplication::libraryPaths();

    //加载本地语言
    load_local_language(a);

    //启动服务程序
    start_serve_process(max_start_serve_retry_count);
    //样式设置，数据库测试
    MainWindow w;
    w.show();

    r = a.exec();*/

    return (r);
}


void start_serve_process(int maxTrycount)
{
    QElapsedTimer timer;

    timer.start();
    QString path = qApp->applicationDirPath()+"/signADataProc.exe";
    QStringList args = { QString::number(qApp->applicationPid()) };
    bool startstat = false;
    int retrycout = 0;

    do
    {
        startstat = QProcess::startDetached(path, args);//signADataProc是一个单例进程，多个软件不会打开多个
        ++retrycout;
        qDebug() << "try start data precess serve "<<retrycout << " times";
    }while(retrycout < maxTrycount && !startstat);
    qInfo() << QObject::tr("start data process server , cost:%1 ms").arg(timer.elapsed());
}


///
/// \brief 加载语言
///
void load_local_language(QApplication& app)
{
    QScopedPointer<QTranslator> translator(new QTranslator);
    QLocale loc;

    qDebug() << "init uiLanguages " << loc.uiLanguages();
    qDebug() << "init QLocale.bcp47Name " << loc.bcp47Name();
    if ("zh" == loc.bcp47Name()) {
        QFont f = app.font();
        f.setFamily(QStringLiteral("微软雅黑"));
        app.setFont(f);
    }

    QString lngPath = qApp->applicationDirPath();

    lngPath = lngPath + QDir::separator() + "language";
    qDebug() << "language dir：" << lngPath;
    if (translator->load(loc, QString(), QString(), lngPath)) {
        qApp->installTranslator(translator.take());
    }
}
