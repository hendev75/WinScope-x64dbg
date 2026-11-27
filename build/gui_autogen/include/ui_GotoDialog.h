/********************************************************************************
** Form generated from reading UI file 'GotoDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOTODIALOG_H
#define UI_GOTODIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "HistoryLineEdit.h"

QT_BEGIN_NAMESPACE

class Ui_GotoDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    HistoryLineEdit *editExpression;
    QLabel *labelError;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonOk;
    QPushButton *buttonCancel;

    void setupUi(QDialog *GotoDialog)
    {
        if (GotoDialog->objectName().isEmpty())
            GotoDialog->setObjectName(QString::fromUtf8("GotoDialog"));
        GotoDialog->resize(539, 92);
        GotoDialog->setContextMenuPolicy(Qt::NoContextMenu);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("geolocation-goto");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8(":/Default/icons/geolocation-goto.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        GotoDialog->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(GotoDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        editExpression = new HistoryLineEdit(GotoDialog);
        editExpression->setObjectName(QString::fromUtf8("editExpression"));
        editExpression->setMaximumSize(QSize(4132, 16777215));

        verticalLayout->addWidget(editExpression);

        labelError = new QLabel(GotoDialog);
        labelError->setObjectName(QString::fromUtf8("labelError"));
        labelError->setMaximumSize(QSize(4132, 16777215));
        labelError->setTextFormat(Qt::RichText);

        verticalLayout->addWidget(labelError);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonOk = new QPushButton(GotoDialog);
        buttonOk->setObjectName(QString::fromUtf8("buttonOk"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonOk->sizePolicy().hasHeightForWidth());
        buttonOk->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(buttonOk);

        buttonCancel = new QPushButton(GotoDialog);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));
        sizePolicy.setHeightForWidth(buttonCancel->sizePolicy().hasHeightForWidth());
        buttonCancel->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(buttonCancel);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        QWidget::setTabOrder(editExpression, buttonOk);
        QWidget::setTabOrder(buttonOk, buttonCancel);

        retranslateUi(GotoDialog);
        QObject::connect(buttonCancel, SIGNAL(clicked()), GotoDialog, SLOT(close()));
        QObject::connect(buttonOk, SIGNAL(clicked()), GotoDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(GotoDialog);
    } // setupUi

    void retranslateUi(QDialog *GotoDialog)
    {
        GotoDialog->setWindowTitle(QApplication::translate("GotoDialog", "Enter expression to follow...", nullptr));
        labelError->setText(QString());
        buttonOk->setText(QApplication::translate("GotoDialog", "&OK", nullptr));
        buttonCancel->setText(QApplication::translate("GotoDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GotoDialog: public Ui_GotoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOTODIALOG_H
