#include "pinkoodi.h"
#include "ui_pinkoodi.h"

Pinkoodi::Pinkoodi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Pinkoodi)
{
    ui->setupUi(this);
    olioPaasivu = new Paasivu;
    olioPindll = new PinDLL;
    olioRFID = new RFIDDLL;
    olioTili = new SQLDLL;
}

Pinkoodi::~Pinkoodi()
{
    delete ui;
    delete olioPaasivu;
    delete olioPindll;
    delete olioRFID;
    delete olioTili;
}
void Pinkoodi::syotetty(QString id)
{
    kortti=id;


}

/*void Pinkoodi::haettuTili()
{

    TiliID = olioPindll->haettuAsiakas();
    olioTili()->syotettyTili(TiliID);
    qDebug()<< "perkele" << TiliID;
}*/

void Pinkoodi::on_pushButton_Ok_clicked()
{

    olioPindll->syotettykortti(kortti);
    olioPindll->syotettypin(painettu);


    if(olioPindll->pinTarkistus()==true)
    {


        TiliID = olioPindll->haettuAsiakas();
        olioPaasivu->syotettytili(TiliID);

        QString oikein = "Pin koodi oikein";
        QMessageBox::information(this,tr("Pankkiautomaatti"),oikein);

        //olioPaasivu->showFullScreen();
        olioPaasivu->showFullScreen();
        this->close();

        ui->label->setText("");
        painettu="";
        tulostus="";
    }
    else
    {
        QString vaarin = "Pin koodi väärin";
        QMessageBox::warning(this,tr("Pankkiautomaatti"),vaarin);

        ui->label->setText("");
        painettu="";
        tulostus="";
    }   

}

void Pinkoodi::on_pushButton_1_clicked()
{
    painettu = painettu.append("1");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void Pinkoodi::on_pushButton_2_clicked()
{
    painettu = painettu.append("2");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void Pinkoodi::on_pushButton_3_clicked()
{
    painettu = painettu.append("3");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void Pinkoodi::on_pushButton_4_clicked()
{
    painettu = painettu.append("4");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void Pinkoodi::on_pushButton_5_clicked()
{
    painettu = painettu.append("5");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void Pinkoodi::on_pushButton_6_clicked()
{
    painettu = painettu.append("6");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void Pinkoodi::on_pushButton_7_clicked()
{
    painettu = painettu.append("7");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void Pinkoodi::on_pushButton_8_clicked()
{
    painettu = painettu.append("8");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void Pinkoodi::on_pushButton_9_clicked()
{
    painettu = painettu.append("9");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void Pinkoodi::on_pushButton_Plus_clicked()
{
    painettu = painettu.append("+");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void Pinkoodi::on_pushButton_0_clicked()
{
    painettu = painettu.append("0");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void Pinkoodi::on_pushButton_Miinus_clicked()
{
    painettu = painettu.append("-");
    tulostus = tulostus.append("*");
    ui->label->setText(tulostus);
}

void Pinkoodi::on_pushButton_Peruuta_clicked()
{
    this->close();
}

void Pinkoodi::on_pushButton_Pyyhi_clicked()
{
    ui->label->setText("");
    painettu="";
    tulostus="";
}
