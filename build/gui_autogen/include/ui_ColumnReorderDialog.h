/********************************************************************************
** Form generated from reading UI file 'ColumnReorderDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLUMNREORDERDIALOG_H
#define UI_COLUMNREORDERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ColumnReorderDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout0;
    QLabel *label0;
    QListWidget *listDisplayed;
    QVBoxLayout *verticalLayout1;
    QPushButton *addButton;
    QPushButton *hideButton;
    QPushButton *upButton;
    QPushButton *downButton;
    QPushButton *addAllButton;
    QVBoxLayout *verticalLayout2;
    QLabel *label1;
    QListWidget *listAvailable;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *ColumnReorderDialog)
    {
        if (ColumnReorderDialog->objectName().isEmpty())
            ColumnReorderDialog->setObjectName(QString::fromUtf8("ColumnReorderDialog"));
        ColumnReorderDialog->resize(400, 352);
        verticalLayout = new QVBoxLayout(ColumnReorderDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout0 = new QVBoxLayout();
        verticalLayout0->setObjectName(QString::fromUtf8("verticalLayout0"));
        label0 = new QLabel(ColumnReorderDialog);
        label0->setObjectName(QString::fromUtf8("label0"));
        label0->setAlignment(Qt::AlignCenter);

        verticalLayout0->addWidget(label0);

        listDisplayed = new QListWidget(ColumnReorderDialog);
        listDisplayed->setObjectName(QString::fromUtf8("listDisplayed"));

        verticalLayout0->addWidget(listDisplayed);


        horizontalLayout->addLayout(verticalLayout0);

        verticalLayout1 = new QVBoxLayout();
        verticalLayout1->setObjectName(QString::fromUtf8("verticalLayout1"));
        addButton = new QPushButton(ColumnReorderDialog);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        verticalLayout1->addWidget(addButton);

        hideButton = new QPushButton(ColumnReorderDialog);
        hideButton->setObjectName(QString::fromUtf8("hideButton"));

        verticalLayout1->addWidget(hideButton);

        upButton = new QPushButton(ColumnReorderDialog);
        upButton->setObjectName(QString::fromUtf8("upButton"));

        verticalLayout1->addWidget(upButton);

        downButton = new QPushButton(ColumnReorderDialog);
        downButton->setObjectName(QString::fromUtf8("downButton"));

        verticalLayout1->addWidget(downButton);

        addAllButton = new QPushButton(ColumnReorderDialog);
        addAllButton->setObjectName(QString::fromUtf8("addAllButton"));

        verticalLayout1->addWidget(addAllButton);


        horizontalLayout->addLayout(verticalLayout1);

        verticalLayout2 = new QVBoxLayout();
        verticalLayout2->setObjectName(QString::fromUtf8("verticalLayout2"));
        label1 = new QLabel(ColumnReorderDialog);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setAlignment(Qt::AlignCenter);

        verticalLayout2->addWidget(label1);

        listAvailable = new QListWidget(ColumnReorderDialog);
        listAvailable->setObjectName(QString::fromUtf8("listAvailable"));
        listAvailable->setSelectionMode(QAbstractItemView::ExtendedSelection);

        verticalLayout2->addWidget(listAvailable);


        horizontalLayout->addLayout(verticalLayout2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        okButton = new QPushButton(ColumnReorderDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout_2->addWidget(okButton);

        cancelButton = new QPushButton(ColumnReorderDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout_2->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(ColumnReorderDialog);
        QObject::connect(cancelButton, SIGNAL(clicked()), ColumnReorderDialog, SLOT(reject()));

        okButton->setDefault(true);


        QMetaObject::connectSlotsByName(ColumnReorderDialog);
    } // setupUi

    void retranslateUi(QDialog *ColumnReorderDialog)
    {
        ColumnReorderDialog->setWindowTitle(QApplication::translate("ColumnReorderDialog", "Dialog", nullptr));
        label0->setText(QApplication::translate("ColumnReorderDialog", "Displayed", nullptr));
        addButton->setText(QApplication::translate("ColumnReorderDialog", "<- &Add", nullptr));
        hideButton->setText(QApplication::translate("ColumnReorderDialog", "&Hide ->", nullptr));
        upButton->setText(QApplication::translate("ColumnReorderDialog", "&Up", nullptr));
        downButton->setText(QApplication::translate("ColumnReorderDialog", "&Down", nullptr));
        addAllButton->setText(QApplication::translate("ColumnReorderDialog", "<< A&dd all", nullptr));
        label1->setText(QApplication::translate("ColumnReorderDialog", "Available", nullptr));
        okButton->setText(QApplication::translate("ColumnReorderDialog", "&Ok", nullptr));
        cancelButton->setText(QApplication::translate("ColumnReorderDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ColumnReorderDialog: public Ui_ColumnReorderDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLUMNREORDERDIALOG_H
