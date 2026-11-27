/********************************************************************************
** Form generated from reading UI file 'WordEditDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORDEDITDIALOG_H
#define UI_WORDEDITDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_WordEditDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *signedLineEdit;
    QLineEdit *hexLineEdit;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_3;
    QLineEdit *unsignedLineEdit;
    QLineEdit *asciiLineEdit;
    QLineEdit *expressionLineEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *layoutOkCancel;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOk;
    QPushButton *btnCancel;

    void setupUi(QDialog *WordEditDialog)
    {
        if (WordEditDialog->objectName().isEmpty())
            WordEditDialog->setObjectName(QString::fromUtf8("WordEditDialog"));
        WordEditDialog->resize(260, 166);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WordEditDialog->sizePolicy().hasHeightForWidth());
        WordEditDialog->setSizePolicy(sizePolicy);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("ui-combo-box-edit");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8(":/Default/icons/ui-combo-box-edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        WordEditDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(WordEditDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(WordEditDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        signedLineEdit = new QLineEdit(WordEditDialog);
        signedLineEdit->setObjectName(QString::fromUtf8("signedLineEdit"));
        signedLineEdit->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(signedLineEdit->sizePolicy().hasHeightForWidth());
        signedLineEdit->setSizePolicy(sizePolicy1);
        signedLineEdit->setMinimumSize(QSize(140, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("Lucida Console"));
        signedLineEdit->setFont(font);
        signedLineEdit->setReadOnly(false);

        gridLayout->addWidget(signedLineEdit, 2, 1, 1, 1);

        hexLineEdit = new QLineEdit(WordEditDialog);
        hexLineEdit->setObjectName(QString::fromUtf8("hexLineEdit"));
        hexLineEdit->setEnabled(true);
        sizePolicy1.setHeightForWidth(hexLineEdit->sizePolicy().hasHeightForWidth());
        hexLineEdit->setSizePolicy(sizePolicy1);
        hexLineEdit->setMinimumSize(QSize(140, 0));
        hexLineEdit->setFont(font);
        hexLineEdit->setReadOnly(false);

        gridLayout->addWidget(hexLineEdit, 1, 1, 1, 1);

        label_2 = new QLabel(WordEditDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_4 = new QLabel(WordEditDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_5 = new QLabel(WordEditDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_3 = new QLabel(WordEditDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        unsignedLineEdit = new QLineEdit(WordEditDialog);
        unsignedLineEdit->setObjectName(QString::fromUtf8("unsignedLineEdit"));
        unsignedLineEdit->setEnabled(true);
        sizePolicy1.setHeightForWidth(unsignedLineEdit->sizePolicy().hasHeightForWidth());
        unsignedLineEdit->setSizePolicy(sizePolicy1);
        unsignedLineEdit->setMinimumSize(QSize(140, 0));
        unsignedLineEdit->setFont(font);
        unsignedLineEdit->setReadOnly(false);

        gridLayout->addWidget(unsignedLineEdit, 3, 1, 1, 1);

        asciiLineEdit = new QLineEdit(WordEditDialog);
        asciiLineEdit->setObjectName(QString::fromUtf8("asciiLineEdit"));
        asciiLineEdit->setEnabled(true);
        sizePolicy1.setHeightForWidth(asciiLineEdit->sizePolicy().hasHeightForWidth());
        asciiLineEdit->setSizePolicy(sizePolicy1);
        asciiLineEdit->setMinimumSize(QSize(140, 0));
        asciiLineEdit->setFont(font);
        asciiLineEdit->setReadOnly(true);

        gridLayout->addWidget(asciiLineEdit, 4, 1, 1, 1);

        expressionLineEdit = new QLineEdit(WordEditDialog);
        expressionLineEdit->setObjectName(QString::fromUtf8("expressionLineEdit"));
        sizePolicy1.setHeightForWidth(expressionLineEdit->sizePolicy().hasHeightForWidth());
        expressionLineEdit->setSizePolicy(sizePolicy1);
        expressionLineEdit->setMinimumSize(QSize(140, 0));
        expressionLineEdit->setFont(font);

        gridLayout->addWidget(expressionLineEdit, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        layoutOkCancel = new QHBoxLayout();
        layoutOkCancel->setObjectName(QString::fromUtf8("layoutOkCancel"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layoutOkCancel->addItem(horizontalSpacer);

        btnOk = new QPushButton(WordEditDialog);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));
        sizePolicy1.setHeightForWidth(btnOk->sizePolicy().hasHeightForWidth());
        btnOk->setSizePolicy(sizePolicy1);

        layoutOkCancel->addWidget(btnOk);

        btnCancel = new QPushButton(WordEditDialog);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        sizePolicy1.setHeightForWidth(btnCancel->sizePolicy().hasHeightForWidth());
        btnCancel->setSizePolicy(sizePolicy1);

        layoutOkCancel->addWidget(btnCancel);


        verticalLayout->addLayout(layoutOkCancel);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(expressionLineEdit);
        label_2->setBuddy(hexLineEdit);
        label_4->setBuddy(unsignedLineEdit);
        label_5->setBuddy(asciiLineEdit);
        label_3->setBuddy(signedLineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(WordEditDialog);
        QObject::connect(btnOk, SIGNAL(clicked()), WordEditDialog, SLOT(accept()));
        QObject::connect(btnCancel, SIGNAL(clicked()), WordEditDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(WordEditDialog);
    } // setupUi

    void retranslateUi(QDialog *WordEditDialog)
    {
        WordEditDialog->setWindowTitle(QApplication::translate("WordEditDialog", "Edit", nullptr));
        label->setText(QApplication::translate("WordEditDialog", "Expression:", nullptr));
        label_2->setText(QApplication::translate("WordEditDialog", "Bytes:", nullptr));
        label_4->setText(QApplication::translate("WordEditDialog", "Unsigned:", nullptr));
        label_5->setText(QApplication::translate("WordEditDialog", "ASCII:", nullptr));
        label_3->setText(QApplication::translate("WordEditDialog", "Signed:", nullptr));
        btnOk->setText(QApplication::translate("WordEditDialog", "&OK", nullptr));
        btnCancel->setText(QApplication::translate("WordEditDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WordEditDialog: public Ui_WordEditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORDEDITDIALOG_H
