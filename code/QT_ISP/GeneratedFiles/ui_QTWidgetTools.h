/********************************************************************************
** Form generated from reading UI file 'QTWidgetTools.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTWIDGETTOOLS_H
#define UI_QTWIDGETTOOLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QTWidgetTools
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *le_DbValue;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *le_GainValue;
    QPushButton *btn_Db2Gain;

    void setupUi(QWidget *QTWidgetTools)
    {
        if (QTWidgetTools->objectName().isEmpty())
            QTWidgetTools->setObjectName(QStringLiteral("QTWidgetTools"));
        QTWidgetTools->resize(400, 300);
        widget = new QWidget(QTWidgetTools);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 30, 199, 83));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(30, 0));

        horizontalLayout->addWidget(label);

        le_DbValue = new QLineEdit(widget);
        le_DbValue->setObjectName(QStringLiteral("le_DbValue"));

        horizontalLayout->addWidget(le_DbValue);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(30, 0));

        horizontalLayout_2->addWidget(label_2);

        le_GainValue = new QLineEdit(widget);
        le_GainValue->setObjectName(QStringLiteral("le_GainValue"));
        le_GainValue->setReadOnly(true);

        horizontalLayout_2->addWidget(le_GainValue);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        btn_Db2Gain = new QPushButton(widget);
        btn_Db2Gain->setObjectName(QStringLiteral("btn_Db2Gain"));

        verticalLayout_2->addWidget(btn_Db2Gain);


        retranslateUi(QTWidgetTools);
        QObject::connect(btn_Db2Gain, SIGNAL(clicked()), QTWidgetTools, SLOT(Db2Gain()));

        QMetaObject::connectSlotsByName(QTWidgetTools);
    } // setupUi

    void retranslateUi(QWidget *QTWidgetTools)
    {
        QTWidgetTools->setWindowTitle(QApplication::translate("QTWidgetTools", "QTWidgetTools", Q_NULLPTR));
        label->setText(QApplication::translate("QTWidgetTools", "Db:", Q_NULLPTR));
        label_2->setText(QApplication::translate("QTWidgetTools", "Gain:", Q_NULLPTR));
        btn_Db2Gain->setText(QApplication::translate("QTWidgetTools", "\350\256\241\347\256\227", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QTWidgetTools: public Ui_QTWidgetTools {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTWIDGETTOOLS_H
