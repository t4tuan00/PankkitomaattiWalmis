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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Tilitapahtumat
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton_nayta;
    QTableView *tableView;
    QPushButton *pushButton_Takaisin;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *Tilitapahtumat)
    {
        if (Tilitapahtumat->objectName().isEmpty())
            Tilitapahtumat->setObjectName(QStringLiteral("Tilitapahtumat"));
        Tilitapahtumat->resize(999, 672);
        Tilitapahtumat->setStyleSheet(QStringLiteral("background-color: rgb(255, 151, 0);"));
        gridLayout = new QGridLayout(Tilitapahtumat);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_nayta = new QPushButton(Tilitapahtumat);
        pushButton_nayta->setObjectName(QStringLiteral("pushButton_nayta"));
        pushButton_nayta->setMaximumSize(QSize(300, 100));
        QFont font;
        font.setPointSize(20);
        pushButton_nayta->setFont(font);
        pushButton_nayta->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(pushButton_nayta, 2, 0, 1, 1);

        tableView = new QTableView(Tilitapahtumat);
        tableView->setObjectName(QStringLiteral("tableView"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy);
        tableView->setMaximumSize(QSize(1200, 1100));
        tableView->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(tableView, 0, 0, 1, 2);

        pushButton_Takaisin = new QPushButton(Tilitapahtumat);
        pushButton_Takaisin->setObjectName(QStringLiteral("pushButton_Takaisin"));
        sizePolicy.setHeightForWidth(pushButton_Takaisin->sizePolicy().hasHeightForWidth());
        pushButton_Takaisin->setSizePolicy(sizePolicy);
        pushButton_Takaisin->setMaximumSize(QSize(300, 100));
        pushButton_Takaisin->setFont(font);
        pushButton_Takaisin->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(pushButton_Takaisin, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(1, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);


        retranslateUi(Tilitapahtumat);

        QMetaObject::connectSlotsByName(Tilitapahtumat);
    } // setupUi

    void retranslateUi(QDialog *Tilitapahtumat)
    {
        Tilitapahtumat->setWindowTitle(QApplication::translate("Tilitapahtumat", "Dialog", 0));
        pushButton_nayta->setText(QApplication::translate("Tilitapahtumat", "N\303\244yt\303\244", 0));
        pushButton_Takaisin->setText(QApplication::translate("Tilitapahtumat", "Takaisin", 0));
    } // retranslateUi

};

namespace Ui {
    class Tilitapahtumat: public Ui_Tilitapahtumat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TILITAPAHTUMAT_H
