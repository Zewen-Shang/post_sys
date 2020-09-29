#ifndef COURIER_MAIN_H
#define COURIER_MAIN_H

#include "database.h"
#include "globla.h"
#include "weatherfetch.h"

#include <QMainWindow>
#include <QPushButton>
#include <QSqlTableModel>
namespace Ui {
class Courier_Main;
}

class Courier_Main : public QMainWindow
{
    Q_OBJECT

public:
    explicit Courier_Main(QString id,QWidget *parent = nullptr);
    ~Courier_Main();

private slots:
    void on_submit_clicked();

private:
    QSqlTableModel *model = new QSqlTableModel(this);
    QPushButton* dest_button[dest_size];
    void refresh_task();
    void init_button();
    Database* db;
    QString id;
    Ui::Courier_Main *ui;
};

#endif // COURIER_MAIN_H
