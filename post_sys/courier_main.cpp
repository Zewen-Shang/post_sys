#include "courier_main.h"
#include "ui_courier_main.h"
#include "database.h"

#include <QSqlDatabase>
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <string>
Courier_Main::Courier_Main(QString id,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Courier_Main)
{
    ui->setupUi(this);
    this->id = id;
    db = new Database(" ");
    init_button();
    refresh_task();
    WeatherFetch w;
    if(w.suc){
        ui->weather->setToolTip("温度：" + w.w.wendu + "\n" + "湿度:" + w.w.shidu + "\n" + "空气质量:" + w.w.quality + "\n" + w.w.notice);
    }else{
        ui->weather->setToolTip("获取失败。");
    }

}

Courier_Main::~Courier_Main()
{
    delete model;
    delete db;
    delete ui;
    for(int i=0;i<dest_size;i++){
        delete  dest_button[i];
    }
}

void Courier_Main::refresh_task()
{
    delete  model;
    model = new QSqlTableModel(this);
    ui->tableView->setModel(model);
    model->setTable("task");
    QString sql = QString("courier_id='%1'").arg(id);
    //qDebug()<<sql;
    model->setFilter(sql);
    model->setSort(4,Qt::AscendingOrder);
    model->select();
    model->setHeaderData(0,Qt::Horizontal,"package_id");
    model->setHeaderData(1,Qt::Horizontal,"courier_id");
    model->setHeaderData(2,Qt::Horizontal,"cos_name");
    model->setHeaderData(3,Qt::Horizontal,"destination");
    model->setHeaderData(3,Qt::Horizontal,"distance");
    int row = model->rowCount();
    QModelIndex index;
    for(int i=0;i<row;i++){
        index = model->index(i,3);
        int dest = model->data(index).toInt();
        dest_button[dest]->setStyleSheet("background-color: rgb(0, 255, 0);");
    }
}

void Courier_Main::init_button()
{
    for(int i=0;i<dest_size;i++){
        dest_button[i] = new QPushButton(ui->map_frame);
        QFont font;
        font.setPixelSize(10);
        dest_button[i]->setFont(font);
        dest_button[i]->setText(QString::number(i));
        dest_button[i]->setGeometry(destinations[i].x,destinations[i].y,18,18);
        dest_button[i]->setToolTip(destinations[i].name);
    }
}

void Courier_Main::on_submit_clicked()
{
    db->table_name = "task";
    QList<QString>attr,value;
    attr.push_back("package_id");
    value.push_back(ui->package_id->text());
    bool flag = true;
    if(flag = db->del(attr,value)){
        db->table_name = "package";
        QList<QString>new_attr,new_value, old_attr,old_value;
        old_attr.push_back("id");
        old_value.push_back(ui->package_id->text());
        new_attr.push_back("state");
        new_value.push_back("2");
        new_attr.push_back("time");
        new_value.push_back(ui->time->text());
        flag = db->update(new_attr,new_value,old_attr,old_value);
    }
    if(!flag){
        show_error("数据错误");
    }else{
        show_suc("成功");
    }



    refresh_task();
    ui->package_id->clear();
    ui->time->clear();
}
