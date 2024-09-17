#ifndef FRM_CATEGORIA_H
#define FRM_CATEGORIA_H

#include <QDialog>
#include "geral.h"

namespace Ui {
class frm_categoria;
}

class frm_categoria : public QDialog
{
    Q_OBJECT

public:
    explicit frm_categoria(QWidget *parent = nullptr);
    ~frm_categoria();

private slots:
    void on_pushButton_3_clicked();

private:
    Ui::frm_categoria *ui;

};

#endif // FRM_CATEGORIA_H
