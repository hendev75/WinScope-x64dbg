/********************************************************************************
** Form generated from reading UI file 'CloseDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOSEDIALOG_H
#define UI_CLOSEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_CloseDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;

    void setupUi(QDialog *CloseDialog)
    {
        if (CloseDialog->objectName().isEmpty())
            CloseDialog->setObjectName(QString::fromUtf8("CloseDialog"));
        CloseDialog->resize(220, 80);
        horizontalLayout = new QHBoxLayout(CloseDialog);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(CloseDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);


        retranslateUi(CloseDialog);

        QMetaObject::connectSlotsByName(CloseDialog);
    } // setupUi

    void retranslateUi(QDialog *CloseDialog)
    {
        CloseDialog->setWindowTitle(QString());
        label->setText(QApplication::translate("CloseDialog", "Closing Debugger...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CloseDialog: public Ui_CloseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOSEDIALOG_H
