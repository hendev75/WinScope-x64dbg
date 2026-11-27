/********************************************************************************
** Form generated from reading UI file 'CPUArgumentWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CPUARGUMENTWIDGET_H
#define UI_CPUARGUMENTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "StdTable.h"

QT_BEGIN_NAMESPACE

class Ui_CPUArgumentWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboCallingConvention;
    QSpinBox *spinArgCount;
    QCheckBox *checkBoxLock;
    StdTable *table;

    void setupUi(QWidget *CPUArgumentWidget)
    {
        if (CPUArgumentWidget->objectName().isEmpty())
            CPUArgumentWidget->setObjectName(QString::fromUtf8("CPUArgumentWidget"));
        CPUArgumentWidget->resize(438, 114);
        verticalLayout = new QVBoxLayout(CPUArgumentWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        comboCallingConvention = new QComboBox(CPUArgumentWidget);
        comboCallingConvention->setObjectName(QString::fromUtf8("comboCallingConvention"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboCallingConvention->sizePolicy().hasHeightForWidth());
        comboCallingConvention->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(comboCallingConvention);

        spinArgCount = new QSpinBox(CPUArgumentWidget);
        spinArgCount->setObjectName(QString::fromUtf8("spinArgCount"));

        horizontalLayout->addWidget(spinArgCount);

        checkBoxLock = new QCheckBox(CPUArgumentWidget);
        checkBoxLock->setObjectName(QString::fromUtf8("checkBoxLock"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(checkBoxLock->sizePolicy().hasHeightForWidth());
        checkBoxLock->setSizePolicy(sizePolicy1);
        checkBoxLock->setMinimumSize(QSize(66, 0));
        checkBoxLock->setTristate(true);

        horizontalLayout->addWidget(checkBoxLock);


        verticalLayout->addLayout(horizontalLayout);

        table = new StdTable(CPUArgumentWidget);
        table->setObjectName(QString::fromUtf8("table"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(table->sizePolicy().hasHeightForWidth());
        table->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(table);


        retranslateUi(CPUArgumentWidget);

        QMetaObject::connectSlotsByName(CPUArgumentWidget);
    } // setupUi

    void retranslateUi(QWidget *CPUArgumentWidget)
    {
        CPUArgumentWidget->setWindowTitle(QApplication::translate("CPUArgumentWidget", "Arguments", nullptr));
        checkBoxLock->setText(QApplication::translate("CPUArgumentWidget", "Unlocked", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CPUArgumentWidget: public Ui_CPUArgumentWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CPUARGUMENTWIDGET_H
