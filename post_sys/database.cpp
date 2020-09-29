#include "database.h"

Database::Database(QString name)
{
    table_name = name;
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("MyDataBase.db");
    if (!database.open())
    {
        qDebug() << "Error: Failed to connect database." << database.lastError();
    }
    else
    {
        qDebug() << "Succeed to connect database." ;
    }
}


bool Database::insert(QList<QString> attr, QList<QString> value)
{
    QString statement = "Insert into " + table_name + " values(";
    for(int i=0;i<attr.size();i++){
        if(i == attr.size()-1){
            statement +="'" + value[i] + "'";
        }else{
            statement +="'" + value[i] + "'" + ",";
        }
    }
    statement += ");";
    QSqlQuery query;
    //qDebug()<<statement;
    return  query.exec(statement);
}

QSqlQuery Database::select(QList<QString> attr, QList<QString> value)
{
    QString statement = "select * from " + table_name + " where ";
    for(int i=0;i<attr.size();i++){
        statement += attr[i] + " = '" + value[i] + "'";
        if(i != attr.size()-1){
            statement += " and ";
        }
    }
    statement += ";";
    qDebug()<<statement;
    QSqlQuery query;
    query.exec(statement);
    return query;
}

bool Database::update(QList<QString> new_attr, QList<QString> new_value, QList<QString> old_attr, QList<QString> old_value)
{
    QString sql = "update " + table_name + " set ";
    for(int i=0;i<new_attr.size();i++){
        sql +=" " + new_attr[i] + " = '" + new_value[i] + "' ";
        if(i != new_attr.size()-1)
            sql += " , ";
    }

    if(old_attr.size() != 0){
        sql += " where ";
        for(int i=0;i<old_attr.size();i++){
            sql += old_attr[i] + " = '" + old_value[i] + "'";
            if(i != old_attr.size()-1){
                sql += " and ";
            }
        }
    }
    sql += ";";
    qDebug()<<sql;
    QSqlQuery query;
    return query.exec(sql);
}

bool Database::del(QList<QString> attr, QList<QString> value)
{
    QString statement = "Delete from " + table_name + " where ";
    for(int i=0;i<attr.size();i++){
        if(i == attr.size()-1){
            statement +=attr[i] + " = " +  "'" + value[i] + "'";
        }else{
            statement +=attr[i] + " = " + "'" + value[i] + "'" + " and ";
        }
    }
    statement += ";";
    QSqlQuery query;
    qDebug()<<statement;
    return  query.exec(statement);
}


