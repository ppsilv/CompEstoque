
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include "frm_armario.h"
#include "frm_categoria.h"
#include "frm_componente.h"
#include "QMdiSubWindow"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_actionAmario_triggered();
    void on_actionCategoria_triggered();
    void on_actionComponentes_triggered();
    void on_actionConectar_BD_triggered();
    void on_actionAjuda_triggered();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    frm_armario * armario;
    frm_categoria * categoria;
    frm_componente * componente;
    QMdiSubWindow * window;

    void loadSubWindow(QWidget * widget, int height);

};

#endif // MAINWINDOW_H
