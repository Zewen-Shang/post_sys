#ifndef SUB_MANANGER_MAIN_H
#define SUB_MANANGER_MAIN_H

#include <QMainWindow>
#include <QSqlTableModel>
#include <QPushButton>

#include "database.h"
#include "globla.h"
#include "dfs.h"

namespace Ui {
class Sub_Mananger_Main;
}

class Sub_Mananger_Main : public QMainWindow
{
    Q_OBJECT

public:
    explicit Sub_Mananger_Main(QWidget *parent = nullptr);
    ~Sub_Mananger_Main();

private slots:
    void on_package_add_row_clicked();

    void on_package_submit_clicked();

    void on_clever_point_clicked();

    void on_agree_clicked();

private:
    Database *db;
    QSqlTableModel *package_model = new QSqlTableModel();
    QList<Package> packages;
    QList<Package> dest_packages[dest_size];
    QList<Courier> couriers;
    QList<Task> plan;
    Ui::Sub_Mananger_Main *ui;
    QPushButton* dest_button[dest_size];
    DFS *dfs;
    void refresh_package();
    void refresh_courier();
};

#endif // SUB_MANANGER_MAIN_H
