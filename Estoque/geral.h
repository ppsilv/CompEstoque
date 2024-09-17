
#ifndef GERAL_H
#define GERAL_H




#include "qmdisubwindow.h"
#include "qwidget.h"
class Cgeral
{

public:
    static Cgeral * getInstance();
    static void incTotalMdiWindow();
    static void decTotalMdiWindow();
    static int getTotalMdiWindow();
    static bool getBConnected();
    static void setBConnected();
    static void resetBConnected();
    static void setWidget(QWidget * wid);
    static QWidget * getWidget();
    static void setWindow(QMdiSubWindow * window);
    static QMdiSubWindow getWindow();

protected:
    Cgeral(){};

private:
    static Cgeral * instancia;
    static int totalMdiWindow;
    static bool bConnected;
    static QWidget * formulario;
    static QMdiSubWindow * window;
};

#endif // GERAL_H
