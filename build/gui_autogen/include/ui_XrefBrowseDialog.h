/********************************************************************************
** Form generated from reading UI file 'XrefBrowseDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XREFBROWSEDIALOG_H
#define UI_XREFBROWSEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_XrefBrowseDialog
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *XrefBrowseDialog)
    {
        if (XrefBrowseDialog->objectName().isEmpty())
            XrefBrowseDialog->setObjectName(QString::fromUtf8("XrefBrowseDialog"));
        XrefBrowseDialog->resize(328, 426);
        verticalLayout = new QVBoxLayout(XrefBrowseDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget = new QListWidget(XrefBrowseDialog);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier New"));
        listWidget->setFont(font);

        verticalLayout->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(XrefBrowseDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(XrefBrowseDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(XrefBrowseDialog);
        QObject::connect(pushButton, SIGNAL(clicked()), XrefBrowseDialog, SLOT(accept()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), XrefBrowseDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(XrefBrowseDialog);
    } // setupUi

    void retranslateUi(QDialog *XrefBrowseDialog)
    {
        XrefBrowseDialog->setWindowTitle(QApplication::translate("XrefBrowseDialog", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("XrefBrowseDialog", "&OK", nullptr));
        pushButton_2->setText(QApplication::translate("XrefBrowseDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XrefBrowseDialog: public Ui_XrefBrowseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XREFBROWSEDIALOG_H
