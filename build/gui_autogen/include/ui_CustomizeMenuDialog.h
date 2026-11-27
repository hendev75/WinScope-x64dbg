/********************************************************************************
** Form generated from reading UI file 'CustomizeMenuDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMIZEMENUDIALOG_H
#define UI_CUSTOMIZEMENUDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CustomizeMenuDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTreeWidget *treeWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnDisselectAll;
    QPushButton *btnOk;
    QPushButton *btnCancel;

    void setupUi(QDialog *CustomizeMenuDialog)
    {
        if (CustomizeMenuDialog->objectName().isEmpty())
            CustomizeMenuDialog->setObjectName(QString::fromUtf8("CustomizeMenuDialog"));
        CustomizeMenuDialog->resize(446, 431);
        verticalLayout = new QVBoxLayout(CustomizeMenuDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(CustomizeMenuDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        treeWidget = new QTreeWidget(CustomizeMenuDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setColumnCount(1);
        treeWidget->header()->setVisible(false);

        verticalLayout->addWidget(treeWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnDisselectAll = new QPushButton(CustomizeMenuDialog);
        btnDisselectAll->setObjectName(QString::fromUtf8("btnDisselectAll"));

        horizontalLayout->addWidget(btnDisselectAll);

        btnOk = new QPushButton(CustomizeMenuDialog);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));

        horizontalLayout->addWidget(btnOk);

        btnCancel = new QPushButton(CustomizeMenuDialog);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout->addWidget(btnCancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(CustomizeMenuDialog);
        QObject::connect(btnCancel, SIGNAL(clicked()), CustomizeMenuDialog, SLOT(reject()));

        btnOk->setDefault(true);


        QMetaObject::connectSlotsByName(CustomizeMenuDialog);
    } // setupUi

    void retranslateUi(QDialog *CustomizeMenuDialog)
    {
        CustomizeMenuDialog->setWindowTitle(QApplication::translate("CustomizeMenuDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("CustomizeMenuDialog", "Customize which menu item will be shown in the \"More commands\" submenu", nullptr));
        btnDisselectAll->setText(QApplication::translate("CustomizeMenuDialog", "Disselect All", nullptr));
        btnOk->setText(QApplication::translate("CustomizeMenuDialog", "&OK", nullptr));
        btnCancel->setText(QApplication::translate("CustomizeMenuDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomizeMenuDialog: public Ui_CustomizeMenuDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMIZEMENUDIALOG_H
