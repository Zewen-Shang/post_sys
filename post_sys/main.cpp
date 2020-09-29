#include <QApplication>
#include <qdebug.h>
#include <QTextCodec>

#include "qdlglogin.h"
#include "courier_main.h"
#include "sys_mananger_main.h"
#include "sub_mananger_main.h"
#include "test.h"
#include "globla.h"

int main(int argc, char *argv[])
{
    int user_type = COURIER;
    QString id;
    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForLocale(codec);
    QApplication a(argc, argv);

    QDlgLogin *login = new QDlgLogin(&user_type,&id);
    if (login->exec()==QDialog::Accepted)
    {
        switch (user_type) {
        case COURIER:{
            Courier_Main b(id);
            b.show();
            return a.exec();
            break;
        }
        case SYS_MANANGER:{
            Sys_Mananger_Main c;
            c.show();
            return a.exec();
            break;
        }

        case SUB_MANANGER:{
            Sub_Mananger_Main d;
            d.show();
            return a.exec();
            break;
        }
        default:{}
        }
        qDebug()<<user_type<<id;
        return a.exec();
    }
    return  a.exec();
}
