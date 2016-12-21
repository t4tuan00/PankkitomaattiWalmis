/********************************************************************************
** Form generated from reading UI file 'saldo.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALDO_H
#define UI_SALDO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Saldo
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_Perruuta;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *Saldo)
    {
        if (Saldo->objectName().isEmpty())
            Saldo->setObjectName(QStringLiteral("Saldo"));
        Saldo->resize(1052, 763);
        Saldo->setLayoutDirection(Qt::LeftToRight);
        Saldo->setStyleSheet(QStringLiteral("background-color: rgb(255, 151, 0);"));
        gridLayout = new QGridLayout(Saldo);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(9, -1, -1, -1);
        label = new QLabel(Saldo);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(500, 200));
        QFont font;
        font.setPointSize(40);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label->setFrameShape(QFrame::Box);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 2, 1, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 3, 2, 1, 1);

        pushButton_Perruuta = new QPushButton(Saldo);
        pushButton_Perruuta->setObjectName(QStringLiteral("pushButton_Perruuta"));
        pushButton_Perruuta->setMaximumSize(QSize(200, 100));
        QFont font1;
        font1.setPointSize(20);
        pushButton_Perruuta->setFont(font1);
        pushButton_Perruuta->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(pushButton_Perruuta, 4, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(200, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        label_2 = new QLabel(Saldo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(500, 200));
        QFont font2;
        font2.setPointSize(32);
        label_2->setFont(font2);
        label_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 151, 0);"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 1, 1, 1, 1);


        retranslateUi(Saldo);

        QMetaObject::connectSlotsByName(Saldo);
    } // setupUi

    void retranslateUi(QDialog *Saldo)
    {
        Saldo->setWindowTitle(QApplication::translate("Saldo", "Dialog", 0));
        label->setText(QString());
        pushButton_Perruuta->setText(QApplication::translate("Saldo", "Takaisin", 0));
        label_2->setText(QApplication::translate("Saldo", "  Tilin saldo", 0));
    } // retranslateUi

};

namespace Ui {
    class Saldo: public Ui_Saldo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALDO_H
