#include "paasivu.h"
#include "ui_paasivu.h"


Paasivu::Paasivu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Paasivu)
{
    ui->setupUi(this);
    olioNosto = new Nosto;
    olioSaldo = new Saldo;
    //olioSQLDLL = new SQLDLL;
    //olioTiliID = new PinDLL;
    olioTilitapahtumat = new Tilitapahtumat;
}

Paasivu::~Paasivu()
{
    delete ui;
    delete olioNosto;
    delete olioSaldo;
    delete olioTilitapahtumat;
   // delete olioSQLDLL;
}

void Paasivu::on_pushButton_Saldo_clicked()
{
    //olioSaldo->showFullScreen();
    olioSaldo->syotettytili(haettutili);
    olioSaldo->showFullScreen();
    olioSaldo->naytaSaldo();
}

void Paasivu::on_pushButton_Tilitapahtumat_clicked()
{
    //olioTilitapahtumat->showFullScreen();
    olioTilitapahtumat->syotettytili(haettutili);
    olioTilitapahtumat->showFullScreen();

}

void Paasivu::on_pushButton_Nosto_clicked()
{

    //olioNosto->showFullScreen();
    olioNosto->syotettytili(haettutili);
    olioNosto->showFullScreen();


}

void Paasivu::on_pushButton_Peruuta_clicked()
{
   this->close();
}

void Paasivu::syotettytili(QString paramtili)
{
    haettutili = paramtili;
    qDebug()<< "Pääikkunan tili" << haettutili;
}

