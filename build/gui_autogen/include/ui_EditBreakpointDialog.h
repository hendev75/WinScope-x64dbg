/********************************************************************************
** Form generated from reading UI file 'EditBreakpointDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITBREAKPOINTDIALOG_H
#define UI_EDITBREAKPOINTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditBreakpointDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *labelLogText;
    QLabel *labelBreakCondition;
    QLineEdit *editBreakCondition;
    QLineEdit *editLogText;
    QLineEdit *editName;
    QLineEdit *editLogCondition;
    QLabel *labelLogCondition;
    QLabel *labelName;
    QLabel *labelCommandText;
    QLineEdit *editCommandText;
    QSpinBox *spinHitCount;
    QLabel *labelHitCount;
    QLabel *labelCommandCondition;
    QLineEdit *editCommandCondition;
    QHBoxLayout *layoutSaveCancel;
    QPushButton *buttonLogFile;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBoxSingleshoot;
    QCheckBox *checkBoxSilent;
    QCheckBox *checkBoxFastResume;
    QPushButton *buttonSave;
    QPushButton *buttonCancel;

    void setupUi(QDialog *EditBreakpointDialog)
    {
        if (EditBreakpointDialog->objectName().isEmpty())
            EditBreakpointDialog->setObjectName(QString::fromUtf8("EditBreakpointDialog"));
        EditBreakpointDialog->resize(506, 221);
        verticalLayout = new QVBoxLayout(EditBreakpointDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setContentsMargins(0, -1, -1, 0);
        labelLogText = new QLabel(EditBreakpointDialog);
        labelLogText->setObjectName(QString::fromUtf8("labelLogText"));

        gridLayout->addWidget(labelLogText, 1, 0, 1, 1);

        labelBreakCondition = new QLabel(EditBreakpointDialog);
        labelBreakCondition->setObjectName(QString::fromUtf8("labelBreakCondition"));
        labelBreakCondition->setOpenExternalLinks(true);

        gridLayout->addWidget(labelBreakCondition, 0, 0, 1, 1);

        editBreakCondition = new QLineEdit(EditBreakpointDialog);
        editBreakCondition->setObjectName(QString::fromUtf8("editBreakCondition"));

        gridLayout->addWidget(editBreakCondition, 0, 1, 1, 1);

        editLogText = new QLineEdit(EditBreakpointDialog);
        editLogText->setObjectName(QString::fromUtf8("editLogText"));

        gridLayout->addWidget(editLogText, 1, 1, 1, 1);

        editName = new QLineEdit(EditBreakpointDialog);
        editName->setObjectName(QString::fromUtf8("editName"));

        gridLayout->addWidget(editName, 5, 1, 1, 1);

        editLogCondition = new QLineEdit(EditBreakpointDialog);
        editLogCondition->setObjectName(QString::fromUtf8("editLogCondition"));

        gridLayout->addWidget(editLogCondition, 2, 1, 1, 1);

        labelLogCondition = new QLabel(EditBreakpointDialog);
        labelLogCondition->setObjectName(QString::fromUtf8("labelLogCondition"));

        gridLayout->addWidget(labelLogCondition, 2, 0, 1, 1);

        labelName = new QLabel(EditBreakpointDialog);
        labelName->setObjectName(QString::fromUtf8("labelName"));

        gridLayout->addWidget(labelName, 5, 0, 1, 1);

        labelCommandText = new QLabel(EditBreakpointDialog);
        labelCommandText->setObjectName(QString::fromUtf8("labelCommandText"));

        gridLayout->addWidget(labelCommandText, 3, 0, 1, 1);

        editCommandText = new QLineEdit(EditBreakpointDialog);
        editCommandText->setObjectName(QString::fromUtf8("editCommandText"));

        gridLayout->addWidget(editCommandText, 3, 1, 1, 1);

        spinHitCount = new QSpinBox(EditBreakpointDialog);
        spinHitCount->setObjectName(QString::fromUtf8("spinHitCount"));
        spinHitCount->setMinimum(0);
        spinHitCount->setMaximum(2000000000);

        gridLayout->addWidget(spinHitCount, 6, 1, 1, 1);

        labelHitCount = new QLabel(EditBreakpointDialog);
        labelHitCount->setObjectName(QString::fromUtf8("labelHitCount"));

        gridLayout->addWidget(labelHitCount, 6, 0, 1, 1);

        labelCommandCondition = new QLabel(EditBreakpointDialog);
        labelCommandCondition->setObjectName(QString::fromUtf8("labelCommandCondition"));

        gridLayout->addWidget(labelCommandCondition, 4, 0, 1, 1);

        editCommandCondition = new QLineEdit(EditBreakpointDialog);
        editCommandCondition->setObjectName(QString::fromUtf8("editCommandCondition"));

        gridLayout->addWidget(editCommandCondition, 4, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        layoutSaveCancel = new QHBoxLayout();
        layoutSaveCancel->setObjectName(QString::fromUtf8("layoutSaveCancel"));
        buttonLogFile = new QPushButton(EditBreakpointDialog);
        buttonLogFile->setObjectName(QString::fromUtf8("buttonLogFile"));

        layoutSaveCancel->addWidget(buttonLogFile);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layoutSaveCancel->addItem(horizontalSpacer);

        checkBoxSingleshoot = new QCheckBox(EditBreakpointDialog);
        checkBoxSingleshoot->setObjectName(QString::fromUtf8("checkBoxSingleshoot"));

        layoutSaveCancel->addWidget(checkBoxSingleshoot);

        checkBoxSilent = new QCheckBox(EditBreakpointDialog);
        checkBoxSilent->setObjectName(QString::fromUtf8("checkBoxSilent"));

        layoutSaveCancel->addWidget(checkBoxSilent);

        checkBoxFastResume = new QCheckBox(EditBreakpointDialog);
        checkBoxFastResume->setObjectName(QString::fromUtf8("checkBoxFastResume"));

        layoutSaveCancel->addWidget(checkBoxFastResume);

        buttonSave = new QPushButton(EditBreakpointDialog);
        buttonSave->setObjectName(QString::fromUtf8("buttonSave"));

        layoutSaveCancel->addWidget(buttonSave);

        buttonCancel = new QPushButton(EditBreakpointDialog);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));

        layoutSaveCancel->addWidget(buttonCancel);


        verticalLayout->addLayout(layoutSaveCancel);

#ifndef QT_NO_SHORTCUT
        labelLogText->setBuddy(editLogText);
        labelBreakCondition->setBuddy(editBreakCondition);
        labelLogCondition->setBuddy(editLogCondition);
        labelName->setBuddy(editName);
        labelCommandText->setBuddy(editCommandText);
        labelHitCount->setBuddy(spinHitCount);
        labelCommandCondition->setBuddy(editCommandCondition);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(editBreakCondition, editLogText);
        QWidget::setTabOrder(editLogText, editLogCondition);
        QWidget::setTabOrder(editLogCondition, editCommandText);
        QWidget::setTabOrder(editCommandText, editCommandCondition);
        QWidget::setTabOrder(editCommandCondition, editName);
        QWidget::setTabOrder(editName, spinHitCount);
        QWidget::setTabOrder(spinHitCount, checkBoxSingleshoot);
        QWidget::setTabOrder(checkBoxSingleshoot, checkBoxSilent);
        QWidget::setTabOrder(checkBoxSilent, checkBoxFastResume);
        QWidget::setTabOrder(checkBoxFastResume, buttonSave);
        QWidget::setTabOrder(buttonSave, buttonCancel);

        retranslateUi(EditBreakpointDialog);
        QObject::connect(buttonCancel, SIGNAL(clicked()), EditBreakpointDialog, SLOT(reject()));
        QObject::connect(buttonSave, SIGNAL(clicked()), EditBreakpointDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(EditBreakpointDialog);
    } // setupUi

    void retranslateUi(QDialog *EditBreakpointDialog)
    {
        EditBreakpointDialog->setWindowTitle(QApplication::translate("EditBreakpointDialog", "Edit breakpoint", nullptr));
#ifndef QT_NO_TOOLTIP
        labelLogText->setToolTip(QApplication::translate("EditBreakpointDialog", "<html><head/><body><p>This text will be logged whenever the log condition is true.</p><p>String formatting can be used to print variables.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        labelLogText->setText(QApplication::translate("EditBreakpointDialog", "&Log Text:", nullptr));
#ifndef QT_NO_TOOLTIP
        labelBreakCondition->setToolTip(QApplication::translate("EditBreakpointDialog", "<html><head/><body><p>If this expression evaluates to 1, the debugger will pause.</p><p>Set to <span style=\" text-decoration: underline;\">0</span> for a breakpoint that never breaks, but can still do logging and execute commands.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        labelBreakCondition->setText(QApplication::translate("EditBreakpointDialog", "&Break Condition:", nullptr));
        editBreakCondition->setPlaceholderText(QApplication::translate("EditBreakpointDialog", "Example: arg(0) == 123 (numbers are hex by default)", nullptr));
#ifndef QT_NO_TOOLTIP
        labelLogCondition->setToolTip(QApplication::translate("EditBreakpointDialog", "<html><head/><body><p>String logging is enabled whenever this expression is evaluated to 1.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        labelLogCondition->setText(QApplication::translate("EditBreakpointDialog", "Lo&g Condition:", nullptr));
        labelName->setText(QApplication::translate("EditBreakpointDialog", "&Name:", nullptr));
#ifndef QT_NO_TOOLTIP
        labelCommandText->setToolTip(QApplication::translate("EditBreakpointDialog", "<html><head/><body><p>This command will be executed whenever command condition is true.</p><p>Currently certain commands, for example, stepping from breakpoint command are not supported.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        labelCommandText->setText(QApplication::translate("EditBreakpointDialog", "&Command Text:", nullptr));
#ifndef QT_NO_TOOLTIP
        labelHitCount->setToolTip(QApplication::translate("EditBreakpointDialog", "<html><head/><body><p>The number of times the breakpoint is hit.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        labelHitCount->setText(QApplication::translate("EditBreakpointDialog", "&Hit Count:", nullptr));
#ifndef QT_NO_TOOLTIP
        labelCommandCondition->setToolTip(QApplication::translate("EditBreakpointDialog", "If this expression evaluates to 1, the command specified above is executed.", nullptr));
#endif // QT_NO_TOOLTIP
        labelCommandCondition->setText(QApplication::translate("EditBreakpointDialog", "C&ommand Condition:", nullptr));
        buttonLogFile->setText(QApplication::translate("EditBreakpointDialog", "Log F&ile...", nullptr));
#ifndef QT_NO_TOOLTIP
        checkBoxSingleshoot->setToolTip(QApplication::translate("EditBreakpointDialog", "<html><head/><body><p>Remove the breakpoint once it pauses the debuggee.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        checkBoxSingleshoot->setText(QApplication::translate("EditBreakpointDialog", "Singlesho&ot", nullptr));
#ifndef QT_NO_TOOLTIP
        checkBoxSilent->setToolTip(QApplication::translate("EditBreakpointDialog", "<html><head/><body><p>Don't print the default breakpoint log.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        checkBoxSilent->setText(QApplication::translate("EditBreakpointDialog", "&Silent", nullptr));
#ifndef QT_NO_TOOLTIP
        checkBoxFastResume->setToolTip(QApplication::translate("EditBreakpointDialog", "<html><head/><body><p>Don't enable extended conditional breakpoint features and plugins.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        checkBoxFastResume->setText(QApplication::translate("EditBreakpointDialog", "&Fast Resume", nullptr));
        buttonSave->setText(QApplication::translate("EditBreakpointDialog", "&Save", nullptr));
        buttonCancel->setText(QApplication::translate("EditBreakpointDialog", "C&ancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditBreakpointDialog: public Ui_EditBreakpointDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITBREAKPOINTDIALOG_H
