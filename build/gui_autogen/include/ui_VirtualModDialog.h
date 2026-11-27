/********************************************************************************
** Form generated from reading UI file 'VirtualModDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIRTUALMODDIALOG_H
#define UI_VIRTUALMODDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_VirtualModDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *layoutName;
    QLabel *labelName;
    QLineEdit *editName;
    QHBoxLayout *layoutBaseSize;
    QHBoxLayout *layoutBase;
    QLabel *labelBase;
    QLineEdit *editBase;
    QHBoxLayout *layoutSize;
    QLabel *labelSize;
    QLineEdit *editSize;
    QHBoxLayout *layoutButtons;
    QPushButton *buttonOk;
    QPushButton *buttonCancel;

    void setupUi(QDialog *VirtualModDialog)
    {
        if (VirtualModDialog->objectName().isEmpty())
            VirtualModDialog->setObjectName(QString::fromUtf8("VirtualModDialog"));
        VirtualModDialog->resize(400, 101);
        verticalLayout = new QVBoxLayout(VirtualModDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        layoutName = new QHBoxLayout();
        layoutName->setObjectName(QString::fromUtf8("layoutName"));
        labelName = new QLabel(VirtualModDialog);
        labelName->setObjectName(QString::fromUtf8("labelName"));

        layoutName->addWidget(labelName);

        editName = new QLineEdit(VirtualModDialog);
        editName->setObjectName(QString::fromUtf8("editName"));

        layoutName->addWidget(editName);


        verticalLayout->addLayout(layoutName);

        layoutBaseSize = new QHBoxLayout();
        layoutBaseSize->setObjectName(QString::fromUtf8("layoutBaseSize"));
        layoutBase = new QHBoxLayout();
        layoutBase->setObjectName(QString::fromUtf8("layoutBase"));
        labelBase = new QLabel(VirtualModDialog);
        labelBase->setObjectName(QString::fromUtf8("labelBase"));

        layoutBase->addWidget(labelBase);

        editBase = new QLineEdit(VirtualModDialog);
        editBase->setObjectName(QString::fromUtf8("editBase"));

        layoutBase->addWidget(editBase);


        layoutBaseSize->addLayout(layoutBase);

        layoutSize = new QHBoxLayout();
        layoutSize->setObjectName(QString::fromUtf8("layoutSize"));
        labelSize = new QLabel(VirtualModDialog);
        labelSize->setObjectName(QString::fromUtf8("labelSize"));

        layoutSize->addWidget(labelSize);

        editSize = new QLineEdit(VirtualModDialog);
        editSize->setObjectName(QString::fromUtf8("editSize"));

        layoutSize->addWidget(editSize);


        layoutBaseSize->addLayout(layoutSize);


        verticalLayout->addLayout(layoutBaseSize);

        layoutButtons = new QHBoxLayout();
        layoutButtons->setObjectName(QString::fromUtf8("layoutButtons"));
        buttonOk = new QPushButton(VirtualModDialog);
        buttonOk->setObjectName(QString::fromUtf8("buttonOk"));

        layoutButtons->addWidget(buttonOk);

        buttonCancel = new QPushButton(VirtualModDialog);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));

        layoutButtons->addWidget(buttonCancel);


        verticalLayout->addLayout(layoutButtons);

#ifndef QT_NO_SHORTCUT
        labelName->setBuddy(editName);
        labelBase->setBuddy(editBase);
        labelSize->setBuddy(editSize);
#endif // QT_NO_SHORTCUT

        retranslateUi(VirtualModDialog);
        QObject::connect(buttonCancel, SIGNAL(clicked()), VirtualModDialog, SLOT(reject()));
        QObject::connect(buttonOk, SIGNAL(clicked()), VirtualModDialog, SLOT(accept()));

        buttonOk->setDefault(true);


        QMetaObject::connectSlotsByName(VirtualModDialog);
    } // setupUi

    void retranslateUi(QDialog *VirtualModDialog)
    {
        VirtualModDialog->setWindowTitle(QApplication::translate("VirtualModDialog", "Virtual Module", nullptr));
        labelName->setText(QApplication::translate("VirtualModDialog", "&Name:", nullptr));
        labelBase->setText(QApplication::translate("VirtualModDialog", "&Base:", nullptr));
        labelSize->setText(QApplication::translate("VirtualModDialog", "&Size:", nullptr));
        buttonOk->setText(QApplication::translate("VirtualModDialog", "&OK", nullptr));
        buttonCancel->setText(QApplication::translate("VirtualModDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VirtualModDialog: public Ui_VirtualModDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIRTUALMODDIALOG_H
