/********************************************************************************
** Form generated from reading UI file 'SystemBreakpointScriptDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEMBREAKPOINTSCRIPTDIALOG_H
#define UI_SYSTEMBREAKPOINTSCRIPTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SystemBreakpointScriptDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBoxGlobal;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelGlobal;
    QLineEdit *lineEditGlobal;
    QPushButton *pushButtonGlobal;
    QPushButton *openGlobal;
    QGroupBox *groupBoxDebuggee;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelDebuggee;
    QLineEdit *lineEditDebuggee;
    QPushButton *pushButtonDebuggee;
    QPushButton *openDebuggee;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SystemBreakpointScriptDialog)
    {
        if (SystemBreakpointScriptDialog->objectName().isEmpty())
            SystemBreakpointScriptDialog->setObjectName(QString::fromUtf8("SystemBreakpointScriptDialog"));
        SystemBreakpointScriptDialog->resize(865, 169);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("initscript");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8(":/Default/icons/initscript.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        SystemBreakpointScriptDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(SystemBreakpointScriptDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBoxGlobal = new QGroupBox(SystemBreakpointScriptDialog);
        groupBoxGlobal->setObjectName(QString::fromUtf8("groupBoxGlobal"));
        horizontalLayout_2 = new QHBoxLayout(groupBoxGlobal);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelGlobal = new QLabel(groupBoxGlobal);
        labelGlobal->setObjectName(QString::fromUtf8("labelGlobal"));

        horizontalLayout_2->addWidget(labelGlobal);

        lineEditGlobal = new QLineEdit(groupBoxGlobal);
        lineEditGlobal->setObjectName(QString::fromUtf8("lineEditGlobal"));

        horizontalLayout_2->addWidget(lineEditGlobal);

        pushButtonGlobal = new QPushButton(groupBoxGlobal);
        pushButtonGlobal->setObjectName(QString::fromUtf8("pushButtonGlobal"));

        horizontalLayout_2->addWidget(pushButtonGlobal);

        openGlobal = new QPushButton(groupBoxGlobal);
        openGlobal->setObjectName(QString::fromUtf8("openGlobal"));

        horizontalLayout_2->addWidget(openGlobal);


        verticalLayout->addWidget(groupBoxGlobal);

        groupBoxDebuggee = new QGroupBox(SystemBreakpointScriptDialog);
        groupBoxDebuggee->setObjectName(QString::fromUtf8("groupBoxDebuggee"));
        horizontalLayout_3 = new QHBoxLayout(groupBoxDebuggee);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labelDebuggee = new QLabel(groupBoxDebuggee);
        labelDebuggee->setObjectName(QString::fromUtf8("labelDebuggee"));

        horizontalLayout_3->addWidget(labelDebuggee);

        lineEditDebuggee = new QLineEdit(groupBoxDebuggee);
        lineEditDebuggee->setObjectName(QString::fromUtf8("lineEditDebuggee"));

        horizontalLayout_3->addWidget(lineEditDebuggee);

        pushButtonDebuggee = new QPushButton(groupBoxDebuggee);
        pushButtonDebuggee->setObjectName(QString::fromUtf8("pushButtonDebuggee"));

        horizontalLayout_3->addWidget(pushButtonDebuggee);

        openDebuggee = new QPushButton(groupBoxDebuggee);
        openDebuggee->setObjectName(QString::fromUtf8("openDebuggee"));

        horizontalLayout_3->addWidget(openDebuggee);


        verticalLayout->addWidget(groupBoxDebuggee);

        buttonBox = new QDialogButtonBox(SystemBreakpointScriptDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SystemBreakpointScriptDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SystemBreakpointScriptDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SystemBreakpointScriptDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SystemBreakpointScriptDialog);
    } // setupUi

    void retranslateUi(QDialog *SystemBreakpointScriptDialog)
    {
        SystemBreakpointScriptDialog->setWindowTitle(QApplication::translate("SystemBreakpointScriptDialog", "System breakpoint scripts", nullptr));
        groupBoxGlobal->setTitle(QApplication::translate("SystemBreakpointScriptDialog", "1. System breakpoint script for every process", nullptr));
        labelGlobal->setText(QApplication::translate("SystemBreakpointScriptDialog", "Path:", nullptr));
        pushButtonGlobal->setText(QApplication::translate("SystemBreakpointScriptDialog", "Browse", nullptr));
        openGlobal->setText(QApplication::translate("SystemBreakpointScriptDialog", "Open", nullptr));
        groupBoxDebuggee->setTitle(QApplication::translate("SystemBreakpointScriptDialog", "2. System breakpoint script for a specific process (debug a process to specify)", nullptr));
        labelDebuggee->setText(QApplication::translate("SystemBreakpointScriptDialog", "Path:", nullptr));
        pushButtonDebuggee->setText(QApplication::translate("SystemBreakpointScriptDialog", "Browse", nullptr));
        openDebuggee->setText(QApplication::translate("SystemBreakpointScriptDialog", "Open", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SystemBreakpointScriptDialog: public Ui_SystemBreakpointScriptDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEMBREAKPOINTSCRIPTDIALOG_H
