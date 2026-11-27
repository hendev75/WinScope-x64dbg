/********************************************************************************
** Form generated from reading UI file 'ShortcutsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHORTCUTSDIALOG_H
#define UI_SHORTCUTSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include "ShortcutEdit.h"

QT_BEGIN_NAMESPACE

class Ui_ShortcutsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *filterEdit;
    QTableWidget *tblShortcuts;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    ShortcutEdit *shortcutEdit;
    QPushButton *btnClearShortcut;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnSave;
    QPushButton *btnCancel;

    void setupUi(QDialog *ShortcutsDialog)
    {
        if (ShortcutsDialog->objectName().isEmpty())
            ShortcutsDialog->setObjectName(QString::fromUtf8("ShortcutsDialog"));
        ShortcutsDialog->resize(622, 401);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("shortcut");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8(":/Default/icons/shortcut.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        ShortcutsDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(ShortcutsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        filterEdit = new QLineEdit(ShortcutsDialog);
        filterEdit->setObjectName(QString::fromUtf8("filterEdit"));

        verticalLayout->addWidget(filterEdit);

        tblShortcuts = new QTableWidget(ShortcutsDialog);
        tblShortcuts->setObjectName(QString::fromUtf8("tblShortcuts"));

        verticalLayout->addWidget(tblShortcuts);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        groupBox = new QGroupBox(ShortcutsDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        shortcutEdit = new ShortcutEdit(groupBox);
        shortcutEdit->setObjectName(QString::fromUtf8("shortcutEdit"));

        horizontalLayout->addWidget(shortcutEdit);

        btnClearShortcut = new QPushButton(groupBox);
        btnClearShortcut->setObjectName(QString::fromUtf8("btnClearShortcut"));

        horizontalLayout->addWidget(btnClearShortcut);


        horizontalLayout_4->addWidget(groupBox);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnSave = new QPushButton(ShortcutsDialog);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));

        horizontalLayout_2->addWidget(btnSave);

        btnCancel = new QPushButton(ShortcutsDialog);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout_2->addWidget(btnCancel);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(ShortcutsDialog);
        QObject::connect(btnCancel, SIGNAL(clicked()), ShortcutsDialog, SLOT(reject()));
        QObject::connect(btnSave, SIGNAL(clicked()), ShortcutsDialog, SLOT(accept()));

        btnSave->setDefault(true);


        QMetaObject::connectSlotsByName(ShortcutsDialog);
    } // setupUi

    void retranslateUi(QDialog *ShortcutsDialog)
    {
        ShortcutsDialog->setWindowTitle(QApplication::translate("ShortcutsDialog", "Hotkeys", nullptr));
        filterEdit->setPlaceholderText(QApplication::translate("ShortcutsDialog", "Action filter", nullptr));
        groupBox->setTitle(QApplication::translate("ShortcutsDialog", "Hotkey", nullptr));
        btnClearShortcut->setText(QApplication::translate("ShortcutsDialog", "Clear", nullptr));
        btnSave->setText(QApplication::translate("ShortcutsDialog", "Save", nullptr));
        btnCancel->setText(QApplication::translate("ShortcutsDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShortcutsDialog: public Ui_ShortcutsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHORTCUTSDIALOG_H
