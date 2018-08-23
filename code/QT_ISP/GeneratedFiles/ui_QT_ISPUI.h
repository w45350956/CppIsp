/********************************************************************************
** Form generated from reading UI file 'QT_ISPUI.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_ISPUI_H
#define UI_QT_ISPUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qtwidgetshow.h"

QT_BEGIN_NAMESPACE

class Ui_QT_ISPUIClass
{
public:
    QPushButton *btn_IspTools;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QTWidgetShow *widget_src1;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *QT_ISPUIClass)
    {
        if (QT_ISPUIClass->objectName().isEmpty())
            QT_ISPUIClass->setObjectName(QStringLiteral("QT_ISPUIClass"));
        QT_ISPUIClass->resize(1112, 863);
        btn_IspTools = new QPushButton(QT_ISPUIClass);
        btn_IspTools->setObjectName(QStringLiteral("btn_IspTools"));
        btn_IspTools->setGeometry(QRect(630, 50, 75, 23));
        layoutWidget = new QWidget(QT_ISPUIClass);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 9, 602, 513));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_src1 = new QTWidgetShow(layoutWidget);
        widget_src1->setObjectName(QStringLiteral("widget_src1"));
        widget_src1->setMinimumSize(QSize(600, 480));
        widget_src1->setMaximumSize(QSize(600, 480));

        verticalLayout->addWidget(widget_src1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(QT_ISPUIClass);
        QObject::connect(pushButton, SIGNAL(clicked()), QT_ISPUIClass, SLOT(OpenFile()));
        QObject::connect(btn_IspTools, SIGNAL(clicked()), QT_ISPUIClass, SLOT(OpenIspTools()));

        QMetaObject::connectSlotsByName(QT_ISPUIClass);
    } // setupUi

    void retranslateUi(QWidget *QT_ISPUIClass)
    {
        QT_ISPUIClass->setWindowTitle(QApplication::translate("QT_ISPUIClass", "QT_ISPUI", Q_NULLPTR));
        btn_IspTools->setText(QApplication::translate("QT_ISPUIClass", "IspTools", Q_NULLPTR));
        pushButton->setText(QApplication::translate("QT_ISPUIClass", "Open", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QT_ISPUIClass: public Ui_QT_ISPUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_ISPUI_H
