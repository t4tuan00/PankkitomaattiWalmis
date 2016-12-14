#include "tilitapahtumat.h"
#include "ui_tilitapahtumat.h"

Tilitapahtumat::Tilitapahtumat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Tilitapahtumat)
{
    ui->setupUi(this);
}

Tilitapahtumat::~Tilitapahtumat()
{
    delete ui;
}

void Tilitapahtumat::on_pushButton_Takaisin_clicked()
{
    this->close();
}

void Tilitapahtumat::on_pushButton_nayta_clicked()
{
    QSqlQueryModel * view = new QSqlQueryModel;
    QSqlQuery query;

    query.prepare("SELECT * FROM nosto where id_tili='"+haettutili+"'");
    query.exec();
    view->setQuery(query);
    ui->tableView->setModel(view);
}

void Tilitapahtumat::syotettytili(QString paramtili)
{
    haettutili = paramtili;
    qDebug()<< "tilitapahtumat tili" << haettutili;
}
