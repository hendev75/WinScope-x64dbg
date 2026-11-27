/********************************************************************************
** Form generated from reading UI file 'DisplayTypeDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYTYPEDIALOG_H
#define UI_DISPLAYTYPEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include "StdSearchListView.h"
#include "TypeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_DisplayTypeDialog
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *addressLayout;
    QLabel *addressPromptLabel;
    QLineEdit *addressEdit;
    QLabel *addressLabel;
    QFrame *separator;
    QSplitter *splitter;
    StdSearchListView *typeList;
    TypeWidget *typeWidget;
    QFrame *separator2;
    QHBoxLayout *buttonLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonOk;
    QPushButton *buttonCancel;

    void setupUi(QDialog *DisplayTypeDialog)
    {
        if (DisplayTypeDialog->objectName().isEmpty())
            DisplayTypeDialog->setObjectName(QString::fromUtf8("DisplayTypeDialog"));
        DisplayTypeDialog->resize(1057, 714);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("types");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8(":/Default/icons/types.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        DisplayTypeDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(DisplayTypeDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        addressLayout = new QVBoxLayout();
        addressLayout->setSpacing(3);
        addressLayout->setObjectName(QString::fromUtf8("addressLayout"));
        addressPromptLabel = new QLabel(DisplayTypeDialog);
        addressPromptLabel->setObjectName(QString::fromUtf8("addressPromptLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        addressPromptLabel->setFont(font);

        addressLayout->addWidget(addressPromptLabel);

        addressEdit = new QLineEdit(DisplayTypeDialog);
        addressEdit->setObjectName(QString::fromUtf8("addressEdit"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Consolas"));
        font1.setPointSize(10);
        addressEdit->setFont(font1);

        addressLayout->addWidget(addressEdit);

        addressLabel = new QLabel(DisplayTypeDialog);
        addressLabel->setObjectName(QString::fromUtf8("addressLabel"));
        QFont font2;
        font2.setPointSize(9);
        addressLabel->setFont(font2);

        addressLayout->addWidget(addressLabel);


        verticalLayout->addLayout(addressLayout);

        separator = new QFrame(DisplayTypeDialog);
        separator->setObjectName(QString::fromUtf8("separator"));
        separator->setFrameShape(QFrame::HLine);
        separator->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(separator);

        splitter = new QSplitter(DisplayTypeDialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setOrientation(Qt::Horizontal);
        typeList = new StdSearchListView(splitter);
        typeList->setObjectName(QString::fromUtf8("typeList"));
        splitter->addWidget(typeList);
        typeWidget = new TypeWidget(splitter);
        typeWidget->setObjectName(QString::fromUtf8("typeWidget"));
        splitter->addWidget(typeWidget);

        verticalLayout->addWidget(splitter);

        separator2 = new QFrame(DisplayTypeDialog);
        separator2->setObjectName(QString::fromUtf8("separator2"));
        separator2->setFrameShape(QFrame::HLine);
        separator2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(separator2);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setSpacing(6);
        buttonLayout->setObjectName(QString::fromUtf8("buttonLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonLayout->addItem(horizontalSpacer);

        buttonOk = new QPushButton(DisplayTypeDialog);
        buttonOk->setObjectName(QString::fromUtf8("buttonOk"));

        buttonLayout->addWidget(buttonOk);

        buttonCancel = new QPushButton(DisplayTypeDialog);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));

        buttonLayout->addWidget(buttonCancel);


        verticalLayout->addLayout(buttonLayout);

#ifndef QT_NO_SHORTCUT
        addressPromptLabel->setBuddy(addressEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(DisplayTypeDialog);
        QObject::connect(buttonCancel, SIGNAL(clicked()), DisplayTypeDialog, SLOT(reject()));
        QObject::connect(buttonOk, SIGNAL(clicked()), DisplayTypeDialog, SLOT(accept()));

        buttonOk->setDefault(true);


        QMetaObject::connectSlotsByName(DisplayTypeDialog);
    } // setupUi

    void retranslateUi(QDialog *DisplayTypeDialog)
    {
        DisplayTypeDialog->setWindowTitle(QApplication::translate("DisplayTypeDialog", "Display Type at Address", nullptr));
        addressPromptLabel->setText(QApplication::translate("DisplayTypeDialog", "&Address:", nullptr));
        addressEdit->setPlaceholderText(QApplication::translate("DisplayTypeDialog", "Enter address or expression...", nullptr));
        addressLabel->setStyleSheet(QApplication::translate("DisplayTypeDialog", "color: gray;", nullptr));
        addressLabel->setText(QApplication::translate("DisplayTypeDialog", "Address: Not set", nullptr));
        buttonOk->setText(QApplication::translate("DisplayTypeDialog", "&OK", nullptr));
        buttonCancel->setText(QApplication::translate("DisplayTypeDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DisplayTypeDialog: public Ui_DisplayTypeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYTYPEDIALOG_H
