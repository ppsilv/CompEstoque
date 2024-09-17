#ifndef FRM_COMPONENTE_H
#define FRM_COMPONENTE_H

#include <QDialog>
#include "geral.h"

namespace Ui {
class frm_componente;
}

class frm_componente : public QDialog
{
    Q_OBJECT

public:
    explicit frm_componente(QWidget *parent = nullptr);
    ~frm_componente();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::frm_componente *ui;

};

#endif // FRM_COMPONENTE_H
