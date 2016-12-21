/********************************************************************************
** Form generated from reading UI file 'nosto.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOSTO_H
#define UI_NOSTO_H

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

class Ui_Nosto
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_20;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton_40;
    QSpacerItem *verticalSpacer_5;
    QPushButton *pushButton_60;
    QSpacerItem *verticalSpacer_6;
    QPushButton *pushButton_MuuSumma;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_80;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_100;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_120;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton_Peruuta;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *Nosto)
    {
        if (Nosto->objectName().isEmpty())
            Nosto->setObjectName(QStringLiteral("Nosto"));
        Nosto->resize(1246, 867);
        Nosto->setStyleSheet(QStringLiteral("background-color: rgb(255, 151, 0);"));
        gridLayout = new QGridLayout(Nosto);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pushButton_20 = new QPushButton(Nosto);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));
        pushButton_20->setMaximumSize(QSize(300, 100));
        QFont font;
        font.setPointSize(20);
        pushButton_20->setFont(font);
        pushButton_20->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(pushButton_20);

        verticalSpacer_4 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_4);

        pushButton_40 = new QPushButton(Nosto);
        pushButton_40->setObjectName(QStringLiteral("pushButton_40"));
        pushButton_40->setMaximumSize(QSize(300, 100));
        pushButton_40->setFont(font);
        pushButton_40->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(pushButton_40);

        verticalSpacer_5 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_5);

        pushButton_60 = new QPushButton(Nosto);
        pushButton_60->setObjectName(QStringLiteral("pushButton_60"));
        pushButton_60->setMaximumSize(QSize(300, 100));
        pushButton_60->setFont(font);
        pushButton_60->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(pushButton_60);

        verticalSpacer_6 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_6);

        pushButton_MuuSumma = new QPushButton(Nosto);
        pushButton_MuuSumma->setObjectName(QStringLiteral("pushButton_MuuSumma"));
        pushButton_MuuSumma->setMaximumSize(QSize(300, 100));
        pushButton_MuuSumma->setFont(font);
        pushButton_MuuSumma->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(pushButton_MuuSumma);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_80 = new QPushButton(Nosto);
        pushButton_80->setObjectName(QStringLiteral("pushButton_80"));
        pushButton_80->setMaximumSize(QSize(300, 100));
        pushButton_80->setFont(font);
        pushButton_80->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton_80);

        verticalSpacer = new QSpacerItem(3, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        pushButton_100 = new QPushButton(Nosto);
        pushButton_100->setObjectName(QStringLiteral("pushButton_100"));
        pushButton_100->setMaximumSize(QSize(300, 100));
        pushButton_100->setFont(font);
        pushButton_100->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton_100);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        pushButton_120 = new QPushButton(Nosto);
        pushButton_120->setObjectName(QStringLiteral("pushButton_120"));
        pushButton_120->setMaximumSize(QSize(300, 100));
        pushButton_120->setFont(font);
        pushButton_120->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton_120);

        verticalSpacer_3 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        pushButton_Peruuta = new QPushButton(Nosto);
        pushButton_Peruuta->setObjectName(QStringLiteral("pushButton_Peruuta"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_Peruuta->sizePolicy().hasHeightForWidth());
        pushButton_Peruuta->setSizePolicy(sizePolicy);
        pushButton_Peruuta->setMaximumSize(QSize(300, 100));
        pushButton_Peruuta->setFont(font);
        pushButton_Peruuta->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton_Peruuta);


        gridLayout->addLayout(verticalLayout, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(446, 23, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);


        retranslateUi(Nosto);

        QMetaObject::connectSlotsByName(Nosto);
    } // setupUi

    void retranslateUi(QDialog *Nosto)
    {
        Nosto->setWindowTitle(QApplication::translate("Nosto", "Dialog", 0));
        pushButton_20->setText(QApplication::translate("Nosto", "20", 0));
        pushButton_40->setText(QApplication::translate("Nosto", "40", 0));
        pushButton_60->setText(QApplication::translate("Nosto", "60", 0));
        pushButton_MuuSumma->setText(QApplication::translate("Nosto", "Muu Summa", 0));
        pushButton_80->setText(QApplication::translate("Nosto", "80", 0));
        pushButton_100->setText(QApplication::translate("Nosto", "100", 0));
        pushButton_120->setText(QApplication::translate("Nosto", "120", 0));
        pushButton_Peruuta->setText(QApplication::translate("Nosto", "Takaisin", 0));
    } // retranslateUi

};

namespace Ui {
    class Nosto: public Ui_Nosto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSTO_H
