#include "globla.h"

void show_error(QString text){
    QMessageBox::critical(NULL, "错误", text, QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
}

void show_suc(QString text)
{
    QMessageBox::information(NULL, "成功", text, QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
}
