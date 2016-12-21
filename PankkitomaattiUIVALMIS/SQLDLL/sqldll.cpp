#include "sqldll.h"


SQLDLL::SQLDLL()
{
}
void SQLDLL::yhteys()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("mysli.oamk.fi");
    db.setDatabaseName("opisk_t4kial00");
    db.setUserName("t4kial00");
    db.setPassword("uKwfgYPEX2sct3Qw");
    db.open();
}




void SQLDLL::nosta20(QString paramtili)
{
    saatuTili = paramtili;
    yhteys();
    amount = 20;
    paivitasaldo(saatuTili);
    QSqlQuery query;
    query.exec("INSERT INTO nosto(idnosto, amount, date, id_tili, id_automaatti) VALUES('NULL', '20', NOW(), '"+saatuTili+"', '2')");

}

void SQLDLL::nosta40(QString paramtili)
{
    saatuTili = paramtili;
    yhteys();
    amount = 40;
    paivitasaldo(saatuTili);
    QSqlQuery query;
    query.exec("INSERT INTO nosto(idnosto, amount, date, id_tili, id_automaatti) VALUES('NULL', '40', NOW(), '"+saatuTili+"', '2')");
}
void SQLDLL::nosta60(QString paramtili)
{
    saatuTili = paramtili;
    yhteys();
    amount = 60;
    paivitasaldo(saatuTili);
    QSqlQuery query;
    query.exec("INSERT INTO nosto(idnosto, amount, date, id_tili, id_automaatti) VALUES('NULL', '60', NOW(), '"+saatuTili+"', '2')");
}
void SQLDLL::nosta80(QString paramtili)
{
    saatuTili = paramtili;
    yhteys();
    amount = 80;
    paivitasaldo(saatuTili);
    QSqlQuery query;
    query.exec("INSERT INTO nosto(idnosto, amount, date, id_tili, id_automaatti) VALUES('NULL', '80', NOW(), '"+saatuTili+"', '2')");
}
void SQLDLL::nosta100(QString paramtili)
{
    saatuTili = paramtili;
    yhteys();
    amount = 100;
    paivitasaldo(saatuTili);
    QSqlQuery query;
    query.exec("INSERT INTO nosto(idnosto, amount, date, id_tili, id_automaatti) VALUES('NULL', '100', NOW(), '"+saatuTili+"', '2')");
}
void SQLDLL::nosta120(QString paramtili)
{
    saatuTili = paramtili;
    yhteys();
    amount = 120;
    paivitasaldo(saatuTili);
    QSqlQuery query;
    query.exec("INSERT INTO nosto(idnosto, amount, date, id_tili, id_automaatti) VALUES('NULL', '120', NOW(), '"+saatuTili+"', '2')");
}

void SQLDLL::nostaMuuSumma(QString paramsyotetty, QString paramtili)
{
   uusisyotetty = paramsyotetty;
   amount = uusisyotetty.toInt();
   qDebug()<<"sqldll uusisyotetty"<<amount;
   saatuTili = paramtili;
   qDebug()<<"sqldll tili"<<saatuTili;
    yhteys();

    qDebug()<<"nostamuusumma tili id"<<saatuTili;
    //QString painettu = olioMuuSumma->palautasumma(); //aiemmasta mallia että haetaan oliolta summa joka on syötetty ui:ssä
    QSqlQuery query;
    query.prepare("INSERT INTO nosto(idnosto, amount, date, id_tili, id_automaatti) VALUES(:idnosto, :amount, NOW(), :id_tili, :id_automaatti)");
    query.bindValue(":idnosto", 0);
    query.bindValue(":amount", amount);
    query.bindValue(":id_tili", saatuTili);
    query.bindValue(":id_automaatti", 2);
    query.exec();

    double haettusaldo;
    double uusisaldo;
    saatuTili = paramtili;

    QSqlQuery query2;
    query2.prepare("SELECT saldo FROM tili WHERE id_tili=:tili");
    query2.bindValue(":tili", saatuTili);
    query2.exec();

    while(query2.next())
    {
        haettusaldo = query2.value(0).toDouble();
    }

    qDebug()<<"Haettu tilin saldo" << haettusaldo;
    uusisaldo = haettusaldo-amount;
    qDebug()<<"Tilin uusi saldo" << uusisaldo;

    QSqlQuery query3;
    query3.prepare("UPDATE tili SET saldo=:uusisaldo WHERE id_tili=:tili");
    query3.bindValue(":uusisaldo", uusisaldo);
    query3.bindValue(":tili", saatuTili);
    query3.exec();


}
/*
void SQLDLL::syotettySumma(QString id, QString paramtili)
{
    uusisyotetty = id;

    qDebug()<<"sqldll:än syötetty summa"<<uusisyotetty;
}*/

QString SQLDLL::saldo(QString paramtili)
{
    saatuTili = paramtili;
    yhteys();
    QSqlQuery query;
    query.exec("SELECT saldo FROM tili WHERE id_tili= '"+saatuTili+"'");
    while(query.next())
    {
        tulostasaldo = query.value(0).toString();
        qDebug(tulostasaldo.toLatin1());

    }

    return tulostasaldo;
}
void SQLDLL::paivitasaldo(QString paramtili)
{
    double haettusaldo;
    double uusisaldo;
    saatuTili = paramtili;

    QSqlQuery query;
    query.prepare("SELECT saldo FROM tili WHERE id_tili=:tili");
    query.bindValue(":tili", saatuTili);
    query.exec();

    while(query.next())
    {
        haettusaldo = query.value(0).toDouble();
    }

    qDebug()<<"Haettu tilin saldo" << haettusaldo;
    uusisaldo = haettusaldo-amount;
    qDebug()<<"Tilin uusi saldo" << uusisaldo;

    QSqlQuery query2;
    query2.prepare("UPDATE tili SET saldo=:uusisaldo WHERE id_tili=:tili");
    query2.bindValue(":uusisaldo", uusisaldo);
    query2.bindValue(":tili", saatuTili);
    query2.exec();




}


