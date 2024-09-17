
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "config.h"
#include "frm_armario.h"
#include "frm_categoria.h"
#include "frm_componente.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    QString dirDatabase = Cconfig::getInstance()->getDatabaseDir();
    dirDatabase += Cconfig::getInstance()->getDatabaseName();
    db.setDatabaseName(dirDatabase);

    //this->setWindowFlags( Qt::Widget  | Qt::WindowCloseButtonHint  );

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionAmario_triggered()
{

    armario = new frm_armario();

    loadSubWindow(armario, 350);
}


void MainWindow::on_actionCategoria_triggered()
{
    categoria = new frm_categoria();

    loadSubWindow(categoria,350);
}


void MainWindow::on_actionComponentes_triggered()
{
    componente = new frm_componente();
    loadSubWindow(componente,530);
}

void MainWindow::loadSubWindow(QWidget * widget,int height)
{
    if ( Cgeral::getInstance()->getTotalMdiWindow() == 0 ){
        Cgeral::getInstance()->incTotalMdiWindow();
        window = ui->mdiArea->addSubWindow(widget);
        Cgeral::getInstance()->setWindow(window);
       // window->setWindowFlags( Qt::FramelessWindowHint );
        window->setFixedWidth(370);
        window->setFixedHeight(height);
        window->show();
    }
}

void MainWindow::on_actionAjuda_triggered()
{
    ui->Log->append("Controle de estoque Open Software(C) 2023-2024 rev.A");
    ui->Log->append("----------------------------------------");
    ui->Log->append("Versão.......: "+Cconfig::getInstance()->getVersion());
    ui->Log->append("Database dir.: "+Cconfig::getInstance()->getDatabaseDir());
    ui->Log->append("Database name: "+Cconfig::getInstance()->getDatabaseName());
}


void MainWindow::on_actionConectar_BD_triggered()
{
    ui->Log->append("Setando database...");

    if( !Cgeral::getInstance()->getBConnected() ){
        ui->Log->append("Opening database...");
        if(db.open()){
                ui->Log->append("Database connected succesfully");
                Cgeral::getInstance()->setBConnected();
                if ( Cgeral::getInstance()->getWidget() != nullptr ){
                    Cgeral::getInstance()->getWidget()->setDisabled(false);
                }
            }else{
                ui->Log->append("Error to open Database ...");
            }
    }else{
            ui->Log->append("Closing database...");

                db.close();
                ui->Log->append("Database disconnected...");
                Cgeral::getInstance()->resetBConnected();
                if ( Cgeral::getInstance()->getWidget() != nullptr ){
                    Cgeral::getInstance()->getWidget()->setDisabled(true);
                }
    }
}

