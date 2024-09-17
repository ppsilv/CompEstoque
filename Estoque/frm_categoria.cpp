#include "frm_categoria.h"
#include "ui_frm_categoria.h"
#include "geral.h"
#include <QMessageBox>

frm_categoria::frm_categoria(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frm_categoria)
{
    ui->setupUi(this);

    if( !Cgeral::getInstance()->getBConnected() ){
        this->setDisabled(true);
        Cgeral::getInstance()->setWidget(this);
    }

}

frm_categoria::~frm_categoria()
{
  //  QMessageBox::information(this," D E  L E T A D O","deletando....");
   Cgeral::getInstance()->decTotalMdiWindow();
   delete ui;
}

void frm_categoria::on_pushButton_3_clicked()
{
   // Cgeral::getInstance()->decTotalMdiWindow();
   //  delete ui;
}

