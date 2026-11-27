/********************************************************************************
** Form generated from reading UI file 'PatchDialogGroupSelector.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATCHDIALOGGROUPSELECTOR_H
#define UI_PATCHDIALOGGROUPSELECTOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PatchDialogGroupSelector
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *lblTitle;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnToggle;
    QPushButton *btnPrevious;
    QPushButton *btnNext;

    void setupUi(QDialog *PatchDialogGroupSelector)
    {
        if (PatchDialogGroupSelector->objectName().isEmpty())
            PatchDialogGroupSelector->setObjectName(QString::fromUtf8("PatchDialogGroupSelector"));
        PatchDialogGroupSelector->resize(261, 71);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("patch");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8(":/Default/icons/patch.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        PatchDialogGroupSelector->setWindowIcon(icon);
        layoutWidget = new QWidget(PatchDialogGroupSelector);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 241, 51));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lblTitle = new QLabel(layoutWidget);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier New"));
        lblTitle->setFont(font);
        lblTitle->setTextFormat(Qt::RichText);
        lblTitle->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lblTitle);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnToggle = new QPushButton(layoutWidget);
        btnToggle->setObjectName(QString::fromUtf8("btnToggle"));
        btnToggle->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(btnToggle);

        btnPrevious = new QPushButton(layoutWidget);
        btnPrevious->setObjectName(QString::fromUtf8("btnPrevious"));
        btnPrevious->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(btnPrevious);

        btnNext = new QPushButton(layoutWidget);
        btnNext->setObjectName(QString::fromUtf8("btnNext"));
        btnNext->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(btnNext);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(PatchDialogGroupSelector);

        QMetaObject::connectSlotsByName(PatchDialogGroupSelector);
    } // setupUi

    void retranslateUi(QDialog *PatchDialogGroupSelector)
    {
        PatchDialogGroupSelector->setWindowTitle(QApplication::translate("PatchDialogGroupSelector", "Group Selector", nullptr));
        lblTitle->setText(QApplication::translate("PatchDialogGroupSelector", "0000000000000000", nullptr));
        btnToggle->setText(QApplication::translate("PatchDialogGroupSelector", "&Toggle", nullptr));
        btnPrevious->setText(QApplication::translate("PatchDialogGroupSelector", "&Previous", nullptr));
        btnNext->setText(QApplication::translate("PatchDialogGroupSelector", "&Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PatchDialogGroupSelector: public Ui_PatchDialogGroupSelector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATCHDIALOGGROUPSELECTOR_H
