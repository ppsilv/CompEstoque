
#ifndef CONFIG_H
#define CONFIG_H

#include <QMainWindow>
#include <QMessageBox>
#include <QFile>
#include "qjsonobject.h"


class Cconfig
{
protected:
    Cconfig();

public:
    static Cconfig * getInstance();
    static bool getConfigFileStatus();
    static QString getVersion();
    static QString getDatabaseDir();
    static QString getDatabaseName();


private:
    static bool configFileOpened;
    static Cconfig * instancia;
    static QJsonObject jsonConfig;
};

#endif // CONFIG_H
