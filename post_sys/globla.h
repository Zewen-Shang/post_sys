#ifndef GLOBLA_H
#define GLOBLA_H

#include <QApplication>
#include <QMessageBox>
#include <qdebug.h>

enum User_Type{
    COURIER = 1,
    SYS_MANANGER = 2,
    SUB_MANANGER = 3
};

class Package{
public:
    QString id,cos_name;
    int state,time,destination;
};

class Courier{
public:
    QString id,name;
};

class Task{
public:
    QString package_id,courier_id,cos_name;
    int destination;
    float distance;
    Task(QString package_id,QString courier_id,QString cos_name,int destination,float distance){
        this->courier_id = courier_id;
        this->package_id = package_id;
        this->cos_name = cos_name;
        this->destination = destination;
        this->distance = distance;
    }
};

class Destination{
public:
    QString name;
    double x,y;
    Destination(QString name,double x,double y){
        this->name = name;
        this->x = x;
        this->y = y;
    }
    Destination(){}
};

class Weather{
public:
    QString shidu,pm25,quality,wendu,notice;
};

typedef QPair<Courier,QList<Package>> ans;

const int dest_size = 8;

static Destination destinations[dest_size] = {
    Destination("菜鸟驿站",320,210),
    Destination("正园",290,170),
    Destination("齐园",280,250),
    Destination("治园",220,250),
    Destination("图书馆",260,220),
    Destination("诚园",290,130),
    Destination("平园",230,140),
    Destination("格园",280,80),
};

static double Map[dest_size][dest_size] = {
    {   -1,220.5,   -1,   -1,341.6,   -1,505.1,   -1},
    {   -1,   -1,   -1,   -1,   -1,180.2,   -1,   -1},
    {   -1,   -1,   -1,356.1,   -1,   -1,   -1,   -1},
    {   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1},
    {   -1,   -1, 82.4,   -1,   -1,   -1,   -1,   -1},
    {   -1,   -1,   -1,   -1,   -1,   -1,   -1,272.3},
    {   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1},
    {   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1}
};

void show_error(QString text);
void show_suc(QString text);

#endif // GLOBLA_H
