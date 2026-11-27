/********************************************************************************
** Form generated from reading UI file 'CalculatorDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATORDIALOG_H
#define UI_CALCULATORDIALOG_H

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

class Ui_CalculatorDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_8;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *label;
    QLineEdit *txtSignedDec;
    QLineEdit *txtUnsignedDec;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *txtHex;
    QLineEdit *txtBin;
    QLineEdit *txtOct;
    QLineEdit *txtUnicode;
    QLineEdit *txtAscii;
    QLabel *label_2;
    QLineEdit *txtExpression;
    QLineEdit *txtBytes;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnGoto;
    QPushButton *btnGotoDump;
    QPushButton *btnGotoMemoryMap;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnClose;

    void setupUi(QDialog *CalculatorDialog)
    {
        if (CalculatorDialog->objectName().isEmpty())
            CalculatorDialog->setObjectName(QString::fromUtf8("CalculatorDialog"));
        CalculatorDialog->resize(502, 279);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CalculatorDialog->sizePolicy().hasHeightForWidth());
        CalculatorDialog->setSizePolicy(sizePolicy);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("calculator");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8(":/Default/icons/calculator.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        CalculatorDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(CalculatorDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_8 = new QLabel(CalculatorDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 2, 0, 1, 1);

        label_3 = new QLabel(CalculatorDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_7 = new QLabel(CalculatorDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 10, 0, 1, 1);

        label_4 = new QLabel(CalculatorDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        label = new QLabel(CalculatorDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        txtSignedDec = new QLineEdit(CalculatorDialog);
        txtSignedDec->setObjectName(QString::fromUtf8("txtSignedDec"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(txtSignedDec->sizePolicy().hasHeightForWidth());
        txtSignedDec->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("Courier New"));
        txtSignedDec->setFont(font);
        txtSignedDec->setReadOnly(false);

        gridLayout->addWidget(txtSignedDec, 2, 1, 1, 1);

        txtUnsignedDec = new QLineEdit(CalculatorDialog);
        txtUnsignedDec->setObjectName(QString::fromUtf8("txtUnsignedDec"));
        sizePolicy1.setHeightForWidth(txtUnsignedDec->sizePolicy().hasHeightForWidth());
        txtUnsignedDec->setSizePolicy(sizePolicy1);
        txtUnsignedDec->setFont(font);
        txtUnsignedDec->setReadOnly(false);

        gridLayout->addWidget(txtUnsignedDec, 3, 1, 1, 1);

        label_5 = new QLabel(CalculatorDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 7, 0, 1, 1);

        label_6 = new QLabel(CalculatorDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 9, 0, 1, 1);

        txtHex = new QLineEdit(CalculatorDialog);
        txtHex->setObjectName(QString::fromUtf8("txtHex"));
        sizePolicy1.setHeightForWidth(txtHex->sizePolicy().hasHeightForWidth());
        txtHex->setSizePolicy(sizePolicy1);
        txtHex->setFont(font);
        txtHex->setReadOnly(false);

        gridLayout->addWidget(txtHex, 1, 1, 1, 1);

        txtBin = new QLineEdit(CalculatorDialog);
        txtBin->setObjectName(QString::fromUtf8("txtBin"));
        sizePolicy1.setHeightForWidth(txtBin->sizePolicy().hasHeightForWidth());
        txtBin->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Lucida Console"));
        font1.setPointSize(7);
        txtBin->setFont(font1);
        txtBin->setReadOnly(false);

        gridLayout->addWidget(txtBin, 7, 1, 1, 1);

        txtOct = new QLineEdit(CalculatorDialog);
        txtOct->setObjectName(QString::fromUtf8("txtOct"));
        sizePolicy1.setHeightForWidth(txtOct->sizePolicy().hasHeightForWidth());
        txtOct->setSizePolicy(sizePolicy1);
        txtOct->setFont(font);
        txtOct->setReadOnly(false);

        gridLayout->addWidget(txtOct, 5, 1, 1, 1);

        txtUnicode = new QLineEdit(CalculatorDialog);
        txtUnicode->setObjectName(QString::fromUtf8("txtUnicode"));
        sizePolicy1.setHeightForWidth(txtUnicode->sizePolicy().hasHeightForWidth());
        txtUnicode->setSizePolicy(sizePolicy1);
        txtUnicode->setFont(font);
        txtUnicode->setMaxLength(1);
        txtUnicode->setReadOnly(false);

        gridLayout->addWidget(txtUnicode, 10, 1, 1, 1);

        txtAscii = new QLineEdit(CalculatorDialog);
        txtAscii->setObjectName(QString::fromUtf8("txtAscii"));
        sizePolicy1.setHeightForWidth(txtAscii->sizePolicy().hasHeightForWidth());
        txtAscii->setSizePolicy(sizePolicy1);
        txtAscii->setFont(font);
        txtAscii->setMaxLength(1);
        txtAscii->setReadOnly(false);

        gridLayout->addWidget(txtAscii, 9, 1, 1, 1);

        label_2 = new QLabel(CalculatorDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        txtExpression = new QLineEdit(CalculatorDialog);
        txtExpression->setObjectName(QString::fromUtf8("txtExpression"));
        sizePolicy1.setHeightForWidth(txtExpression->sizePolicy().hasHeightForWidth());
        txtExpression->setSizePolicy(sizePolicy1);
        txtExpression->setFont(font);

        gridLayout->addWidget(txtExpression, 0, 1, 1, 1);

        txtBytes = new QLineEdit(CalculatorDialog);
        txtBytes->setObjectName(QString::fromUtf8("txtBytes"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Courier New"));
        font2.setPointSize(8);
        txtBytes->setFont(font2);
        txtBytes->setCursorPosition(0);

        gridLayout->addWidget(txtBytes, 6, 1, 1, 1);

        label_9 = new QLabel(CalculatorDialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 6, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnGoto = new QPushButton(CalculatorDialog);
        btnGoto->setObjectName(QString::fromUtf8("btnGoto"));

        horizontalLayout->addWidget(btnGoto);

        btnGotoDump = new QPushButton(CalculatorDialog);
        btnGotoDump->setObjectName(QString::fromUtf8("btnGotoDump"));

        horizontalLayout->addWidget(btnGotoDump);

        btnGotoMemoryMap = new QPushButton(CalculatorDialog);
        btnGotoMemoryMap->setObjectName(QString::fromUtf8("btnGotoMemoryMap"));

        horizontalLayout->addWidget(btnGotoMemoryMap);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnClose = new QPushButton(CalculatorDialog);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));

        horizontalLayout->addWidget(btnClose);


        verticalLayout->addLayout(horizontalLayout);

#ifndef QT_NO_SHORTCUT
        label_8->setBuddy(txtSignedDec);
        label_3->setBuddy(txtUnsignedDec);
        label_7->setBuddy(txtUnicode);
        label_4->setBuddy(txtOct);
        label->setBuddy(txtExpression);
        label_5->setBuddy(txtBin);
        label_6->setBuddy(txtAscii);
        label_2->setBuddy(txtHex);
        label_9->setBuddy(txtBytes);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(txtExpression, txtHex);
        QWidget::setTabOrder(txtHex, txtSignedDec);
        QWidget::setTabOrder(txtSignedDec, txtUnsignedDec);
        QWidget::setTabOrder(txtUnsignedDec, txtOct);
        QWidget::setTabOrder(txtOct, txtBytes);
        QWidget::setTabOrder(txtBytes, txtBin);
        QWidget::setTabOrder(txtBin, txtAscii);
        QWidget::setTabOrder(txtAscii, txtUnicode);
        QWidget::setTabOrder(txtUnicode, btnGoto);
        QWidget::setTabOrder(btnGoto, btnGotoDump);
        QWidget::setTabOrder(btnGotoDump, btnGotoMemoryMap);
        QWidget::setTabOrder(btnGotoMemoryMap, btnClose);

        retranslateUi(CalculatorDialog);
        QObject::connect(btnClose, SIGNAL(clicked()), CalculatorDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(CalculatorDialog);
    } // setupUi

    void retranslateUi(QDialog *CalculatorDialog)
    {
        CalculatorDialog->setWindowTitle(QApplication::translate("CalculatorDialog", "Calculator", nullptr));
        label_8->setText(QApplication::translate("CalculatorDialog", "Signed:", nullptr));
        label_3->setText(QApplication::translate("CalculatorDialog", "Unsigned:", nullptr));
        label_7->setText(QApplication::translate("CalculatorDialog", "Unicode:", nullptr));
        label_4->setText(QApplication::translate("CalculatorDialog", "Octal:", nullptr));
        label->setText(QApplication::translate("CalculatorDialog", "Expression:", nullptr));
        label_5->setText(QApplication::translate("CalculatorDialog", "Binary:", nullptr));
        label_6->setText(QApplication::translate("CalculatorDialog", "ASCII:", nullptr));
        txtBin->setText(QApplication::translate("CalculatorDialog", "0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000", nullptr));
        txtUnicode->setInputMask(QString());
        txtAscii->setInputMask(QString());
        label_2->setText(QApplication::translate("CalculatorDialog", "Hexadecimal:", nullptr));
        txtBytes->setText(QApplication::translate("CalculatorDialog", "0000000000000000", nullptr));
        label_9->setText(QApplication::translate("CalculatorDialog", "Bytes:", nullptr));
        btnGoto->setText(QApplication::translate("CalculatorDialog", "&Follow in Disassembler", nullptr));
        btnGotoDump->setText(QApplication::translate("CalculatorDialog", "Follow in &Dump", nullptr));
        btnGotoMemoryMap->setText(QApplication::translate("CalculatorDialog", "Follow in Memory Map", nullptr));
        btnClose->setText(QApplication::translate("CalculatorDialog", "&Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalculatorDialog: public Ui_CalculatorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATORDIALOG_H
