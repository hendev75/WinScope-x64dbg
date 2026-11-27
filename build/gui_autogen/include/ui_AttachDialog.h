/********************************************************************************
** Form generated from reading UI file 'AttachDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTACHDIALOG_H
#define UI_ATTACHDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AttachDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QPushButton *btnRefresh;
    QPushButton *btnFindWindow;
    QPushButton *btnAttach;
    QPushButton *btnCancel;

    void setupUi(QDialog *AttachDialog)
    {
        if (AttachDialog->objectName().isEmpty())
            AttachDialog->setObjectName(QString::fromUtf8("AttachDialog"));
        AttachDialog->resize(800, 400);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("attach");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8(":/Default/icons/attach.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        AttachDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(AttachDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 6);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(6, 0, 6, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(AttachDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setOpenExternalLinks(true);

        horizontalLayout->addWidget(label);

        btnRefresh = new QPushButton(AttachDialog);
        btnRefresh->setObjectName(QString::fromUtf8("btnRefresh"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnRefresh->sizePolicy().hasHeightForWidth());
        btnRefresh->setSizePolicy(sizePolicy);
        btnRefresh->setAutoDefault(false);

        horizontalLayout->addWidget(btnRefresh);

        btnFindWindow = new QPushButton(AttachDialog);
        btnFindWindow->setObjectName(QString::fromUtf8("btnFindWindow"));

        horizontalLayout->addWidget(btnFindWindow);

        btnAttach = new QPushButton(AttachDialog);
        btnAttach->setObjectName(QString::fromUtf8("btnAttach"));
        sizePolicy.setHeightForWidth(btnAttach->sizePolicy().hasHeightForWidth());
        btnAttach->setSizePolicy(sizePolicy);
        btnAttach->setAutoDefault(true);

        horizontalLayout->addWidget(btnAttach);

        btnCancel = new QPushButton(AttachDialog);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        sizePolicy.setHeightForWidth(btnCancel->sizePolicy().hasHeightForWidth());
        btnCancel->setSizePolicy(sizePolicy);
        btnCancel->setAutoDefault(false);

        horizontalLayout->addWidget(btnCancel);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(AttachDialog);
        QObject::connect(btnCancel, SIGNAL(clicked()), AttachDialog, SLOT(reject()));

        btnAttach->setDefault(true);


        QMetaObject::connectSlotsByName(AttachDialog);
    } // setupUi

    void retranslateUi(QDialog *AttachDialog)
    {
        AttachDialog->setWindowTitle(QApplication::translate("AttachDialog", "Attach", nullptr));
        label->setText(QApplication::translate("AttachDialog", "<a href=\"https://winscope.example/faq\">Why is process X not shown?</a>", nullptr));
        btnRefresh->setText(QApplication::translate("AttachDialog", "Refresh", nullptr));
        btnFindWindow->setText(QApplication::translate("AttachDialog", "Find Window...", nullptr));
        btnAttach->setText(QApplication::translate("AttachDialog", "&Attach", nullptr));
        btnCancel->setText(QApplication::translate("AttachDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AttachDialog: public Ui_AttachDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTACHDIALOG_H
