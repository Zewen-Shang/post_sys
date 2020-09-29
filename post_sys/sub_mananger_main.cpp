#include "sub_mananger_main.h"
#include "ui_sub_mananger_main.h"

Sub_Mananger_Main::Sub_Mananger_Main(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Sub_Mananger_Main)
{
    db = new Database(" ");
    ui->setupUi(this);
    refresh_package();
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

Sub_Mananger_Main::~Sub_Mananger_Main()
{
    delete ui;
    delete db;
    delete package_model;
    for(int i=0;i<dest_size;i++){
        delete  dest_button[i];
    }
}

void Sub_Mananger_Main::refresh_package()
{
    for(int i=0;i<dest_size;i++)
        dest_packages[i].clear();
    delete package_model;
    package_model = new QSqlTableModel(this);
    ui->package_table_view->setModel(package_model);
    package_model->setTable("package");
    QString sql = "state=0";
    package_model->setFilter(sql);
    package_model->select();
    package_model->setHeaderData(0,Qt::Horizontal,"id");
    package_model->setHeaderData(1,Qt::Horizontal,"cos_name");
    package_model->setHeaderData(2,Qt::Horizontal,"state");
    package_model->setHeaderData(3,Qt::Horizontal,"time");
    package_model->setHeaderData(4,Qt::Horizontal,"destination");
    package_model->setEditStrategy(QSqlTableModel::OnManualSubmit);

    packages.clear();
    int row = package_model->rowCount();
    for(int i=0;i<row;i++){
        Package p;
        QModelIndex index;
        index = package_model->index(i,0);
        p.id = package_model->data(index).toString();
        index = package_model->index(i,1);
        p.cos_name = package_model->data(index).toString();
        index = package_model->index(i,2);
        p.state = package_model->data(index).toInt();
        index = package_model->index(i,3);
        p.time = package_model->data(index).toInt();
        index = package_model->index(i,4);
        p.destination = package_model->data(index).toInt();
        dest_packages[p.destination].push_back(p);
    }
}

void Sub_Mananger_Main::refresh_courier()
{
    QSqlTableModel *model = new QSqlTableModel(this);
    model->setTable("courier");
    model->select();
    couriers.clear();
    int row = model->rowCount();
    for(int i=0;i<row;i++){
        Courier c;
        QModelIndex index;
        index = model->index(i,0);
        c.id = model->data(index).toString();
        index = model->index(i,2);
        c.name = model->data(index).toString();
        couriers.push_back(c);
    }
}

void Sub_Mananger_Main::on_package_add_row_clicked()
{
    int rowNum = package_model->rowCount();
    package_model->insertRow(rowNum); //添加一行
    //package_model->setData(package_model->index(rowNum,0),id);
}

void Sub_Mananger_Main::on_package_submit_clicked()
{
    if(package_model->submitAll()){
        show_suc("提交成功。");
    }else{
        show_error("提交失败。");
    }
    ui->textBrowser->clear();
    ui->agree->setEnabled(false);
}

void Sub_Mananger_Main::on_clever_point_clicked()
{
    refresh_courier();
    refresh_package();
//    if(dfs != NULL)
//        delete dfs;
    dfs = new DFS(dest_packages,couriers);
    dfs->handle();
    plan = dfs->ret;
    qDebug()<<" ";
    ui->textBrowser->clear();
    for(int i=0;i<plan.size();i++){
        ui->textBrowser->append("由" + plan[i].courier_id + "投递" + plan[i].package_id + '\n');
    }
    ui->agree->setEnabled(true);
}

void Sub_Mananger_Main::on_agree_clicked()
{
    db->table_name = "package";
    QList<QString>new_attr,new_value,old_attr,old_value;
    new_attr.push_back("state");
    new_value.push_back("1");
    old_attr.push_back("state");
    old_value.push_back("0");
    if(!db->update(new_attr,new_value,old_attr,old_value)){
        return;
    }
    ;

    db->table_name = "task";
    QList<QString>value;
    for(int i=0;i<plan.size();i++){
        value.clear();
        value.push_back(plan[i].package_id);
        value.push_back(plan[i].courier_id);
        value.push_back(plan[i].cos_name);
        value.push_back(QString::number(plan[i].destination));
        value.push_back(QString::number(plan[i].distance));
        db->insert(value,value);
    }
    refresh_package();
    ui->textBrowser->clear();
    ui->agree->setEnabled(false);
    plan.clear();
}
