/********************************************************************************
** Form generated from reading UI file 'ExceptionRangeDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXCEPTIONRANGEDIALOG_H
#define UI_EXCEPTIONRANGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExceptionRangeDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *lblStart;
    QLabel *lblEnd;
    QLineEdit *editEnd;
    QLineEdit *editStart;
    QHBoxLayout *layoutButtons;
    QPushButton *btnOk;
    QPushButton *btnCancel;

    void setupUi(QDialog *ExceptionRangeDialog)
    {
        if (ExceptionRangeDialog->objectName().isEmpty())
            ExceptionRangeDialog->setObjectName(QString::fromUtf8("ExceptionRangeDialog"));
        ExceptionRangeDialog->resize(176, 106);
        verticalLayout = new QVBoxLayout(ExceptionRangeDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lblStart = new QLabel(ExceptionRangeDialog);
        lblStart->setObjectName(QString::fromUtf8("lblStart"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblStart->sizePolicy().hasHeightForWidth());
        lblStart->setSizePolicy(sizePolicy);
        lblStart->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lblStart, 0, 0, 1, 1);

        lblEnd = new QLabel(ExceptionRangeDialog);
        lblEnd->setObjectName(QString::fromUtf8("lblEnd"));
        sizePolicy.setHeightForWidth(lblEnd->sizePolicy().hasHeightForWidth());
        lblEnd->setSizePolicy(sizePolicy);
        lblEnd->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lblEnd, 1, 0, 1, 1);

        editEnd = new QLineEdit(ExceptionRangeDialog);
        editEnd->setObjectName(QString::fromUtf8("editEnd"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(editEnd->sizePolicy().hasHeightForWidth());
        editEnd->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("Courier New"));
        editEnd->setFont(font);
        editEnd->setMaxLength(8);
        editEnd->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(editEnd, 1, 1, 1, 1);

        editStart = new QLineEdit(ExceptionRangeDialog);
        editStart->setObjectName(QString::fromUtf8("editStart"));
        sizePolicy1.setHeightForWidth(editStart->sizePolicy().hasHeightForWidth());
        editStart->setSizePolicy(sizePolicy1);
        editStart->setFont(font);
        editStart->setMaxLength(8);
        editStart->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(editStart, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        layoutButtons = new QHBoxLayout();
        layoutButtons->setObjectName(QString::fromUtf8("layoutButtons"));
        btnOk = new QPushButton(ExceptionRangeDialog);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnOk->sizePolicy().hasHeightForWidth());
        btnOk->setSizePolicy(sizePolicy2);

        layoutButtons->addWidget(btnOk);

        btnCancel = new QPushButton(ExceptionRangeDialog);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        sizePolicy2.setHeightForWidth(btnCancel->sizePolicy().hasHeightForWidth());
        btnCancel->setSizePolicy(sizePolicy2);

        layoutButtons->addWidget(btnCancel);


        verticalLayout->addLayout(layoutButtons);

#ifndef QT_NO_SHORTCUT
        lblStart->setBuddy(editStart);
        lblEnd->setBuddy(editEnd);
#endif // QT_NO_SHORTCUT

        retranslateUi(ExceptionRangeDialog);
        QObject::connect(btnCancel, SIGNAL(clicked()), ExceptionRangeDialog, SLOT(reject()));

        btnOk->setDefault(true);


        QMetaObject::connectSlotsByName(ExceptionRangeDialog);
    } // setupUi

    void retranslateUi(QDialog *ExceptionRangeDialog)
    {
        ExceptionRangeDialog->setWindowTitle(QApplication::translate("ExceptionRangeDialog", "Range", nullptr));
        lblStart->setText(QApplication::translate("ExceptionRangeDialog", "Start:", nullptr));
        lblEnd->setText(QApplication::translate("ExceptionRangeDialog", "End:", nullptr));
        editEnd->setInputMask(QString());
        editEnd->setText(QString());
        editStart->setInputMask(QString());
        editStart->setText(QString());
        btnOk->setText(QApplication::translate("ExceptionRangeDialog", "OK", nullptr));
        btnCancel->setText(QApplication::translate("ExceptionRangeDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExceptionRangeDialog: public Ui_ExceptionRangeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXCEPTIONRANGEDIALOG_H
