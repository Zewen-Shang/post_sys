#ifndef WEATHERFETCH_H
#define WEATHERFETCH_H
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>


#include <QJsonObject>
#include <QJsonArray>
#include <QJsonParseError>

#include <QEventLoop>
#include <QWidget>

#include "globla.h"
class WeatherFetch : public QWidget
{
    Q_OBJECT
public:
    explicit WeatherFetch(QWidget *parent = nullptr);
    bool suc = false;
    Weather w;
signals:

};

#endif // WEATHERFETCH_H
