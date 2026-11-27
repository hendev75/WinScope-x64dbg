/********************************************************************************
** Form generated from reading UI file 'BrowseDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BROWSEDIALOG_H
#define UI_BROWSEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BrowseDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *browse;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *ok;
    QPushButton *cancel;

    void setupUi(QDialog *BrowseDialog)
    {
        if (BrowseDialog->objectName().isEmpty())
            BrowseDialog->setObjectName(QString::fromUtf8("BrowseDialog"));
        BrowseDialog->resize(487, 97);
        verticalLayout = new QVBoxLayout(BrowseDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(BrowseDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(BrowseDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(BrowseDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        browse = new QPushButton(BrowseDialog);
        browse->setObjectName(QString::fromUtf8("browse"));

        horizontalLayout->addWidget(browse);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        ok = new QPushButton(BrowseDialog);
        ok->setObjectName(QString::fromUtf8("ok"));

        horizontalLayout_2->addWidget(ok);

        cancel = new QPushButton(BrowseDialog);
        cancel->setObjectName(QString::fromUtf8("cancel"));

        horizontalLayout_2->addWidget(cancel);


        verticalLayout->addLayout(horizontalLayout_2);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(lineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(BrowseDialog);
        QObject::connect(cancel, SIGNAL(clicked()), BrowseDialog, SLOT(reject()));

        ok->setDefault(true);


        QMetaObject::connectSlotsByName(BrowseDialog);
    } // setupUi

    void retranslateUi(QDialog *BrowseDialog)
    {
        BrowseDialog->setWindowTitle(QApplication::translate("BrowseDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("BrowseDialog", "Please input the file path.", nullptr));
        label_2->setText(QApplication::translate("BrowseDialog", "Path:", nullptr));
        browse->setText(QApplication::translate("BrowseDialog", "&Browse...", nullptr));
        ok->setText(QApplication::translate("BrowseDialog", "&OK", nullptr));
        cancel->setText(QApplication::translate("BrowseDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BrowseDialog: public Ui_BrowseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BROWSEDIALOG_H
