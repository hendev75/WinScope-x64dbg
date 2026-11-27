/********************************************************************************
** Form generated from reading UI file 'CodepageSelectionDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CODEPAGESELECTIONDIALOG_H
#define UI_CODEPAGESELECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CodepageSelectionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listCodepages;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonOk;
    QPushButton *buttonCancel;

    void setupUi(QDialog *CodepageSelectionDialog)
    {
        if (CodepageSelectionDialog->objectName().isEmpty())
            CodepageSelectionDialog->setObjectName(QString::fromUtf8("CodepageSelectionDialog"));
        CodepageSelectionDialog->resize(396, 300);
        verticalLayout = new QVBoxLayout(CodepageSelectionDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listCodepages = new QListWidget(CodepageSelectionDialog);
        listCodepages->setObjectName(QString::fromUtf8("listCodepages"));

        verticalLayout->addWidget(listCodepages);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonOk = new QPushButton(CodepageSelectionDialog);
        buttonOk->setObjectName(QString::fromUtf8("buttonOk"));

        horizontalLayout->addWidget(buttonOk);

        buttonCancel = new QPushButton(CodepageSelectionDialog);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));

        horizontalLayout->addWidget(buttonCancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(CodepageSelectionDialog);
        QObject::connect(buttonOk, SIGNAL(clicked()), CodepageSelectionDialog, SLOT(accept()));
        QObject::connect(buttonCancel, SIGNAL(clicked()), CodepageSelectionDialog, SLOT(reject()));

        buttonOk->setDefault(true);


        QMetaObject::connectSlotsByName(CodepageSelectionDialog);
    } // setupUi

    void retranslateUi(QDialog *CodepageSelectionDialog)
    {
        CodepageSelectionDialog->setWindowTitle(QApplication::translate("CodepageSelectionDialog", "Select Codepage...", nullptr));
        buttonOk->setText(QApplication::translate("CodepageSelectionDialog", "&OK", nullptr));
        buttonCancel->setText(QApplication::translate("CodepageSelectionDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CodepageSelectionDialog: public Ui_CodepageSelectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CODEPAGESELECTIONDIALOG_H
