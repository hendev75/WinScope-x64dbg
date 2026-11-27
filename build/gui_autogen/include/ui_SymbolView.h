/********************************************************************************
** Form generated from reading UI file 'SymbolView.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYMBOLVIEW_H
#define UI_SYMBOLVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SymbolView
{
public:
    QSplitter *mainSplitter;
    QSplitter *listSplitter;
    QWidget *layoutWidget;
    QVBoxLayout *logLayout;
    QTextEdit *symbolLogEdit;
    QProgressBar *symbolProgress;

    void setupUi(QWidget *SymbolView)
    {
        if (SymbolView->objectName().isEmpty())
            SymbolView->setObjectName(QString::fromUtf8("SymbolView"));
        SymbolView->resize(694, 605);
        SymbolView->setAutoFillBackground(true);
        SymbolView->setStyleSheet(QString::fromUtf8(""));
        mainSplitter = new QSplitter(SymbolView);
        mainSplitter->setObjectName(QString::fromUtf8("mainSplitter"));
        mainSplitter->setGeometry(QRect(0, 0, 691, 601));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainSplitter->sizePolicy().hasHeightForWidth());
        mainSplitter->setSizePolicy(sizePolicy);
        mainSplitter->setOrientation(Qt::Vertical);
        mainSplitter->setChildrenCollapsible(false);
        listSplitter = new QSplitter(mainSplitter);
        listSplitter->setObjectName(QString::fromUtf8("listSplitter"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listSplitter->sizePolicy().hasHeightForWidth());
        listSplitter->setSizePolicy(sizePolicy1);
        listSplitter->setOrientation(Qt::Horizontal);
        listSplitter->setHandleWidth(2);
        listSplitter->setChildrenCollapsible(false);
        mainSplitter->addWidget(listSplitter);
        layoutWidget = new QWidget(mainSplitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        logLayout = new QVBoxLayout(layoutWidget);
        logLayout->setSpacing(3);
        logLayout->setObjectName(QString::fromUtf8("logLayout"));
        logLayout->setContentsMargins(0, 0, 0, 0);
        symbolLogEdit = new QTextEdit(layoutWidget);
        symbolLogEdit->setObjectName(QString::fromUtf8("symbolLogEdit"));
        sizePolicy.setHeightForWidth(symbolLogEdit->sizePolicy().hasHeightForWidth());
        symbolLogEdit->setSizePolicy(sizePolicy);

        logLayout->addWidget(symbolLogEdit);

        symbolProgress = new QProgressBar(layoutWidget);
        symbolProgress->setObjectName(QString::fromUtf8("symbolProgress"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(symbolProgress->sizePolicy().hasHeightForWidth());
        symbolProgress->setSizePolicy(sizePolicy2);
        symbolProgress->setMaximumSize(QSize(16777215, 15));
        symbolProgress->setValue(0);
        symbolProgress->setTextVisible(false);

        logLayout->addWidget(symbolProgress);

        mainSplitter->addWidget(layoutWidget);

        retranslateUi(SymbolView);

        QMetaObject::connectSlotsByName(SymbolView);
    } // setupUi

    void retranslateUi(QWidget *SymbolView)
    {
        SymbolView->setWindowTitle(QApplication::translate("SymbolView", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SymbolView: public Ui_SymbolView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYMBOLVIEW_H
