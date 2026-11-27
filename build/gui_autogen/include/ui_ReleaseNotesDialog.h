/********************************************************************************
** Form generated from reading UI file 'ReleaseNotesDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RELEASENOTESDIALOG_H
#define UI_RELEASENOTESDIALOG_H

#include <Gui/ImageTextBrowser.h>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ReleaseNotesDialog
{
public:
    QVBoxLayout *verticalLayout;
    ImageTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *ReleaseNotesDialog)
    {
        if (ReleaseNotesDialog->objectName().isEmpty())
            ReleaseNotesDialog->setObjectName(QString::fromUtf8("ReleaseNotesDialog"));
        ReleaseNotesDialog->resize(790, 560);
        verticalLayout = new QVBoxLayout(ReleaseNotesDialog);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        textBrowser = new ImageTextBrowser(ReleaseNotesDialog);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(8);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, 0, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(ReleaseNotesDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setTextFormat(Qt::RichText);
        label->setOpenExternalLinks(true);

        horizontalLayout->addWidget(label);

        pushButton = new QPushButton(ReleaseNotesDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ReleaseNotesDialog);
        QObject::connect(pushButton, SIGNAL(clicked()), ReleaseNotesDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(ReleaseNotesDialog);
    } // setupUi

    void retranslateUi(QDialog *ReleaseNotesDialog)
    {
        ReleaseNotesDialog->setWindowTitle(QApplication::translate("ReleaseNotesDialog", "Release Notes", nullptr));
        label->setText(QString());
        pushButton->setText(QApplication::translate("ReleaseNotesDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReleaseNotesDialog: public Ui_ReleaseNotesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RELEASENOTESDIALOG_H
