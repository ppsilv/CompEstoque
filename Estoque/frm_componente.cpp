#include "frm_componente.h"
#include "ui_frm_componente.h"
#include "geral.h"
#include <QMessageBox>

frm_componente::frm_componente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frm_componente)
{
    ui->setupUi(this);

    if( !Cgeral::getInstance()->getBConnected() ){
        this->setDisabled(true);
        Cgeral::getInstance()->setWidget(this);
    }
}

frm_componente::~frm_componente()
{
   // QMessageBox::information(this," D E  L E T A D O","deletando....");
    Cgeral::getInstance()->decTotalMdiWindow();
    delete ui;

}

void frm_componente::on_pushButton_2_clicked()
{
    //Cgeral::getInstance()->decTotalMdiWindow();
    // delete ui;
}

