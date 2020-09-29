#include "weatherfetch.h"

WeatherFetch::WeatherFetch(QWidget *parent) : QWidget(parent)
{
    QNetworkAccessManager manager;
    QNetworkRequest req;
    req.setUrl(QUrl("http://t.weather.itboy.net/api/weather/city/101030100"));
    req.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QNetworkReply *reply = manager.get(req);


    QEventLoop ev;
    connect(reply, SIGNAL(finished()), &ev, SLOT(quit()));
    ev.exec(QEventLoop::ExcludeUserInputEvents);


    if (reply->error() == QNetworkReply::NoError)
    {
        QByteArray ba = reply->readAll();
        QJsonParseError jsonpe;
        QJsonDocument json = QJsonDocument::fromJson(ba, &jsonpe);
        if (jsonpe.error == QJsonParseError::NoError)
        {
            if (json.isObject())
            {
                QJsonObject obj = json.object();
                if (obj.contains("error"))
                {
                    qDebug() << "error:" << obj["error"];
                }
                else
                {
                    QJsonObject jobj = obj["data"].toObject();
                    w.notice = jobj["ganmao"].toString();
                    w.pm25 = jobj["pm25"].isString();
                    w.quality = jobj["quality"].toString();
                    w.shidu = jobj["shidu"].toString();
                    w.wendu = jobj["wendu"].toString();
                    suc = true;
                }
            }
            else
            {
                qDebug() << "error, shoud json object";
                suc = false;
            }
        }
        else
        {
            qDebug() << "error:" << jsonpe.errorString();
            suc = false;
        }
    }else{
        qDebug()<<"aaa";
        suc = false;
    }
}
