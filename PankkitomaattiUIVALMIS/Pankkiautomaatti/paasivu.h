#ifndef PAASIVU_H
#define PAASIVU_H

#include <QDialog>
#include <saldo.h>
#include <nosto.h>
#include <tilitapahtumat.h>
#include <QString>
//#include "pindll.h"
//#include "sqldll.h"





namespace Ui {
class Paasivu;
}

class Paasivu : public QDialog
{
    Q_OBJECT

public:
    explicit Paasivu(QWidget *parent = 0);
    ~Paasivu();
    void syotettytili(QString paramtili);




private slots:
    void on_pushButton_Saldo_clicked();

    void on_pushButton_Tilitapahtumat_clicked();

    void on_pushButton_Nosto_clicked();

    void on_pushButton_Peruuta_clicked();

private:
    Ui::Paasivu *ui;
    Saldo *olioSaldo;
    Nosto *olioNosto;
    QString haettutili;
    Tilitapahtumat *olioTilitapahtumat;


    //PinDLL *olioTiliID;
    //SQLDLL *olioSQLDLL;
    //QString TiliID;





};

#endif // PAASIVU_H

