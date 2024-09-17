#include "config.h"
#include "qjsondocument.h"




Cconfig * Cconfig::instancia=nullptr;
bool Cconfig::configFileOpened=false;
QJsonObject Cconfig::jsonConfig;


Cconfig * Cconfig::getInstance()
{
    if (  instancia == nullptr ){
        instancia = new Cconfig();
    }
    return instancia;
}


Cconfig::Cconfig()
{
    QString val;
    QFile file;

    file.setFileName(":/config/Z:/Estoque/estoque.json");

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)){
        configFileOpened = false;
    }else{
        configFileOpened = true;
        val = file.readAll();
        file.close();
        QJsonDocument d = QJsonDocument::fromJson(val.toUtf8());
        jsonConfig= d.object();
    }
}

bool Cconfig::getConfigFileStatus(){
    return configFileOpened;
}

QString Cconfig::getVersion()
{
    return jsonConfig.value(QString("appVersion")).toString();
}

QString Cconfig::getDatabaseDir()
{
    return jsonConfig.value(QString("appDatabaseDir")).toString();
}

QString Cconfig::getDatabaseName()
{
    return jsonConfig.value(QString("appDatabaseName")).toString();
}
