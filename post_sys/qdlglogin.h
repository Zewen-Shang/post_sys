#ifndef QDLGLOGIN_H
#define QDLGLOGIN_H

#include <QDialog>
#include "globla.h"
#include "database.h"
namespace Ui {
class QDlgLogin;
}

class QDlgLogin : public QDialog
{
    Q_OBJECT

public:
    explicit QDlgLogin(int* user_type,QString* id, QWidget *parent = nullptr);
    ~QDlgLogin();

private slots:
    void on_login_clicked();
    void handle_radio_clicked();

private:
    int* user_type;
    QString *id;
    Ui::QDlgLogin *ui;
    Database* db;
};

#endif // QDLGLOGIN_H
