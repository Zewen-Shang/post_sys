#include <QSqlTableModel>

#include "sys_mananger_main.h"
#include "ui_sys_mananger_main.h"

Sys_Mananger_Main::Sys_Mananger_Main(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Sys_Mananger_Main)
{
    ui->setupUi(this);
    this->db = new Database("courier");
    refresh_courier();
    refresh_sub_mananger();
}

Sys_Mananger_Main::~Sys_Mananger_Main()
{
    delete ui;
    delete db;
}

void Sys_Mananger_Main::refresh_courier()
{
    delete courier_model;
    courier_model = new QSqlTableModel(this);
    ui->courier_table_view->setModel(courier_model);
    courier_model->setTable("courier");
    courier_model->select();
    courier_model->setHeaderData(0,Qt::Horizontal,"id");
    courier_model->setHeaderData(1,Qt::Horizontal,"password");
    courier_model->setHeaderData(2,Qt::Horizontal,"name");

    courier_model->setEditStrategy(QSqlTableModel::OnManualSubmit);
}

void Sys_Mananger_Main::refresh_sub_mananger()
{
    delete  sub_mananger_model;
    sub_mananger_model = new QSqlTableModel(this);
    ui->sys_mananger_table_view->setModel(sub_mananger_model);
    sub_mananger_model->setTable("sub_mananger");
    sub_mananger_model->select();
    sub_mananger_model->setHeaderData(0,Qt::Horizontal,"id");
    sub_mananger_model->setHeaderData(1,Qt::Horizontal,"password");
    sub_mananger_model->setHeaderData(2,Qt::Horizontal,"name");

    sub_mananger_model->setEditStrategy(QSqlTableModel::OnManualSubmit);
}

void Sys_Mananger_Main::on_courier_submit_clicked()
{
    if(courier_model->submitAll()){
        show_suc("提交成功。");
    }else{
        show_error("提交失败。");
    }
    refresh_courier();
}

void Sys_Mananger_Main::on_sub_mananger_submit_clicked()
{
    if(sub_mananger_model->submitAll()){
        show_suc("提交成功。");
    }else{
        show_error("提交失败。");
    }
    refresh_sub_mananger();
}

void Sys_Mananger_Main::on_courier_add_clicked()
{
    int rowNum = courier_model->rowCount();
    courier_model->insertRow(rowNum);
}

void Sys_Mananger_Main::on_sub_mananger_add_clicked()
{
    int rowNum = sub_mananger_model->rowCount();
    sub_mananger_model->insertRow(rowNum);
}


