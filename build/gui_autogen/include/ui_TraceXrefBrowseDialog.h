/********************************************************************************
** Form generated from reading UI file 'TraceXrefBrowseDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACEXREFBROWSEDIALOG_H
#define UI_TRACEXREFBROWSEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TraceXrefBrowseDialog
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *TraceXrefBrowseDialog)
    {
        if (TraceXrefBrowseDialog->objectName().isEmpty())
            TraceXrefBrowseDialog->setObjectName(QString::fromUtf8("TraceXrefBrowseDialog"));
        TraceXrefBrowseDialog->resize(328, 426);
        verticalLayout = new QVBoxLayout(TraceXrefBrowseDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget = new QListWidget(TraceXrefBrowseDialog);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier New"));
        listWidget->setFont(font);

        verticalLayout->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(TraceXrefBrowseDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(TraceXrefBrowseDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(TraceXrefBrowseDialog);
        QObject::connect(pushButton, SIGNAL(clicked()), TraceXrefBrowseDialog, SLOT(accept()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), TraceXrefBrowseDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(TraceXrefBrowseDialog);
    } // setupUi

    void retranslateUi(QDialog *TraceXrefBrowseDialog)
    {
        TraceXrefBrowseDialog->setWindowTitle(QApplication::translate("TraceXrefBrowseDialog", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("TraceXrefBrowseDialog", "&OK", nullptr));
        pushButton_2->setText(QApplication::translate("TraceXrefBrowseDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TraceXrefBrowseDialog: public Ui_TraceXrefBrowseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACEXREFBROWSEDIALOG_H
