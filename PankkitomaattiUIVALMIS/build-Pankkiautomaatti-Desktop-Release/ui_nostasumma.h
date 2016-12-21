/********************************************************************************
** Form generated from reading UI file 'nostasumma.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOSTASUMMA_H
#define UI_NOSTASUMMA_H

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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NostaSumma
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_1;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_5;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_6;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_7;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_8;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_9;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButton_0;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pushButton_10;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_Peruuta;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_Pyyhi;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton_Ok;

    void setupUi(QDialog *NostaSumma)
    {
        if (NostaSumma->objectName().isEmpty())
            NostaSumma->setObjectName(QStringLiteral("NostaSumma"));
        NostaSumma->resize(1126, 860);
        NostaSumma->setStyleSheet(QStringLiteral("background-color: rgb(255, 151, 0);"));
        gridLayout = new QGridLayout(NostaSumma);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(NostaSumma);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMaximumSize(QSize(1000, 150));
        QFont font;
        font.setPointSize(40);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        pushButton_1 = new QPushButton(NostaSumma);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy1);
        pushButton_1->setMaximumSize(QSize(250, 100));
        QFont font1;
        font1.setPointSize(20);
        pushButton_1->setFont(font1);
        pushButton_1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(pushButton_1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(NostaSumma);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setMaximumSize(QSize(250, 100));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_3 = new QPushButton(NostaSumma);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy2);
        pushButton_3->setMaximumSize(QSize(250, 100));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_4 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 10, -1, -1);
        pushButton_4 = new QPushButton(NostaSumma);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        pushButton_4->setMaximumSize(QSize(250, 100));
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(pushButton_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButton_5 = new QPushButton(NostaSumma);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        pushButton_5->setMaximumSize(QSize(250, 100));
        pushButton_5->setFont(font1);
        pushButton_5->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(pushButton_5);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        pushButton_6 = new QPushButton(NostaSumma);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);
        pushButton_6->setMaximumSize(QSize(250, 100));
        pushButton_6->setFont(font1);
        pushButton_6->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(pushButton_6);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_5 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 10, -1, -1);
        pushButton_7 = new QPushButton(NostaSumma);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        sizePolicy1.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy1);
        pushButton_7->setMaximumSize(QSize(250, 100));
        pushButton_7->setFont(font1);
        pushButton_7->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(pushButton_7);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        pushButton_8 = new QPushButton(NostaSumma);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);
        pushButton_8->setMaximumSize(QSize(250, 100));
        pushButton_8->setFont(font1);
        pushButton_8->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(pushButton_8);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        pushButton_9 = new QPushButton(NostaSumma);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        sizePolicy1.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy1);
        pushButton_9->setMaximumSize(QSize(250, 100));
        pushButton_9->setFont(font1);
        pushButton_9->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(pushButton_9);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer_6 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton = new QPushButton(NostaSumma);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMaximumSize(QSize(250, 100));
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(pushButton);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        pushButton_0 = new QPushButton(NostaSumma);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        sizePolicy1.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy1);
        pushButton_0->setMaximumSize(QSize(200, 100));
        pushButton_0->setFont(font1);
        pushButton_0->setLayoutDirection(Qt::LeftToRight);
        pushButton_0->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(pushButton_0);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        pushButton_10 = new QPushButton(NostaSumma);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        sizePolicy1.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy1);
        pushButton_10->setMaximumSize(QSize(250, 100));
        pushButton_10->setFont(font1);
        pushButton_10->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(pushButton_10);


        verticalLayout_2->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout_2, 2, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        pushButton_Peruuta = new QPushButton(NostaSumma);
        pushButton_Peruuta->setObjectName(QStringLiteral("pushButton_Peruuta"));
        sizePolicy.setHeightForWidth(pushButton_Peruuta->sizePolicy().hasHeightForWidth());
        pushButton_Peruuta->setSizePolicy(sizePolicy);
        pushButton_Peruuta->setMaximumSize(QSize(250, 100));
        pushButton_Peruuta->setFont(font1);
        pushButton_Peruuta->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton_Peruuta);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        pushButton_Pyyhi = new QPushButton(NostaSumma);
        pushButton_Pyyhi->setObjectName(QStringLiteral("pushButton_Pyyhi"));
        sizePolicy.setHeightForWidth(pushButton_Pyyhi->sizePolicy().hasHeightForWidth());
        pushButton_Pyyhi->setSizePolicy(sizePolicy);
        pushButton_Pyyhi->setMaximumSize(QSize(250, 100));
        pushButton_Pyyhi->setFont(font1);
        pushButton_Pyyhi->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton_Pyyhi);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        pushButton_Ok = new QPushButton(NostaSumma);
        pushButton_Ok->setObjectName(QStringLiteral("pushButton_Ok"));
        sizePolicy.setHeightForWidth(pushButton_Ok->sizePolicy().hasHeightForWidth());
        pushButton_Ok->setSizePolicy(sizePolicy);
        pushButton_Ok->setMaximumSize(QSize(250, 100));
        pushButton_Ok->setFont(font1);
        pushButton_Ok->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton_Ok);


        gridLayout->addLayout(verticalLayout, 2, 1, 1, 1);


        retranslateUi(NostaSumma);

        QMetaObject::connectSlotsByName(NostaSumma);
    } // setupUi

    void retranslateUi(QDialog *NostaSumma)
    {
        NostaSumma->setWindowTitle(QApplication::translate("NostaSumma", "Dialog", 0));
        label->setText(QString());
        pushButton_1->setText(QApplication::translate("NostaSumma", "1", 0));
        pushButton_2->setText(QApplication::translate("NostaSumma", "2", 0));
        pushButton_3->setText(QApplication::translate("NostaSumma", "3", 0));
        pushButton_4->setText(QApplication::translate("NostaSumma", "4", 0));
        pushButton_5->setText(QApplication::translate("NostaSumma", "5", 0));
        pushButton_6->setText(QApplication::translate("NostaSumma", "6", 0));
        pushButton_7->setText(QApplication::translate("NostaSumma", "7", 0));
        pushButton_8->setText(QApplication::translate("NostaSumma", "8", 0));
        pushButton_9->setText(QApplication::translate("NostaSumma", "9", 0));
        pushButton->setText(QApplication::translate("NostaSumma", "+", 0));
        pushButton_0->setText(QApplication::translate("NostaSumma", "0", 0));
        pushButton_10->setText(QApplication::translate("NostaSumma", "-", 0));
        pushButton_Peruuta->setText(QApplication::translate("NostaSumma", "Peruuta", 0));
        pushButton_Pyyhi->setText(QApplication::translate("NostaSumma", "<-", 0));
        pushButton_Ok->setText(QApplication::translate("NostaSumma", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class NostaSumma: public Ui_NostaSumma {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSTASUMMA_H
