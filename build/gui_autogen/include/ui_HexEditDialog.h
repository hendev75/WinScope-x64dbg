/********************************************************************************
** Form generated from reading UI file 'HexEditDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEXEDITDIALOG_H
#define UI_HEXEDITDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "HexLineEdit.h"

QT_BEGIN_NAMESPACE

class Ui_HexEditDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QTabWidget *tabModeSelect;
    QWidget *tabHexEdit;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelWarningCodepageASCII;
    QLabel *labelAscii;
    QSpacerItem *horizontalSpacer_5;
    HexLineEdit *lineEditAscii;
    QHBoxLayout *horizontalLayout_7;
    QLabel *labelWarningCodepageUTF;
    QLabel *labelUnicode;
    QSpacerItem *horizontalSpacer_6;
    HexLineEdit *lineEditUnicode;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelWarningCodepage;
    QLabel *labelLastCodepage;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnCodepage;
    HexLineEdit *lineEditCodepage;
    QLabel *labelHex;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *tabStringEditor;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelWarningCodepageString;
    QLabel *labelLastCodepage2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnCodePage2;
    QCheckBox *chkCRLF;
    QPlainTextEdit *stringEditor;
    QWidget *tabCopyData;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    QListWidget *listType;
    QPlainTextEdit *editCode;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *buttonCopy;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QSpinBox *spinBox;
    QHBoxLayout *horizontalLayout;
    QCheckBox *chkKeepSize;
    QCheckBox *chkEntireBlock;
    QCheckBox *chkFromSelection;
    QSpacerItem *horizontalSpacer;
    QLabel *labelSearchRange;
    QPushButton *btnOk;
    QPushButton *btnCancel;

    void setupUi(QDialog *HexEditDialog)
    {
        if (HexEditDialog->objectName().isEmpty())
            HexEditDialog->setObjectName(QString::fromUtf8("HexEditDialog"));
        HexEditDialog->resize(772, 599);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("document-binary");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8(":/Default/icons/document-binary.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        HexEditDialog->setWindowIcon(icon);
        verticalLayout_4 = new QVBoxLayout(HexEditDialog);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        tabModeSelect = new QTabWidget(HexEditDialog);
        tabModeSelect->setObjectName(QString::fromUtf8("tabModeSelect"));
        tabModeSelect->setFocusPolicy(Qt::NoFocus);
        tabHexEdit = new QWidget();
        tabHexEdit->setObjectName(QString::fromUtf8("tabHexEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabHexEdit->sizePolicy().hasHeightForWidth());
        tabHexEdit->setSizePolicy(sizePolicy);
        verticalLayout_5 = new QVBoxLayout(tabHexEdit);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        labelWarningCodepageASCII = new QLabel(tabHexEdit);
        labelWarningCodepageASCII->setObjectName(QString::fromUtf8("labelWarningCodepageASCII"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelWarningCodepageASCII->sizePolicy().hasHeightForWidth());
        labelWarningCodepageASCII->setSizePolicy(sizePolicy1);
        labelWarningCodepageASCII->setPixmap(QPixmap(QString::fromUtf8(":/Default/icons/fatal-error.png")));

        horizontalLayout_6->addWidget(labelWarningCodepageASCII);

        labelAscii = new QLabel(tabHexEdit);
        labelAscii->setObjectName(QString::fromUtf8("labelAscii"));

        horizontalLayout_6->addWidget(labelAscii);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_6);

        lineEditAscii = new HexLineEdit(tabHexEdit);
        lineEditAscii->setObjectName(QString::fromUtf8("lineEditAscii"));
        lineEditAscii->setFocusPolicy(Qt::StrongFocus);
        lineEditAscii->setStyleSheet(QString::fromUtf8("QLineEdit {border-style: outset; border-width: 1px; border-color: black}"));
        lineEditAscii->setMaxLength(32767);
        lineEditAscii->setFrame(false);

        verticalLayout->addWidget(lineEditAscii);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        labelWarningCodepageUTF = new QLabel(tabHexEdit);
        labelWarningCodepageUTF->setObjectName(QString::fromUtf8("labelWarningCodepageUTF"));
        labelWarningCodepageUTF->setPixmap(QPixmap(QString::fromUtf8(":/Default/icons/fatal-error.png")));

        horizontalLayout_7->addWidget(labelWarningCodepageUTF);

        labelUnicode = new QLabel(tabHexEdit);
        labelUnicode->setObjectName(QString::fromUtf8("labelUnicode"));

        horizontalLayout_7->addWidget(labelUnicode);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_7);

        lineEditUnicode = new HexLineEdit(tabHexEdit);
        lineEditUnicode->setObjectName(QString::fromUtf8("lineEditUnicode"));
        lineEditUnicode->setStyleSheet(QString::fromUtf8("QLineEdit {border-style: outset; border-width: 1px; border-color: black}"));
        lineEditUnicode->setMaxLength(32767);
        lineEditUnicode->setFrame(false);

        verticalLayout->addWidget(lineEditUnicode);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelWarningCodepage = new QLabel(tabHexEdit);
        labelWarningCodepage->setObjectName(QString::fromUtf8("labelWarningCodepage"));
        labelWarningCodepage->setPixmap(QPixmap(QString::fromUtf8(":/Default/icons/fatal-error.png")));

        horizontalLayout_2->addWidget(labelWarningCodepage);

        labelLastCodepage = new QLabel(tabHexEdit);
        labelLastCodepage->setObjectName(QString::fromUtf8("labelLastCodepage"));

        horizontalLayout_2->addWidget(labelLastCodepage);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        btnCodepage = new QPushButton(tabHexEdit);
        btnCodepage->setObjectName(QString::fromUtf8("btnCodepage"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnCodepage->sizePolicy().hasHeightForWidth());
        btnCodepage->setSizePolicy(sizePolicy2);
        btnCodepage->setMaximumSize(QSize(16777215, 16777215));
        btnCodepage->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(btnCodepage);


        verticalLayout->addLayout(horizontalLayout_2);

        lineEditCodepage = new HexLineEdit(tabHexEdit);
        lineEditCodepage->setObjectName(QString::fromUtf8("lineEditCodepage"));
        lineEditCodepage->setStyleSheet(QString::fromUtf8("QLineEdit {border-style: outset; border-width: 1px; border-color: black}"));

        verticalLayout->addWidget(lineEditCodepage);

        labelHex = new QLabel(tabHexEdit);
        labelHex->setObjectName(QString::fromUtf8("labelHex"));
        labelHex->setMargin(0);
        labelHex->setIndent(20);

        verticalLayout->addWidget(labelHex);

        scrollArea = new QScrollArea(tabHexEdit);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFocusPolicy(Qt::StrongFocus);
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignCenter);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 726, 324));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        verticalLayout_5->addLayout(verticalLayout);

        tabModeSelect->addTab(tabHexEdit, QString());
        tabStringEditor = new QWidget();
        tabStringEditor->setObjectName(QString::fromUtf8("tabStringEditor"));
        verticalLayout_6 = new QVBoxLayout(tabStringEditor);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labelWarningCodepageString = new QLabel(tabStringEditor);
        labelWarningCodepageString->setObjectName(QString::fromUtf8("labelWarningCodepageString"));
        labelWarningCodepageString->setPixmap(QPixmap(QString::fromUtf8(":/Default/icons/fatal-error.png")));

        horizontalLayout_3->addWidget(labelWarningCodepageString);

        labelLastCodepage2 = new QLabel(tabStringEditor);
        labelLastCodepage2->setObjectName(QString::fromUtf8("labelLastCodepage2"));

        horizontalLayout_3->addWidget(labelLastCodepage2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        btnCodePage2 = new QPushButton(tabStringEditor);
        btnCodePage2->setObjectName(QString::fromUtf8("btnCodePage2"));
        btnCodePage2->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3->addWidget(btnCodePage2);

        chkCRLF = new QCheckBox(tabStringEditor);
        chkCRLF->setObjectName(QString::fromUtf8("chkCRLF"));
        chkCRLF->setFocusPolicy(Qt::NoFocus);
        chkCRLF->setChecked(true);

        horizontalLayout_3->addWidget(chkCRLF);


        verticalLayout_3->addLayout(horizontalLayout_3);

        stringEditor = new QPlainTextEdit(tabStringEditor);
        stringEditor->setObjectName(QString::fromUtf8("stringEditor"));

        verticalLayout_3->addWidget(stringEditor);


        verticalLayout_6->addLayout(verticalLayout_3);

        tabModeSelect->addTab(tabStringEditor, QString());
        tabCopyData = new QWidget();
        tabCopyData->setObjectName(QString::fromUtf8("tabCopyData"));
        verticalLayout_7 = new QVBoxLayout(tabCopyData);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        splitter = new QSplitter(tabCopyData);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy3);
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(1);
        splitter->setChildrenCollapsible(false);
        listType = new QListWidget(splitter);
        listType->setObjectName(QString::fromUtf8("listType"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(20);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(listType->sizePolicy().hasHeightForWidth());
        listType->setSizePolicy(sizePolicy4);
        splitter->addWidget(listType);
        editCode = new QPlainTextEdit(splitter);
        editCode->setObjectName(QString::fromUtf8("editCode"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(80);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(editCode->sizePolicy().hasHeightForWidth());
        editCode->setSizePolicy(sizePolicy5);
        splitter->addWidget(editCode);

        verticalLayout_2->addWidget(splitter);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        buttonCopy = new QPushButton(tabCopyData);
        buttonCopy->setObjectName(QString::fromUtf8("buttonCopy"));
        buttonCopy->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_5->addWidget(buttonCopy);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        label = new QLabel(tabCopyData);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_5->addWidget(label);

        spinBox = new QSpinBox(tabCopyData);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setFocusPolicy(Qt::NoFocus);
        spinBox->setMinimum(1);
        spinBox->setMaximum(256);

        horizontalLayout_5->addWidget(spinBox);


        verticalLayout_2->addLayout(horizontalLayout_5);


        verticalLayout_7->addLayout(verticalLayout_2);

        tabModeSelect->addTab(tabCopyData, QString());

        verticalLayout_4->addWidget(tabModeSelect);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        chkKeepSize = new QCheckBox(HexEditDialog);
        chkKeepSize->setObjectName(QString::fromUtf8("chkKeepSize"));
        chkKeepSize->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(chkKeepSize);

        chkEntireBlock = new QCheckBox(HexEditDialog);
        chkEntireBlock->setObjectName(QString::fromUtf8("chkEntireBlock"));
        chkEntireBlock->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(chkEntireBlock);

        chkFromSelection = new QCheckBox(HexEditDialog);
        chkFromSelection->setObjectName(QString::fromUtf8("chkFromSelection"));

        horizontalLayout->addWidget(chkFromSelection);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        labelSearchRange = new QLabel(HexEditDialog);
        labelSearchRange->setObjectName(QString::fromUtf8("labelSearchRange"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(labelSearchRange->sizePolicy().hasHeightForWidth());
        labelSearchRange->setSizePolicy(sizePolicy6);
        labelSearchRange->setWordWrap(false);
        labelSearchRange->setAlignment(Qt::AlignRight|Qt::AlignVCenter);

        horizontalLayout->addWidget(labelSearchRange);

        btnOk = new QPushButton(HexEditDialog);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));
        btnOk->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(btnOk);

        btnCancel = new QPushButton(HexEditDialog);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(btnCancel);


        verticalLayout_4->addLayout(horizontalLayout);

#ifndef QT_NO_SHORTCUT
        labelAscii->setBuddy(lineEditAscii);
        labelUnicode->setBuddy(lineEditUnicode);
        labelLastCodepage->setBuddy(lineEditCodepage);
        labelHex->setBuddy(scrollArea);
        labelLastCodepage2->setBuddy(stringEditor);
        label->setBuddy(spinBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(lineEditAscii, lineEditUnicode);
        QWidget::setTabOrder(lineEditUnicode, lineEditCodepage);
        QWidget::setTabOrder(lineEditCodepage, scrollArea);
        QWidget::setTabOrder(scrollArea, listType);
        QWidget::setTabOrder(listType, editCode);
        QWidget::setTabOrder(editCode, stringEditor);

        retranslateUi(HexEditDialog);
        QObject::connect(btnCancel, SIGNAL(clicked()), HexEditDialog, SLOT(reject()));
        QObject::connect(btnOk, SIGNAL(clicked()), HexEditDialog, SLOT(accept()));

        tabModeSelect->setCurrentIndex(0);
        btnOk->setDefault(true);


        QMetaObject::connectSlotsByName(HexEditDialog);
    } // setupUi

    void retranslateUi(QDialog *HexEditDialog)
    {
        HexEditDialog->setWindowTitle(QApplication::translate("HexEditDialog", "HexEdit", nullptr));
#ifndef QT_NO_TOOLTIP
        labelWarningCodepageASCII->setToolTip(QApplication::translate("HexEditDialog", "Warning: Data cannot be represented in selected codepage.", nullptr));
#endif // QT_NO_TOOLTIP
        labelWarningCodepageASCII->setText(QString());
        labelAscii->setText(QApplication::translate("HexEditDialog", "ASCII", nullptr));
        lineEditAscii->setInputMask(QString());
#ifndef QT_NO_TOOLTIP
        labelWarningCodepageUTF->setToolTip(QApplication::translate("HexEditDialog", "Warning: Data cannot be represented in selected codepage.", nullptr));
#endif // QT_NO_TOOLTIP
        labelWarningCodepageUTF->setText(QString());
        labelUnicode->setText(QApplication::translate("HexEditDialog", "&UNICODE:", nullptr));
        lineEditUnicode->setInputMask(QString());
#ifndef QT_NO_TOOLTIP
        labelWarningCodepage->setToolTip(QApplication::translate("HexEditDialog", "Warning: Data cannot be represented in selected codepage.", nullptr));
#endif // QT_NO_TOOLTIP
        labelWarningCodepage->setText(QString());
        labelLastCodepage->setText(QApplication::translate("HexEditDialog", "Last &Codepage:", nullptr));
        btnCodepage->setText(QApplication::translate("HexEditDialog", "Code&page...", nullptr));
        labelHex->setText(QApplication::translate("HexEditDialog", "&Hex:", nullptr));
        tabModeSelect->setTabText(tabModeSelect->indexOf(tabHexEdit), QApplication::translate("HexEditDialog", "Hex", nullptr));
#ifndef QT_NO_TOOLTIP
        labelWarningCodepageString->setToolTip(QApplication::translate("HexEditDialog", "Warning: Data cannot be represented in selected codepage.", nullptr));
#endif // QT_NO_TOOLTIP
        labelWarningCodepageString->setText(QString());
        labelLastCodepage2->setText(QApplication::translate("HexEditDialog", "Last &Codepage:", nullptr));
        btnCodePage2->setText(QApplication::translate("HexEditDialog", "Code&page...", nullptr));
#ifndef QT_NO_TOOLTIP
        chkCRLF->setToolTip(QApplication::translate("HexEditDialog", "Convert to Windows style line ending.", nullptr));
#endif // QT_NO_TOOLTIP
        chkCRLF->setText(QApplication::translate("HexEditDialog", "CR LF", nullptr));
        tabModeSelect->setTabText(tabModeSelect->indexOf(tabStringEditor), QApplication::translate("HexEditDialog", "String", nullptr));
        buttonCopy->setText(QApplication::translate("HexEditDialog", "Copy", nullptr));
        label->setText(QApplication::translate("HexEditDialog", "Items per line:", nullptr));
        tabModeSelect->setTabText(tabModeSelect->indexOf(tabCopyData), QApplication::translate("HexEditDialog", "Copy data", nullptr));
        chkKeepSize->setText(QApplication::translate("HexEditDialog", "&Keep Size", nullptr));
        chkEntireBlock->setText(QApplication::translate("HexEditDialog", "&Entire Block", nullptr));
        chkFromSelection->setText(QApplication::translate("HexEditDialog", "Start from &Selection", nullptr));
#ifndef QT_NO_TOOLTIP
        chkFromSelection->setToolTip(QApplication::translate("HexEditDialog", "When enabled, the search starts at the current selection; when disabled, it starts at the beginning of the range.", nullptr));
#endif // QT_NO_TOOLTIP
        labelSearchRange->setText(QString());
        btnOk->setText(QApplication::translate("HexEditDialog", "&OK", nullptr));
        btnCancel->setText(QApplication::translate("HexEditDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HexEditDialog: public Ui_HexEditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEXEDITDIALOG_H
