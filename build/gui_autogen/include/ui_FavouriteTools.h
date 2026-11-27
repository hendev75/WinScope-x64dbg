/********************************************************************************
** Form generated from reading UI file 'FavouriteTools.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FAVOURITETOOLS_H
#define UI_FAVOURITETOOLS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ShortcutEdit.h"

QT_BEGIN_NAMESPACE

class Ui_FavouriteTools
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabFavouriteTool;
    QHBoxLayout *horizontalLayout_3;
    QTableWidget *listTools;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btnAddFavouriteTool;
    QPushButton *btnEditFavouriteTool;
    QPushButton *btnRemoveFavouriteTool;
    QPushButton *btnDescriptionFavouriteTool;
    QPushButton *btnUpFavouriteTool;
    QPushButton *btnDownFavouriteTool;
    QWidget *tabFavouriteScript;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *listScript;
    QVBoxLayout *verticalLayout_3;
    QPushButton *btnAddFavouriteScript;
    QPushButton *btnEditFavouriteScript;
    QPushButton *btnRemoveFavouriteScript;
    QPushButton *btnDescriptionFavouriteScript;
    QPushButton *btnUpFavouriteScript;
    QPushButton *btnDownFavouriteScript;
    QWidget *tabFavouriteCommand;
    QHBoxLayout *horizontalLayout_4;
    QTableWidget *listCommand;
    QVBoxLayout *verticalLayout_4;
    QPushButton *btnAddFavouriteCommand;
    QPushButton *btnEditFavouriteCommand;
    QPushButton *btnRemoveFavouriteCommand;
    QPushButton *btnUpFavouriteCommand;
    QPushButton *btnDownFavouriteCommand;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_5;
    ShortcutEdit *shortcutEdit;
    QPushButton *btnClearShortcut;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOK;
    QPushButton *btnCancel;

    void setupUi(QDialog *FavouriteTools)
    {
        if (FavouriteTools->objectName().isEmpty())
            FavouriteTools->setObjectName(QString::fromUtf8("FavouriteTools"));
        FavouriteTools->resize(600, 400);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("star");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8(":/Default/icons/star.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        FavouriteTools->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(FavouriteTools);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(FavouriteTools);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabFavouriteTool = new QWidget();
        tabFavouriteTool->setObjectName(QString::fromUtf8("tabFavouriteTool"));
        horizontalLayout_3 = new QHBoxLayout(tabFavouriteTool);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        listTools = new QTableWidget(tabFavouriteTool);
        listTools->setObjectName(QString::fromUtf8("listTools"));

        horizontalLayout_3->addWidget(listTools);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        btnAddFavouriteTool = new QPushButton(tabFavouriteTool);
        btnAddFavouriteTool->setObjectName(QString::fromUtf8("btnAddFavouriteTool"));

        verticalLayout_2->addWidget(btnAddFavouriteTool);

        btnEditFavouriteTool = new QPushButton(tabFavouriteTool);
        btnEditFavouriteTool->setObjectName(QString::fromUtf8("btnEditFavouriteTool"));

        verticalLayout_2->addWidget(btnEditFavouriteTool);

        btnRemoveFavouriteTool = new QPushButton(tabFavouriteTool);
        btnRemoveFavouriteTool->setObjectName(QString::fromUtf8("btnRemoveFavouriteTool"));

        verticalLayout_2->addWidget(btnRemoveFavouriteTool);

        btnDescriptionFavouriteTool = new QPushButton(tabFavouriteTool);
        btnDescriptionFavouriteTool->setObjectName(QString::fromUtf8("btnDescriptionFavouriteTool"));

        verticalLayout_2->addWidget(btnDescriptionFavouriteTool);

        btnUpFavouriteTool = new QPushButton(tabFavouriteTool);
        btnUpFavouriteTool->setObjectName(QString::fromUtf8("btnUpFavouriteTool"));

        verticalLayout_2->addWidget(btnUpFavouriteTool);

        btnDownFavouriteTool = new QPushButton(tabFavouriteTool);
        btnDownFavouriteTool->setObjectName(QString::fromUtf8("btnDownFavouriteTool"));

        verticalLayout_2->addWidget(btnDownFavouriteTool);


        horizontalLayout_3->addLayout(verticalLayout_2);

        tabWidget->addTab(tabFavouriteTool, QString());
        tabFavouriteScript = new QWidget();
        tabFavouriteScript->setObjectName(QString::fromUtf8("tabFavouriteScript"));
        horizontalLayout_2 = new QHBoxLayout(tabFavouriteScript);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        listScript = new QTableWidget(tabFavouriteScript);
        listScript->setObjectName(QString::fromUtf8("listScript"));

        horizontalLayout_2->addWidget(listScript);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        btnAddFavouriteScript = new QPushButton(tabFavouriteScript);
        btnAddFavouriteScript->setObjectName(QString::fromUtf8("btnAddFavouriteScript"));

        verticalLayout_3->addWidget(btnAddFavouriteScript);

        btnEditFavouriteScript = new QPushButton(tabFavouriteScript);
        btnEditFavouriteScript->setObjectName(QString::fromUtf8("btnEditFavouriteScript"));

        verticalLayout_3->addWidget(btnEditFavouriteScript);

        btnRemoveFavouriteScript = new QPushButton(tabFavouriteScript);
        btnRemoveFavouriteScript->setObjectName(QString::fromUtf8("btnRemoveFavouriteScript"));

        verticalLayout_3->addWidget(btnRemoveFavouriteScript);

        btnDescriptionFavouriteScript = new QPushButton(tabFavouriteScript);
        btnDescriptionFavouriteScript->setObjectName(QString::fromUtf8("btnDescriptionFavouriteScript"));

        verticalLayout_3->addWidget(btnDescriptionFavouriteScript);

        btnUpFavouriteScript = new QPushButton(tabFavouriteScript);
        btnUpFavouriteScript->setObjectName(QString::fromUtf8("btnUpFavouriteScript"));

        verticalLayout_3->addWidget(btnUpFavouriteScript);

        btnDownFavouriteScript = new QPushButton(tabFavouriteScript);
        btnDownFavouriteScript->setObjectName(QString::fromUtf8("btnDownFavouriteScript"));

        verticalLayout_3->addWidget(btnDownFavouriteScript);


        horizontalLayout_2->addLayout(verticalLayout_3);

        tabWidget->addTab(tabFavouriteScript, QString());
        tabFavouriteCommand = new QWidget();
        tabFavouriteCommand->setObjectName(QString::fromUtf8("tabFavouriteCommand"));
        horizontalLayout_4 = new QHBoxLayout(tabFavouriteCommand);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        listCommand = new QTableWidget(tabFavouriteCommand);
        listCommand->setObjectName(QString::fromUtf8("listCommand"));

        horizontalLayout_4->addWidget(listCommand);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        btnAddFavouriteCommand = new QPushButton(tabFavouriteCommand);
        btnAddFavouriteCommand->setObjectName(QString::fromUtf8("btnAddFavouriteCommand"));

        verticalLayout_4->addWidget(btnAddFavouriteCommand);

        btnEditFavouriteCommand = new QPushButton(tabFavouriteCommand);
        btnEditFavouriteCommand->setObjectName(QString::fromUtf8("btnEditFavouriteCommand"));

        verticalLayout_4->addWidget(btnEditFavouriteCommand);

        btnRemoveFavouriteCommand = new QPushButton(tabFavouriteCommand);
        btnRemoveFavouriteCommand->setObjectName(QString::fromUtf8("btnRemoveFavouriteCommand"));

        verticalLayout_4->addWidget(btnRemoveFavouriteCommand);

        btnUpFavouriteCommand = new QPushButton(tabFavouriteCommand);
        btnUpFavouriteCommand->setObjectName(QString::fromUtf8("btnUpFavouriteCommand"));

        verticalLayout_4->addWidget(btnUpFavouriteCommand);

        btnDownFavouriteCommand = new QPushButton(tabFavouriteCommand);
        btnDownFavouriteCommand->setObjectName(QString::fromUtf8("btnDownFavouriteCommand"));

        verticalLayout_4->addWidget(btnDownFavouriteCommand);


        horizontalLayout_4->addLayout(verticalLayout_4);

        tabWidget->addTab(tabFavouriteCommand, QString());

        verticalLayout->addWidget(tabWidget);

        groupBox = new QGroupBox(FavouriteTools);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_5 = new QHBoxLayout(groupBox);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        shortcutEdit = new ShortcutEdit(groupBox);
        shortcutEdit->setObjectName(QString::fromUtf8("shortcutEdit"));

        horizontalLayout_5->addWidget(shortcutEdit);

        btnClearShortcut = new QPushButton(groupBox);
        btnClearShortcut->setObjectName(QString::fromUtf8("btnClearShortcut"));

        horizontalLayout_5->addWidget(btnClearShortcut);


        verticalLayout->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnOK = new QPushButton(FavouriteTools);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));

        horizontalLayout->addWidget(btnOK);

        btnCancel = new QPushButton(FavouriteTools);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout->addWidget(btnCancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(FavouriteTools);
        QObject::connect(btnCancel, SIGNAL(clicked()), FavouriteTools, SLOT(reject()));

        tabWidget->setCurrentIndex(0);
        btnOK->setDefault(true);


        QMetaObject::connectSlotsByName(FavouriteTools);
    } // setupUi

    void retranslateUi(QDialog *FavouriteTools)
    {
        FavouriteTools->setWindowTitle(QApplication::translate("FavouriteTools", "Favourites", nullptr));
        btnAddFavouriteTool->setText(QApplication::translate("FavouriteTools", "&Add...", nullptr));
        btnEditFavouriteTool->setText(QApplication::translate("FavouriteTools", "&Edit", nullptr));
        btnRemoveFavouriteTool->setText(QApplication::translate("FavouriteTools", "&Remove", nullptr));
        btnDescriptionFavouriteTool->setText(QApplication::translate("FavouriteTools", "De&scription...", nullptr));
        btnUpFavouriteTool->setText(QApplication::translate("FavouriteTools", "&Up", nullptr));
        btnDownFavouriteTool->setText(QApplication::translate("FavouriteTools", "&Down", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabFavouriteTool), QApplication::translate("FavouriteTools", "Tools", nullptr));
        btnAddFavouriteScript->setText(QApplication::translate("FavouriteTools", "&Add...", nullptr));
        btnEditFavouriteScript->setText(QApplication::translate("FavouriteTools", "&Edit", nullptr));
        btnRemoveFavouriteScript->setText(QApplication::translate("FavouriteTools", "&Remove", nullptr));
        btnDescriptionFavouriteScript->setText(QApplication::translate("FavouriteTools", "De&scription...", nullptr));
        btnUpFavouriteScript->setText(QApplication::translate("FavouriteTools", "&Up", nullptr));
        btnDownFavouriteScript->setText(QApplication::translate("FavouriteTools", "&Down", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabFavouriteScript), QApplication::translate("FavouriteTools", "Script", nullptr));
        btnAddFavouriteCommand->setText(QApplication::translate("FavouriteTools", "&Add...", nullptr));
        btnEditFavouriteCommand->setText(QApplication::translate("FavouriteTools", "&Edit", nullptr));
        btnRemoveFavouriteCommand->setText(QApplication::translate("FavouriteTools", "&Remove", nullptr));
        btnUpFavouriteCommand->setText(QApplication::translate("FavouriteTools", "&Up", nullptr));
        btnDownFavouriteCommand->setText(QApplication::translate("FavouriteTools", "&Down", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabFavouriteCommand), QApplication::translate("FavouriteTools", "Command", nullptr));
        groupBox->setTitle(QApplication::translate("FavouriteTools", "Shortcut", nullptr));
        btnClearShortcut->setText(QApplication::translate("FavouriteTools", "Clear", nullptr));
        btnOK->setText(QApplication::translate("FavouriteTools", "&OK", nullptr));
        btnCancel->setText(QApplication::translate("FavouriteTools", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FavouriteTools: public Ui_FavouriteTools {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FAVOURITETOOLS_H
