/********************************************************************************
** Form generated from reading UI file 'pinkoodi.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PINKOODI_H
#define UI_PINKOODI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Pinkoodi
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_Ok;
    QPushButton *pushButton_Peruuta;
    QPushButton *pushButton_Pyyhi;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_Plus;
    QPushButton *pushButton_0;
    QPushButton *pushButton_Miinus;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;

    void setupUi(QDialog *Pinkoodi)
    {
        if (Pinkoodi->objectName().isEmpty())
            Pinkoodi->setObjectName(QStringLiteral("Pinkoodi"));
        Pinkoodi->resize(980, 747);
        Pinkoodi->setStyleSheet(QStringLiteral("background-color: rgb(255, 151, 0);"));
        gridLayout = new QGridLayout(Pinkoodi);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(14, 22, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(0, 36, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 1, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout_3->setContentsMargins(0, -1, -1, -1);
        pushButton_Ok = new QPushButton(Pinkoodi);
        pushButton_Ok->setObjectName(QStringLiteral("pushButton_Ok"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_Ok->sizePolicy().hasHeightForWidth());
        pushButton_Ok->setSizePolicy(sizePolicy);
        pushButton_Ok->setMaximumSize(QSize(150, 100));
        QFont font;
        font.setPointSize(20);
        pushButton_Ok->setFont(font);
        pushButton_Ok->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout_3->addWidget(pushButton_Ok, 2, 0, 1, 1);

        pushButton_Peruuta = new QPushButton(Pinkoodi);
        pushButton_Peruuta->setObjectName(QStringLiteral("pushButton_Peruuta"));
        sizePolicy.setHeightForWidth(pushButton_Peruuta->sizePolicy().hasHeightForWidth());
        pushButton_Peruuta->setSizePolicy(sizePolicy);
        pushButton_Peruuta->setMaximumSize(QSize(150, 100));
        pushButton_Peruuta->setFont(font);
        pushButton_Peruuta->setLayoutDirection(Qt::LeftToRight);
        pushButton_Peruuta->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout_3->addWidget(pushButton_Peruuta, 0, 0, 1, 1);

        pushButton_Pyyhi = new QPushButton(Pinkoodi);
        pushButton_Pyyhi->setObjectName(QStringLiteral("pushButton_Pyyhi"));
        sizePolicy.setHeightForWidth(pushButton_Pyyhi->sizePolicy().hasHeightForWidth());
        pushButton_Pyyhi->setSizePolicy(sizePolicy);
        pushButton_Pyyhi->setMaximumSize(QSize(150, 100));
        pushButton_Pyyhi->setFont(font);
        pushButton_Pyyhi->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout_3->addWidget(pushButton_Pyyhi, 1, 0, 1, 1);


        gridLayout->addLayout(gridLayout_3, 3, 2, 3, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_7 = new QPushButton(Pinkoodi);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy1);
        pushButton_7->setMaximumSize(QSize(250, 100));
        pushButton_7->setFont(font);
        pushButton_7->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(Pinkoodi);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);
        pushButton_8->setMaximumSize(QSize(250, 100));
        pushButton_8->setFont(font);
        pushButton_8->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(Pinkoodi);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        sizePolicy1.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy1);
        pushButton_9->setMaximumSize(QSize(250, 100));
        pushButton_9->setFont(font);
        pushButton_9->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(pushButton_9);


        gridLayout->addLayout(horizontalLayout_3, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
        pushButton_1 = new QPushButton(Pinkoodi);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        sizePolicy1.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy1);
        pushButton_1->setMinimumSize(QSize(0, 0));
        pushButton_1->setMaximumSize(QSize(250, 100));
        pushButton_1->setFont(font);
        pushButton_1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(pushButton_1);

        pushButton_2 = new QPushButton(Pinkoodi);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setMaximumSize(QSize(250, 100));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(Pinkoodi);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setMaximumSize(QSize(250, 100));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(pushButton_3);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        label = new QLabel(Pinkoodi);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(0, 0));
        label->setMaximumSize(QSize(540, 105));
        QFont font1;
        font1.setPointSize(26);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton_Plus = new QPushButton(Pinkoodi);
        pushButton_Plus->setObjectName(QStringLiteral("pushButton_Plus"));
        sizePolicy1.setHeightForWidth(pushButton_Plus->sizePolicy().hasHeightForWidth());
        pushButton_Plus->setSizePolicy(sizePolicy1);
        pushButton_Plus->setMaximumSize(QSize(250, 100));
        pushButton_Plus->setFont(font);
        pushButton_Plus->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(pushButton_Plus);

        pushButton_0 = new QPushButton(Pinkoodi);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        sizePolicy1.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy1);
        pushButton_0->setMaximumSize(QSize(250, 100));
        pushButton_0->setFont(font);
        pushButton_0->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(pushButton_0);

        pushButton_Miinus = new QPushButton(Pinkoodi);
        pushButton_Miinus->setObjectName(QStringLiteral("pushButton_Miinus"));
        sizePolicy1.setHeightForWidth(pushButton_Miinus->sizePolicy().hasHeightForWidth());
        pushButton_Miinus->setSizePolicy(sizePolicy1);
        pushButton_Miinus->setMaximumSize(QSize(250, 100));
        pushButton_Miinus->setFont(font);
        pushButton_Miinus->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(pushButton_Miinus);


        gridLayout->addLayout(horizontalLayout_4, 5, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_4 = new QPushButton(Pinkoodi);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        pushButton_4->setMaximumSize(QSize(250, 100));
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(Pinkoodi);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        pushButton_5->setMaximumSize(QSize(250, 100));
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(Pinkoodi);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);
        pushButton_6->setMaximumSize(QSize(250, 100));
        pushButton_6->setFont(font);
        pushButton_6->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(pushButton_6);


        gridLayout->addLayout(horizontalLayout_2, 3, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        label_2 = new QLabel(Pinkoodi);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(171, 16777215));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);


        retranslateUi(Pinkoodi);

        QMetaObject::connectSlotsByName(Pinkoodi);
    } // setupUi

    void retranslateUi(QDialog *Pinkoodi)
    {
        Pinkoodi->setWindowTitle(QApplication::translate("Pinkoodi", "Dialog", 0));
        pushButton_Ok->setText(QApplication::translate("Pinkoodi", "Ok", 0));
        pushButton_Peruuta->setText(QApplication::translate("Pinkoodi", "Peruuta", 0));
        pushButton_Pyyhi->setText(QApplication::translate("Pinkoodi", "<-", 0));
        pushButton_7->setText(QApplication::translate("Pinkoodi", "7", 0));
        pushButton_8->setText(QApplication::translate("Pinkoodi", "8", 0));
        pushButton_9->setText(QApplication::translate("Pinkoodi", "9", 0));
        pushButton_1->setText(QApplication::translate("Pinkoodi", "1", 0));
        pushButton_2->setText(QApplication::translate("Pinkoodi", "2", 0));
        pushButton_3->setText(QApplication::translate("Pinkoodi", "3", 0));
        label->setText(QString());
        pushButton_Plus->setText(QApplication::translate("Pinkoodi", "+", 0));
        pushButton_0->setText(QApplication::translate("Pinkoodi", "0", 0));
        pushButton_Miinus->setText(QApplication::translate("Pinkoodi", "-", 0));
        pushButton_4->setText(QApplication::translate("Pinkoodi", "4", 0));
        pushButton_5->setText(QApplication::translate("Pinkoodi", "5", 0));
        pushButton_6->setText(QApplication::translate("Pinkoodi", "6", 0));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Pinkoodi: public Ui_Pinkoodi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PINKOODI_H
