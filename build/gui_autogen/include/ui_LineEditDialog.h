/********************************************************************************
** Form generated from reading UI file 'LineEditDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINEEDITDIALOG_H
#define UI_LINEEDITDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "BasicView/HistoryLineEdit.h"

QT_BEGIN_NAMESPACE

class Ui_LineEditDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    HistoryLineEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QCheckBox *checkBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonOk;
    QPushButton *buttonCancel;

    void setupUi(QDialog *LineEditDialog)
    {
        if (LineEditDialog->objectName().isEmpty())
            LineEditDialog->setObjectName(QString::fromUtf8("LineEditDialog"));
        LineEditDialog->resize(414, 72);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("ui-combo-box-edit");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8(":/Default/icons/ui-combo-box-edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        LineEditDialog->setWindowIcon(icon);
        horizontalLayout_2 = new QHBoxLayout(LineEditDialog);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit = new HistoryLineEdit(LineEditDialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(LineEditDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(40, 20));

        horizontalLayout->addWidget(label);

        checkBox = new QCheckBox(LineEditDialog);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout->addWidget(checkBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonOk = new QPushButton(LineEditDialog);
        buttonOk->setObjectName(QString::fromUtf8("buttonOk"));

        horizontalLayout->addWidget(buttonOk);

        buttonCancel = new QPushButton(LineEditDialog);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));

        horizontalLayout->addWidget(buttonCancel);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(LineEditDialog);

        buttonOk->setDefault(true);


        QMetaObject::connectSlotsByName(LineEditDialog);
    } // setupUi

    void retranslateUi(QDialog *LineEditDialog)
    {
        LineEditDialog->setWindowTitle(QApplication::translate("LineEditDialog", "Dialog", nullptr));
        label->setText(QString());
        checkBox->setText(QApplication::translate("LineEditDialog", "CheckBox", nullptr));
        buttonOk->setText(QApplication::translate("LineEditDialog", "&OK", nullptr));
        buttonCancel->setText(QApplication::translate("LineEditDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LineEditDialog: public Ui_LineEditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINEEDITDIALOG_H
