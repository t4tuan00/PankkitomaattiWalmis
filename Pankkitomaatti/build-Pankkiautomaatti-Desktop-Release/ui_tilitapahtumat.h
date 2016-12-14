/********************************************************************************
** Form generated from reading UI file 'tilitapahtumat.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TILITAPAHTUMAT_H
#define UI_TILITAPAHTUMAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Tilitapahtumat
{
public:
    QTableView *tableView;
    QPushButton *pushButton_Takaisin;
    QPushButton *pushButton_nayta;

    void setupUi(QDialog *Tilitapahtumat)
    {
        if (Tilitapahtumat->objectName().isEmpty())
            Tilitapahtumat->setObjectName(QStringLiteral("Tilitapahtumat"));
        Tilitapahtumat->resize(999, 672);
        tableView = new QTableView(Tilitapahtumat);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 0, 981, 571));
        pushButton_Takaisin = new QPushButton(Tilitapahtumat);
        pushButton_Takaisin->setObjectName(QStringLiteral("pushButton_Takaisin"));
        pushButton_Takaisin->setGeometry(QRect(850, 600, 121, 51));
        pushButton_nayta = new QPushButton(Tilitapahtumat);
        pushButton_nayta->setObjectName(QStringLiteral("pushButton_nayta"));
        pushButton_nayta->setGeometry(QRect(20, 600, 131, 51));

        retranslateUi(Tilitapahtumat);

        QMetaObject::connectSlotsByName(Tilitapahtumat);
    } // setupUi

    void retranslateUi(QDialog *Tilitapahtumat)
    {
        Tilitapahtumat->setWindowTitle(QApplication::translate("Tilitapahtumat", "Dialog", 0));
        pushButton_Takaisin->setText(QApplication::translate("Tilitapahtumat", "Takaisin", 0));
        pushButton_nayta->setText(QApplication::translate("Tilitapahtumat", "N\303\244yt\303\244", 0));
    } // retranslateUi

};

namespace Ui {
    class Tilitapahtumat: public Ui_Tilitapahtumat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TILITAPAHTUMAT_H
