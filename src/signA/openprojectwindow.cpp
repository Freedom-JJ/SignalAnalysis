#include "openprojectwindow.h"
#include "ui_openprojectwindow.h"

OpenProjectWindow::OpenProjectWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OpenProjectWindow)
{
    ui->setupUi(this);
#if(0)
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    QStringList list = QSqlDatabase::drivers(); //获取到QT中所支持的数据库驱动类型
    qDebug() << list;  //输出所支持的数据库驱动类型
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setDatabaseName("aricraft_db");
    db.setPassword("root");
    db.setPort(3306);
#endif

    this->setWindowTitle(tr("打开项目"));
    //设置表格的列数，必须要先设置，不然表格显示不出来
    ui->tableWidget->resize(1021,300);                                  //设置长和宽
    ui->tableWidget->setColumnCount(3);
    //建立表头
    QStringList header;
    header <<"项目序号" << "项目名称" << "项目创建时间";
    ui->tableWidget->setHorizontalHeaderLabels(header);
    //设置表头显示模式,这里设置的是拉伸模式
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    //ui->tableWidget->setSelectionMode(QAbstractItemView::ExtendedSelection); //设置单个选中

    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);       //设置选择行

    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);        //不允许编辑
    QString sqlSelect = QString("select * from project;");
    select(sqlSelect);
}

OpenProjectWindow::~OpenProjectWindow()
{
    delete ui;
}

void OpenProjectWindow::on_pushButton_clicked()                     //打开项目中的搜索按钮
{
    QSqlQuery query;//在创建该数据对象时，系统会自动完成跟数据库的关联
    QDateTime current_time = QDateTime::currentDateTime();//显示时间，格式为：年-月-日 时：分：秒 周几

    QString str = current_time.toString("yyyy-MM-dd hh:mm:ss");//格式化时间
    ui->tableWidget->clearContents();
    int rowNum=  ui->tableWidget->rowCount();
    for(int i = 0 ; i < rowNum ; i++)//清空列表
    {
        ui->tableWidget->removeRow(0);
    }
    QString name1 = ui->lineEdit->text();                       //获取当前输入的名字条件
    QString project_select_time = ui->comboBox->currentText();  // 获取当前的时间选择条件获取
    // 下面进行条件筛选
    if(project_select_time == "全部日期"){
        QString sqlSelect = QString("select * from project where projectName = '%1';").arg(name1);
        select(sqlSelect);
    }
    if(project_select_time == "最近一天"){
        QString sqlSelect = QString("projectName = '%1';");

        select(sqlSelect);
    }
    if(project_select_time == "最近一周"){
        QString sqlSelect = QString("'%1';").arg(name1);;
        select(sqlSelect);
    }
    if(project_select_time == "最近一月"){
        QString sqlSelect = QString("projectName = '%1';").arg(name1);;
        select(sqlSelect);
    }
    if(project_select_time == "最近半年"){
        QString sqlSelect = QString("projectName = '%1';").arg(name1);;
        select(sqlSelect);
    }
    if(project_select_time == "最近一年"){
        QString sqlSelect = QString("projectName = '%1';").arg(name1);;
        select(sqlSelect);
    }
}

void OpenProjectWindow::on_open_clicked()                               //打开项目中的打开按钮
{
    // 获取表格所选行的指针，若表格中没有任何一行吧被选中，则指针指向空
    QList<QTableWidgetItem*> items = ui->tableWidget->selectedItems();

    //表格有某行被选中
    if(!items.empty()){
        //获取该行的成员数
        int count = items.count();
        // 获取该行的行号
        int rowindex = ui->tableWidget->row(items.at(0));
        QStringList project_list;                               //创建一个QStringlist存储所获取的内容
        // 打印该行所有成员内容
        for(int i = 0; i < count; i++)
        {
            QTableWidgetItem *item = items.at(i); //该行第i列的item
            project_list.append(item->text());
            //qDebug() << item->text(); //获取内容
        }
        qDebug() << project_list; //输出
        int id = (project_list[0]).toInt();
        QString name = project_list[1];
        QString time = project_list[2];
        qDebug()<<id << name <<time;

        QSqlQuery query;//在创建该数据对象时，系统会自动完成跟数据库的关联
        QString sqlselect1 = QString("select * from project where id = %1;").arg(id);
        if(!query.exec(sqlselect1)){
            qDebug() << "create tabel error";
        }
        else{
            qDebug() << sqlselect1;
            QStringList project_selest;
            while (query.next()) {
                int id = query.value("id").toInt();
                QString name = query.value("projectName").toString();
                QString time = query.value("projectCreateTime").toString();
            qDebug()<<id<<name<<time;
            }
        }
      }
      else{
          QMessageBox::warning(this,"警告","请先选择一行再进行操作");
      }
}

