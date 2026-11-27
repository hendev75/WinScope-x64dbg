/********************************************************************************
** Form generated from reading UI file 'AssembleDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASSEMBLEDIALOG_H
#define UI_ASSEMBLEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AssembleDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBoxKeepSize;
    QCheckBox *checkBoxFillWithNops;
    QRadioButton *radioXEDParse;
    QRadioButton *radioAsmjit;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonOk;
    QPushButton *pushButtonCancel;
    QLabel *labelKeepSize;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *AssembleDialog)
    {
        if (AssembleDialog->objectName().isEmpty())
            AssembleDialog->setObjectName(QString::fromUtf8("AssembleDialog"));
        AssembleDialog->resize(526, 96);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("ui-combo-box-edit");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8(":/Default/icons/ui-combo-box-edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        AssembleDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(AssembleDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 0);
        lineEdit = new QLineEdit(AssembleDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(lineEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        checkBoxKeepSize = new QCheckBox(AssembleDialog);
        checkBoxKeepSize->setObjectName(QString::fromUtf8("checkBoxKeepSize"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(checkBoxKeepSize->sizePolicy().hasHeightForWidth());
        checkBoxKeepSize->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(checkBoxKeepSize);

        checkBoxFillWithNops = new QCheckBox(AssembleDialog);
        checkBoxFillWithNops->setObjectName(QString::fromUtf8("checkBoxFillWithNops"));

        horizontalLayout->addWidget(checkBoxFillWithNops);

        radioXEDParse = new QRadioButton(AssembleDialog);
        radioXEDParse->setObjectName(QString::fromUtf8("radioXEDParse"));
        radioXEDParse->setChecked(true);

        horizontalLayout->addWidget(radioXEDParse);

        radioAsmjit = new QRadioButton(AssembleDialog);
        radioAsmjit->setObjectName(QString::fromUtf8("radioAsmjit"));

        horizontalLayout->addWidget(radioAsmjit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonOk = new QPushButton(AssembleDialog);
        pushButtonOk->setObjectName(QString::fromUtf8("pushButtonOk"));
        pushButtonOk->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(pushButtonOk);

        pushButtonCancel = new QPushButton(AssembleDialog);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));

        horizontalLayout->addWidget(pushButtonCancel);


        verticalLayout->addLayout(horizontalLayout);

        labelKeepSize = new QLabel(AssembleDialog);
        labelKeepSize->setObjectName(QString::fromUtf8("labelKeepSize"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelKeepSize->sizePolicy().hasHeightForWidth());
        labelKeepSize->setSizePolicy(sizePolicy2);
        labelKeepSize->setMinimumSize(QSize(0, 0));
        labelKeepSize->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(labelKeepSize);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(AssembleDialog);
        QObject::connect(pushButtonOk, SIGNAL(clicked()), AssembleDialog, SLOT(accept()));
        QObject::connect(pushButtonCancel, SIGNAL(clicked()), AssembleDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(AssembleDialog);
    } // setupUi

    void retranslateUi(QDialog *AssembleDialog)
    {
        AssembleDialog->setWindowTitle(QApplication::translate("AssembleDialog", "0", nullptr));
        checkBoxKeepSize->setText(QApplication::translate("AssembleDialog", "Keep &Size", nullptr));
        checkBoxFillWithNops->setText(QApplication::translate("AssembleDialog", "&Fill with NOP's", nullptr));
        radioXEDParse->setText(QApplication::translate("AssembleDialog", "&XEDParse", nullptr));
        radioAsmjit->setText(QApplication::translate("AssembleDialog", "&asmjit", nullptr));
        pushButtonOk->setText(QApplication::translate("AssembleDialog", "OK", nullptr));
        pushButtonCancel->setText(QApplication::translate("AssembleDialog", "Cancel", nullptr));
        labelKeepSize->setText(QApplication::translate("AssembleDialog", "<font color='orange'><b>Instruction decoding error</b></font>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AssembleDialog: public Ui_AssembleDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASSEMBLEDIALOG_H
