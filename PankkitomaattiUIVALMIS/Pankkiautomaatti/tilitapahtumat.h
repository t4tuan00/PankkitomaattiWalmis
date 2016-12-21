#ifndef TILITAPAHTUMAT_H
#define TILITAPAHTUMAT_H

#include <QDialog>
#include <QTableView>
#include <QSqlQueryModel>
#include "sqldll.h"

namespace Ui {
class Tilitapahtumat;
}

class Tilitapahtumat : public QDialog
{
    Q_OBJECT

public:
    explicit Tilitapahtumat(QWidget *parent = 0);
    ~Tilitapahtumat();
    SQLDLL *olioSQLDLL;
    void syotettytili(QString paramtili);

private slots:
    void on_pushButton_Takaisin_clicked();

    void on_pushButton_nayta_clicked();

private:
    Ui::Tilitapahtumat *ui;
    QString haettutili;

};

#endif // TILITAPAHTUMAT_H
