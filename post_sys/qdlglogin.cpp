#include <QSqlQuery>
#include<QMessageBox>
#include <QSettings>
#include "qdlglogin.h"
#include "ui_qdlglogin.h"

QDlgLogin::QDlgLogin(int* user_type,QString *id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QDlgLogin)
{
    ui->setupUi(this);
    connect(ui->courier,SIGNAL(clicked()),this,SLOT(handle_radio_clicked()));
    connect(ui->sys_mananger,SIGNAL(clicked()),this,SLOT(handle_radio_clicked()));
    connect(ui->sub_mananger,SIGNAL(clicked()),this,SLOT(handle_radio_clicked()));
    this->user_type = user_type;
    this->id = id;

    QString organization="WWB-Qt";
    QString appName="post_sys";
    QSettings   settings(organization,appName);
    bool saved=settings.value("saved",false).toBool();
    QString saved_id = settings.value("id","").toString();
    QString saved_password = settings.value("password","").toString();

    if(saved){
        ui->id->setText(saved_id);
        ui->password->setText(saved_password);
    }
    db = new Database("courier");
}

QDlgLogin::~QDlgLogin()
{
    delete ui;
}

void QDlgLogin::on_login_clicked()
{
    QList<QString>attr,value;
    attr.push_back("id");
    attr.push_back("password");
    value.push_back(ui->id->text());
    value.push_back(ui->password->text());
    QSqlQuery query = db->select(attr,value);
    if(query.next()){
        qDebug()<<"suc";
        *id = ui->id->text();
        QSettings   settings("WWB-Qt","post_sys");
        settings.setValue("id",ui->id->text());
        settings.setValue("password",ui->password->text());
        this->accept();
    }else{
        qDebug()<<"fail";
        QMessageBox::warning(this, "错误提示", "用户名或密码错误");
    }
}

void QDlgLogin::handle_radio_clicked()
{
    if(ui->courier->isChecked()){
        *user_type = COURIER;
        db->table_name = "courier";
    }else if(ui->sys_mananger->isChecked()){
        *user_type = SYS_MANANGER;
        db->table_name = "sys_mananger";
    }else{
        *user_type = SUB_MANANGER;
        db->table_name = "sub_mananger";
    }
}
