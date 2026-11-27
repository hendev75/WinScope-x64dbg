/********************************************************************************
** Form generated from reading UI file 'ComboBoxDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMBOBOXDIALOG_H
#define UI_COMBOBOXDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ComboBoxDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QCheckBox *checkBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonOk;
    QPushButton *buttonCancel;

    void setupUi(QDialog *ComboBoxDialog)
    {
        if (ComboBoxDialog->objectName().isEmpty())
            ComboBoxDialog->setObjectName(QString::fromUtf8("ComboBoxDialog"));
        ComboBoxDialog->resize(414, 72);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ComboBoxDialog->sizePolicy().hasHeightForWidth());
        ComboBoxDialog->setSizePolicy(sizePolicy);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("ui-combo-box-edit");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8(":/Default/icons/ui-combo-box-edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        ComboBoxDialog->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(ComboBoxDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        comboBox = new QComboBox(ComboBoxDialog);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(comboBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(ComboBoxDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(40, 20));

        horizontalLayout->addWidget(label);

        checkBox = new QCheckBox(ComboBoxDialog);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout->addWidget(checkBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonOk = new QPushButton(ComboBoxDialog);
        buttonOk->setObjectName(QString::fromUtf8("buttonOk"));

        horizontalLayout->addWidget(buttonOk);

        buttonCancel = new QPushButton(ComboBoxDialog);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));

        horizontalLayout->addWidget(buttonCancel);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(ComboBoxDialog);
        QObject::connect(buttonOk, SIGNAL(clicked()), ComboBoxDialog, SLOT(accept()));
        QObject::connect(buttonCancel, SIGNAL(clicked()), ComboBoxDialog, SLOT(close()));

        buttonOk->setDefault(true);


        QMetaObject::connectSlotsByName(ComboBoxDialog);
    } // setupUi

    void retranslateUi(QDialog *ComboBoxDialog)
    {
        ComboBoxDialog->setWindowTitle(QApplication::translate("ComboBoxDialog", "Dialog", nullptr));
        label->setText(QString());
        checkBox->setText(QApplication::translate("ComboBoxDialog", "CheckBox", nullptr));
        buttonOk->setText(QApplication::translate("ComboBoxDialog", "&OK", nullptr));
        buttonCancel->setText(QApplication::translate("ComboBoxDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ComboBoxDialog: public Ui_ComboBoxDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMBOBOXDIALOG_H
