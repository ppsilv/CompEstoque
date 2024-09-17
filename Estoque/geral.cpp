
#include "geral.h"

Cgeral * Cgeral::instancia = nullptr;
int Cgeral::totalMdiWindow = 0;
bool Cgeral::bConnected = false;
QWidget * Cgeral::formulario = nullptr;
QMdiSubWindow * Cgeral::window = nullptr;


Cgeral * Cgeral::getInstance()
{
   if (  instancia == nullptr ){
       instancia = new Cgeral();
   }
    return instancia;
}

void Cgeral::incTotalMdiWindow(){
    totalMdiWindow++;
}

void Cgeral::decTotalMdiWindow(){
    totalMdiWindow--;
}

int Cgeral::getTotalMdiWindow(){
    return totalMdiWindow;
}

bool Cgeral::getBConnected(){
    return bConnected;
}

void Cgeral::setBConnected(){
    bConnected = true;
}

void Cgeral::resetBConnected(){
    bConnected = false;
}

void Cgeral::setWidget(QWidget * wid)
{
    formulario = wid;
}

QWidget * Cgeral::getWidget()
{
    return formulario;
}

void Cgeral::setWindow(QMdiSubWindow * window1)
{
    window = window1;
}

QMdiSubWindow Cgeral::getWindow()
{
    return window;
}
