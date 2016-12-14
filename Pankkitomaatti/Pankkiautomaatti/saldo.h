#ifndef SALDO_H
#define SALDO_H

#include <QDialog>
#include "sqldll.h"
#include "pindll.h"
#include <QString>

namespace Ui {
class Saldo;
}

class Saldo : public QDialog
{
    Q_OBJECT

public:
    explicit Saldo(QWidget *parent = 0);
    ~Saldo();
    void naytaSaldo();
    QString tulostasaldo;
    void syotettytili(QString paramtili);

private slots:
    void on_pushButton_Perruuta_clicked();

private:
    Ui::Saldo *ui;
    SQLDLL *olioSaldo;
    QString haettutili;
};

#endif // SALDO_H
