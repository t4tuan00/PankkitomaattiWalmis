#ifndef SQLDLL_H
#define SQLDLL_H

#include "sqldll_global.h"
#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QString>
#include <QtSql>





class SQLDLLSHARED_EXPORT SQLDLL:public QObject
{
Q_OBJECT
public:
    SQLDLL();
    int amount;
    void yhteys();
    void nosta20(QString paramtili);
    void nosta40(QString paramtili);
    void nosta60(QString paramtili);
    void nosta80(QString paramtili);
    void nosta100(QString paramtili);
    void nosta120(QString paramtili);
    void tilitapahtumat();
    void nostaMuuSumma(QString paramsyotetty, QString paramtili);
   // void syotettySumma(QString paramsyotetty, QString paramtili);
    void paivitasaldo(QString paramtili);
    QString uusisyotetty;
    QString saldo(QString paramtili);
    QString tulostasaldo;
    QString saatuTili;
    void syotettyTili(QString id);
private:
    QSqlDatabase db;


};

#endif // SQLDLL_H
