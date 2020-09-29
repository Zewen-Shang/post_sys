#ifndef DATABASE_H
#define DATABASE_H

#include <qdebug.h>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

class Database
{
public:
    QString table_name;
    Database(QString name);
    bool insert(QList<QString> attr,QList<QString>value);
    QSqlQuery select(QList<QString> attr,QList<QString>value);
    bool update(QList<QString>new_attr,QList<QString>new_value, QList<QString>old_attr,QList<QString>old_value);
    bool del(QList<QString>attr,QList<QString>value);
private:
    QSqlDatabase database;
};

#endif // DATABASE_H
