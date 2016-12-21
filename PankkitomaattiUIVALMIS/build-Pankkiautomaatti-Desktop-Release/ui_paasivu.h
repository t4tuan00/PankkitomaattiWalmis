/********************************************************************************
** Form generated from reading UI file 'paasivu.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAASIVU_H
#define UI_PAASIVU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Paasivu
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_Saldo;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_Tilitapahtumat;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_Nosto;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton_Peruuta;

    void setupUi(QDialog *Paasivu)
    {
        if (Paasivu->objectName().isEmpty())
            Paasivu->setObjectName(QStringLiteral("Paasivu"));
        Paasivu->resize(1227, 858);
        Paasivu->setStyleSheet(QStringLiteral("background-color: rgb(255, 151, 0);"));
        gridLayout = new QGridLayout(Paasivu);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_Saldo = new QPushButton(Paasivu);
        pushButton_Saldo->setObjectName(QStringLiteral("pushButton_Saldo"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_Saldo->sizePolicy().hasHeightForWidth());
        pushButton_Saldo->setSizePolicy(sizePolicy);
        pushButton_Saldo->setMaximumSize(QSize(300, 100));
        QFont font;
        font.setPointSize(20);
        pushButton_Saldo->setFont(font);
        pushButton_Saldo->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton_Saldo);

        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        pushButton_Tilitapahtumat = new QPushButton(Paasivu);
        pushButton_Tilitapahtumat->setObjectName(QStringLiteral("pushButton_Tilitapahtumat"));
        sizePolicy.setHeightForWidth(pushButton_Tilitapahtumat->sizePolicy().hasHeightForWidth());
        pushButton_Tilitapahtumat->setSizePolicy(sizePolicy);
        pushButton_Tilitapahtumat->setMaximumSize(QSize(300, 100));
        pushButton_Tilitapahtumat->setFont(font);
        pushButton_Tilitapahtumat->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton_Tilitapahtumat);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        pushButton_Nosto = new QPushButton(Paasivu);
        pushButton_Nosto->setObjectName(QStringLiteral("pushButton_Nosto"));
        sizePolicy.setHeightForWidth(pushButton_Nosto->sizePolicy().hasHeightForWidth());
        pushButton_Nosto->setSizePolicy(sizePolicy);
        pushButton_Nosto->setMaximumSize(QSize(300, 100));
        pushButton_Nosto->setFont(font);
        pushButton_Nosto->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton_Nosto);

        verticalSpacer_3 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        pushButton_Peruuta = new QPushButton(Paasivu);
        pushButton_Peruuta->setObjectName(QStringLiteral("pushButton_Peruuta"));
        sizePolicy.setHeightForWidth(pushButton_Peruuta->sizePolicy().hasHeightForWidth());
        pushButton_Peruuta->setSizePolicy(sizePolicy);
        pushButton_Peruuta->setMaximumSize(QSize(300, 100));
        pushButton_Peruuta->setFont(font);
        pushButton_Peruuta->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton_Peruuta);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(Paasivu);

        QMetaObject::connectSlotsByName(Paasivu);
    } // setupUi

    void retranslateUi(QDialog *Paasivu)
    {
        Paasivu->setWindowTitle(QApplication::translate("Paasivu", "Dialog", 0));
        pushButton_Saldo->setText(QApplication::translate("Paasivu", "Saldo", 0));
        pushButton_Tilitapahtumat->setText(QApplication::translate("Paasivu", "Tilitapahtumat", 0));
        pushButton_Nosto->setText(QApplication::translate("Paasivu", "Nosto", 0));
        pushButton_Peruuta->setText(QApplication::translate("Paasivu", "Kirjaudu ulos", 0));
    } // retranslateUi

};

namespace Ui {
    class Paasivu: public Ui_Paasivu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAASIVU_H
