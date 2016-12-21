#include "nosto.h"
#include "ui_nosto.h"

Nosto::Nosto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Nosto)
{
    ui->setupUi(this);
    olioNosta = new SQLDLL;
    olioNostaSumma = new NostaSumma;
   // olioPinDLL = new PinDLL;

}

Nosto::~Nosto()
{
    delete ui;
    delete olioNosta;
    delete olioNostaSumma;
    //delete olioPinDLL;
}

void Nosto::syotettytili(QString paramtili)
{
    haettutili = paramtili;
    qDebug()<< "nosto tili" << haettutili;
}


void Nosto::on_pushButton_20_clicked()
{

    //olioNosta->yhteys();
    olioNosta->nosta20(haettutili);
    this->close();
}

void Nosto::on_pushButton_40_clicked()
{
    //olioNosta->yhteys();
    olioNosta->nosta40(haettutili);
    this->close();
}

void Nosto::on_pushButton_60_clicked()
{
    //olioNosta->yhteys();
    olioNosta->nosta60(haettutili);
    this->close();
}


void Nosto::on_pushButton_80_clicked()
{
    //olioNosta->yhteys();
    olioNosta->nosta80(haettutili);
    this->close();
}

void Nosto::on_pushButton_100_clicked()
{
    //olioNosta->yhteys();
    olioNosta->nosta100(haettutili);
    this->close();
}

void Nosto::on_pushButton_120_clicked()
{
    //olioNosta->yhteys();
    olioNosta->nosta120(haettutili);
    this->close();
}

void Nosto::on_pushButton_MuuSumma_clicked()
{
 olioNostaSumma->syotettytili(haettutili);
 olioNostaSumma->showFullScreen();
}
void Nosto::on_pushButton_Peruuta_clicked()
{
    this->close();
}
