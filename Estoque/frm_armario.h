#ifndef FRM_ARMARIO_H
#define FRM_ARMARIO_H

#include <QDialog>
#include "geral.h"

namespace Ui {
class frm_armario;
}

class frm_armario : public QDialog
{
    Q_OBJECT

public:
    explicit frm_armario(QWidget *parent = nullptr);
    ~frm_armario();


private slots:
    void on_pushButton_clicked();

private:
    Ui::frm_armario *ui;
};

#endif // FRM_ARMARIO_H
