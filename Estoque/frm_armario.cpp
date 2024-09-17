#include "frm_armario.h"

#include <QMessageBox>
#include "ui_frm_armario.h"
#include "geral.h"


frm_armario::frm_armario(QWidget *parent) : QDialog(parent), ui(new Ui::frm_armario)
{
    ui->setupUi(this);

    if( ! Cgeral::getInstance()->getBConnected() ){
        this->setDisabled(true);
        Cgeral::getInstance()->setWidget(this);
    }
}

frm_armario::~frm_armario()
{
   // QMessageBox::information(this," D E  L E T A D O","deletando....");
    Cgeral::getInstance()->decTotalMdiWindow();
    delete ui;

}

void frm_armario::on_pushButton_clicked()
{

}