void OpenProjectWindow::alignVCenter(int count)                     //将tablewidget中的内容进行居中对齐
{
    for (int i=0;i<count;i++)
       {
           for (int j=0;j<3;j++)
           {
               ui->tableWidget->item(i,j)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
           }
    }
}

void OpenProjectWindow::select(QString sqlSelest)                   //打开项目中的查询显示在tablewidget上
{
    qDebug()<< sqlSelest;
    QSqlQuery query;//在创建该数据对象时，系统会自动完成跟数据库的关联
    if(!query.exec(sqlSelest))
    {
        qDebug() << "create tabel error";
    }
    else {
        int count = 0;
        int project_count = 0;
        while (query.next()) {
            //向表里面动态添加参数
            int rowCount = ui->tableWidget->rowCount();
            ui->tableWidget->insertRow(rowCount);
            int y = 0;
            int id = query.value("id").toInt();
            //qDebug() << id;
            QString name = query.value("projectName").toString();
            //qDebug() << name;
            QString time = query.value("projectCreateTime").toString();

             //[3]每遍历一条记录，就更新到UI控件
            project_count ++;
            ui->tableWidget->setItem(count,y++,new QTableWidgetItem(QString::number(id)));
            ui->tableWidget->setItem(count,y++,new QTableWidgetItem(name));
            ui->tableWidget->setItem(count,y++,new QTableWidgetItem(time));

            count++;
        }
       alignVCenter(count);
    }
}

void OpenProjectWindow::on_cancel_clicked()                     //打开项目的取消按钮
{
    this->close();
}

void OpenProjectWindow::on_comboBox_activated(const QString &arg1)
{
    QSqlQuery query;//在创建该数据对象时，系统会自动完成跟数据库的关联
    QDateTime current_time = QDateTime::currentDateTime();//显示时间，格式为：年-月-日 时：分：秒 周几

    QString str = current_time.toString("yyyy-MM-dd hh:mm:ss");//格式化时间
    ui->tableWidget->clearContents();
    int rowNum=  ui->tableWidget->rowCount();
    for(int i = 0 ; i < rowNum ; i++)//清空列表
    {
        ui->tableWidget->removeRow(0);
    }
    QString name1 = ui->lineEdit->text();                       //获取当前输入的名字条件
    QString project_select_time = ui->comboBox->currentText();  // 获取当前的时间选择条件获取
    // 下面进行条件筛选
    if(project_select_time == "全部日期"){
        QString sqlSelect = QString("select * from project where projectName = '%1';").arg(name1);
        select(sqlSelect);
    }
    if(project_select_time == "最近一天"){
        QString sqlSelect = QString("select * from project where DateDiff(hh,projectCreateTime,getDate())<=24 and projectName = '%1';");

        select(sqlSelect);
    }
    if(project_select_time == "最近一周"){
        QString sqlSelect = QString("select * from project where date_sub(curdate(),interval 7 day) < date(projectCreateTime);");
        select(sqlSelect);
    }
    if(project_select_time == "最近一月"){
        QString sqlSelect = QString("select * from project where date_sub(curdate(),interval 30 day) < date(projectCreateTime);").arg(name1);
        select(sqlSelect);
    }
    if(project_select_time == "最近半年"){
        QString sqlSelect = QString("select * from project where date_sub(curdate(),interval 182 day) < date(projectCreateTime);");
        select(sqlSelect);
    }
    if(project_select_time == "最近一年"){
        QString sqlSelect = QString("select * from project where date_sub(curdate(),interval 365 day) < date(projectCreateTime);");
        select(sqlSelect);
    }
}
