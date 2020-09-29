#ifndef SYS_MANANGER_MAIN_H
#define SYS_MANANGER_MAIN_H

#include <QSqlTableModel>
#include "database.h"
#include "globla.h"

#include <QMainWindow>

namespace Ui {
class Sys_Mananger_Main;
}

class Sys_Mananger_Main : public QMainWindow
{
    Q_OBJECT

public:
    explicit Sys_Mananger_Main(QWidget *parent = nullptr);
    ~Sys_Mananger_Main();

private slots:
    void on_courier_submit_clicked();

    void on_courier_add_clicked();

    void on_sub_mananger_add_clicked();

    void on_sub_mananger_submit_clicked();

private:
    QSqlTableModel *courier_model = new QSqlTableModel(this),*sub_mananger_model = new QSqlTableModel(this);
    void refresh_courier();
    void refresh_sub_mananger();
    Ui::Sys_Mananger_Main *ui;
    Database* db;
};

#endif // SYS_MANANGER_MAIN_H
