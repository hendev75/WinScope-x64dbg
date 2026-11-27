/********************************************************************************
** Form generated from reading UI file 'PatchDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATCHDIALOG_H
#define UI_PATCHDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PatchDialog
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *layoutModules;
    QGroupBox *groupModules;
    QVBoxLayout *verticalLayout_3;
    QListWidget *listModules;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnImport;
    QPushButton *btnExport;
    QWidget *layoutWidget_1;
    QVBoxLayout *layoutPatches;
    QGroupBox *groupPatches;
    QVBoxLayout *verticalLayout_4;
    QListWidget *listPatches;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnSelectAll;
    QPushButton *btnDeselectAll;
    QPushButton *btnRestoreSelected;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnPickGroups;
    QPushButton *btnPatchFile;

    void setupUi(QDialog *PatchDialog)
    {
        if (PatchDialog->objectName().isEmpty())
            PatchDialog->setObjectName(QString::fromUtf8("PatchDialog"));
        PatchDialog->resize(511, 451);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("patch");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8(":/Default/icons/patch.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        PatchDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(PatchDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        splitter = new QSplitter(PatchDialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(1);
        splitter->setChildrenCollapsible(false);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutModules = new QVBoxLayout(layoutWidget);
        layoutModules->setObjectName(QString::fromUtf8("layoutModules"));
        layoutModules->setContentsMargins(0, 0, 0, 0);
        groupModules = new QGroupBox(layoutWidget);
        groupModules->setObjectName(QString::fromUtf8("groupModules"));
        verticalLayout_3 = new QVBoxLayout(groupModules);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        listModules = new QListWidget(groupModules);
        listModules->setObjectName(QString::fromUtf8("listModules"));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier New"));
        listModules->setFont(font);

        verticalLayout_3->addWidget(listModules);


        layoutModules->addWidget(groupModules);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btnImport = new QPushButton(layoutWidget);
        btnImport->setObjectName(QString::fromUtf8("btnImport"));

        horizontalLayout_3->addWidget(btnImport);

        btnExport = new QPushButton(layoutWidget);
        btnExport->setObjectName(QString::fromUtf8("btnExport"));

        horizontalLayout_3->addWidget(btnExport);


        layoutModules->addLayout(horizontalLayout_3);

        splitter->addWidget(layoutWidget);
        layoutWidget_1 = new QWidget(splitter);
        layoutWidget_1->setObjectName(QString::fromUtf8("layoutWidget_1"));
        layoutPatches = new QVBoxLayout(layoutWidget_1);
        layoutPatches->setObjectName(QString::fromUtf8("layoutPatches"));
        layoutPatches->setContentsMargins(0, 0, 0, 0);
        groupPatches = new QGroupBox(layoutWidget_1);
        groupPatches->setObjectName(QString::fromUtf8("groupPatches"));
        verticalLayout_4 = new QVBoxLayout(groupPatches);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        listPatches = new QListWidget(groupPatches);
        listPatches->setObjectName(QString::fromUtf8("listPatches"));
        listPatches->setFont(font);

        verticalLayout_4->addWidget(listPatches);


        layoutPatches->addWidget(groupPatches);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnSelectAll = new QPushButton(layoutWidget_1);
        btnSelectAll->setObjectName(QString::fromUtf8("btnSelectAll"));

        horizontalLayout->addWidget(btnSelectAll);

        btnDeselectAll = new QPushButton(layoutWidget_1);
        btnDeselectAll->setObjectName(QString::fromUtf8("btnDeselectAll"));

        horizontalLayout->addWidget(btnDeselectAll);

        btnRestoreSelected = new QPushButton(layoutWidget_1);
        btnRestoreSelected->setObjectName(QString::fromUtf8("btnRestoreSelected"));

        horizontalLayout->addWidget(btnRestoreSelected);


        layoutPatches->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btnPickGroups = new QPushButton(layoutWidget_1);
        btnPickGroups->setObjectName(QString::fromUtf8("btnPickGroups"));
        btnPickGroups->setEnabled(true);

        horizontalLayout_2->addWidget(btnPickGroups);

        btnPatchFile = new QPushButton(layoutWidget_1);
        btnPatchFile->setObjectName(QString::fromUtf8("btnPatchFile"));
        btnPatchFile->setEnabled(true);

        horizontalLayout_2->addWidget(btnPatchFile);


        layoutPatches->addLayout(horizontalLayout_2);

        splitter->addWidget(layoutWidget_1);

        verticalLayout->addWidget(splitter);

        QWidget::setTabOrder(listModules, btnImport);
        QWidget::setTabOrder(btnImport, btnExport);

        retranslateUi(PatchDialog);

        QMetaObject::connectSlotsByName(PatchDialog);
    } // setupUi

    void retranslateUi(QDialog *PatchDialog)
    {
        PatchDialog->setWindowTitle(QApplication::translate("PatchDialog", "Patches", nullptr));
        groupModules->setTitle(QApplication::translate("PatchDialog", "&Modules", nullptr));
        btnImport->setText(QApplication::translate("PatchDialog", "&Import", nullptr));
        btnExport->setText(QApplication::translate("PatchDialog", "&Export", nullptr));
        groupPatches->setTitle(QApplication::translate("PatchDialog", "P&atches", nullptr));
        btnSelectAll->setText(QApplication::translate("PatchDialog", "&Select All", nullptr));
        btnDeselectAll->setText(QApplication::translate("PatchDialog", "&Deselect All", nullptr));
        btnRestoreSelected->setText(QApplication::translate("PatchDialog", "&Restore Selected", nullptr));
        btnPickGroups->setText(QApplication::translate("PatchDialog", "Pick &Groups", nullptr));
        btnPatchFile->setText(QApplication::translate("PatchDialog", "&Patch File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PatchDialog: public Ui_PatchDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATCHDIALOG_H
