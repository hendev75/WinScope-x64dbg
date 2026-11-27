/********************************************************************************
** Form generated from reading UI file 'SimpleTraceDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMPLETRACEDIALOG_H
#define UI_SIMPLETRACEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include "HistoryLineEdit.h"

QT_BEGIN_NAMESPACE

class Ui_SimpleTraceDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *lblMaxTraceCount;
    QLabel *lblHint;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *chkRecordTrace;
    QPushButton *btnLogFile;
    QPushButton *btnOk;
    QPushButton *btnCancel;
    HistoryLineEdit *editBreakCondition;
    QLabel *lblLogCondition;
    HistoryLineEdit *editCommandText;
    HistoryLineEdit *editLogText;
    QLabel *label;
    QLabel *lblLogText;
    QLabel *lblCommandCondition;
    HistoryLineEdit *editCommandCondition;
    QSpinBox *spinMaxTraceCount;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioFilterNone;
    QRadioButton *radioFilterUser;
    QRadioButton *radioFilterSystem;
    QSpacerItem *horizontalSpacer_2;
    QLabel *lblBreakCondition;
    QLabel *lblCommandText;
    HistoryLineEdit *editLogCondition;

    void setupUi(QDialog *SimpleTraceDialog)
    {
        if (SimpleTraceDialog->objectName().isEmpty())
            SimpleTraceDialog->setObjectName(QString::fromUtf8("SimpleTraceDialog"));
        SimpleTraceDialog->resize(502, 262);
        gridLayout = new QGridLayout(SimpleTraceDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lblMaxTraceCount = new QLabel(SimpleTraceDialog);
        lblMaxTraceCount->setObjectName(QString::fromUtf8("lblMaxTraceCount"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblMaxTraceCount->sizePolicy().hasHeightForWidth());
        lblMaxTraceCount->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lblMaxTraceCount, 5, 0, 1, 1);

        lblHint = new QLabel(SimpleTraceDialog);
        lblHint->setObjectName(QString::fromUtf8("lblHint"));
        lblHint->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(lblHint, 8, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        chkRecordTrace = new QCheckBox(SimpleTraceDialog);
        chkRecordTrace->setObjectName(QString::fromUtf8("chkRecordTrace"));

        horizontalLayout->addWidget(chkRecordTrace);

        btnLogFile = new QPushButton(SimpleTraceDialog);
        btnLogFile->setObjectName(QString::fromUtf8("btnLogFile"));

        horizontalLayout->addWidget(btnLogFile);

        btnOk = new QPushButton(SimpleTraceDialog);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnOk->sizePolicy().hasHeightForWidth());
        btnOk->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(btnOk);

        btnCancel = new QPushButton(SimpleTraceDialog);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        sizePolicy1.setHeightForWidth(btnCancel->sizePolicy().hasHeightForWidth());
        btnCancel->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(btnCancel);


        gridLayout->addLayout(horizontalLayout, 7, 1, 1, 1);

        editBreakCondition = new HistoryLineEdit(SimpleTraceDialog);
        editBreakCondition->setObjectName(QString::fromUtf8("editBreakCondition"));

        gridLayout->addWidget(editBreakCondition, 0, 1, 1, 1);

        lblLogCondition = new QLabel(SimpleTraceDialog);
        lblLogCondition->setObjectName(QString::fromUtf8("lblLogCondition"));

        gridLayout->addWidget(lblLogCondition, 2, 0, 1, 1);

        editCommandText = new HistoryLineEdit(SimpleTraceDialog);
        editCommandText->setObjectName(QString::fromUtf8("editCommandText"));

        gridLayout->addWidget(editCommandText, 3, 1, 1, 1);

        editLogText = new HistoryLineEdit(SimpleTraceDialog);
        editLogText->setObjectName(QString::fromUtf8("editLogText"));

        gridLayout->addWidget(editLogText, 1, 1, 1, 1);

        label = new QLabel(SimpleTraceDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 6, 0, 1, 1);

        lblLogText = new QLabel(SimpleTraceDialog);
        lblLogText->setObjectName(QString::fromUtf8("lblLogText"));

        gridLayout->addWidget(lblLogText, 1, 0, 1, 1);

        lblCommandCondition = new QLabel(SimpleTraceDialog);
        lblCommandCondition->setObjectName(QString::fromUtf8("lblCommandCondition"));

        gridLayout->addWidget(lblCommandCondition, 4, 0, 1, 1);

        editCommandCondition = new HistoryLineEdit(SimpleTraceDialog);
        editCommandCondition->setObjectName(QString::fromUtf8("editCommandCondition"));

        gridLayout->addWidget(editCommandCondition, 4, 1, 1, 1);

        spinMaxTraceCount = new QSpinBox(SimpleTraceDialog);
        spinMaxTraceCount->setObjectName(QString::fromUtf8("spinMaxTraceCount"));
        spinMaxTraceCount->setMinimum(1);
        spinMaxTraceCount->setMaximum(2147483647);

        gridLayout->addWidget(spinMaxTraceCount, 5, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        radioFilterNone = new QRadioButton(SimpleTraceDialog);
        radioFilterNone->setObjectName(QString::fromUtf8("radioFilterNone"));
        radioFilterNone->setChecked(true);

        horizontalLayout_2->addWidget(radioFilterNone);

        radioFilterUser = new QRadioButton(SimpleTraceDialog);
        radioFilterUser->setObjectName(QString::fromUtf8("radioFilterUser"));

        horizontalLayout_2->addWidget(radioFilterUser);

        radioFilterSystem = new QRadioButton(SimpleTraceDialog);
        radioFilterSystem->setObjectName(QString::fromUtf8("radioFilterSystem"));

        horizontalLayout_2->addWidget(radioFilterSystem);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_2, 6, 1, 1, 1);

        lblBreakCondition = new QLabel(SimpleTraceDialog);
        lblBreakCondition->setObjectName(QString::fromUtf8("lblBreakCondition"));
        lblBreakCondition->setOpenExternalLinks(true);

        gridLayout->addWidget(lblBreakCondition, 0, 0, 1, 1);

        lblCommandText = new QLabel(SimpleTraceDialog);
        lblCommandText->setObjectName(QString::fromUtf8("lblCommandText"));

        gridLayout->addWidget(lblCommandText, 3, 0, 1, 1);

        editLogCondition = new HistoryLineEdit(SimpleTraceDialog);
        editLogCondition->setObjectName(QString::fromUtf8("editLogCondition"));

        gridLayout->addWidget(editLogCondition, 2, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        lblMaxTraceCount->setBuddy(spinMaxTraceCount);
        lblLogCondition->setBuddy(editLogCondition);
        lblLogText->setBuddy(editLogText);
        lblCommandCondition->setBuddy(editCommandCondition);
        lblBreakCondition->setBuddy(editBreakCondition);
        lblCommandText->setBuddy(editCommandText);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(editBreakCondition, editLogText);
        QWidget::setTabOrder(editLogText, editLogCondition);
        QWidget::setTabOrder(editLogCondition, editCommandText);
        QWidget::setTabOrder(editCommandText, editCommandCondition);
        QWidget::setTabOrder(editCommandCondition, spinMaxTraceCount);
        QWidget::setTabOrder(spinMaxTraceCount, radioFilterNone);
        QWidget::setTabOrder(radioFilterNone, radioFilterUser);
        QWidget::setTabOrder(radioFilterUser, radioFilterSystem);
        QWidget::setTabOrder(radioFilterSystem, chkRecordTrace);
        QWidget::setTabOrder(chkRecordTrace, btnLogFile);
        QWidget::setTabOrder(btnLogFile, btnOk);
        QWidget::setTabOrder(btnOk, btnCancel);

        retranslateUi(SimpleTraceDialog);
        QObject::connect(btnCancel, SIGNAL(clicked()), SimpleTraceDialog, SLOT(reject()));

        btnOk->setDefault(true);


        QMetaObject::connectSlotsByName(SimpleTraceDialog);
    } // setupUi

    void retranslateUi(QDialog *SimpleTraceDialog)
    {
        SimpleTraceDialog->setWindowTitle(QString());
        lblMaxTraceCount->setText(QApplication::translate("SimpleTraceDialog", "&Maximum trace count:", nullptr));
        lblHint->setText(QApplication::translate("SimpleTraceDialog", "Hint: History is available in every text field with the Up/Down arrows!", nullptr));
        chkRecordTrace->setText(QApplication::translate("SimpleTraceDialog", "&Record trace", nullptr));
        btnLogFile->setText(QApplication::translate("SimpleTraceDialog", "Log &File...", nullptr));
        btnOk->setText(QApplication::translate("SimpleTraceDialog", "&OK", nullptr));
        btnCancel->setText(QApplication::translate("SimpleTraceDialog", "C&ancel", nullptr));
        lblLogCondition->setText(QApplication::translate("SimpleTraceDialog", "Lo&g Condition:", nullptr));
        label->setText(QApplication::translate("SimpleTraceDialog", "Module Filter:", nullptr));
        lblLogText->setText(QApplication::translate("SimpleTraceDialog", "&Log Text:", nullptr));
        lblCommandCondition->setText(QApplication::translate("SimpleTraceDialog", "C&ommand Condition:", nullptr));
#ifndef QT_NO_TOOLTIP
        radioFilterNone->setToolTip(QApplication::translate("SimpleTraceDialog", "Trace all modules (no filter).", nullptr));
#endif // QT_NO_TOOLTIP
        radioFilterNone->setText(QApplication::translate("SimpleTraceDialog", "&All Modules", nullptr));
#ifndef QT_NO_TOOLTIP
        radioFilterUser->setToolTip(QApplication::translate("SimpleTraceDialog", "Conditions, logging, and recording only apply when execution is in a User module. System code is stepped through silently.", nullptr));
#endif // QT_NO_TOOLTIP
        radioFilterUser->setText(QApplication::translate("SimpleTraceDialog", "&User Only", nullptr));
#ifndef QT_NO_TOOLTIP
        radioFilterSystem->setToolTip(QApplication::translate("SimpleTraceDialog", "Conditions, logging, and recording only apply when execution is in a System module. User code is stepped through silently.", nullptr));
#endif // QT_NO_TOOLTIP
        radioFilterSystem->setText(QApplication::translate("SimpleTraceDialog", "&System Only", nullptr));
        lblBreakCondition->setText(QApplication::translate("SimpleTraceDialog", "&Break Condition:", nullptr));
        lblCommandText->setText(QApplication::translate("SimpleTraceDialog", "&Command Text:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SimpleTraceDialog: public Ui_SimpleTraceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMPLETRACEDIALOG_H
