/********************************************************************************
** Form generated from reading UI file 'MessagesBreakpoints.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGESBREAKPOINTS_H
#define UI_MESSAGESBREAKPOINTS_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MessagesBreakpoints
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *lblMessages;
    QComboBox *cboxMessages;
    QGroupBox *gboxBreakpoints;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *rbtnBreakAny;
    QRadioButton *rbtnBreakCurrent;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *chkTranslateMessage;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOk;
    QPushButton *btnCancel;

    void setupUi(QDialog *MessagesBreakpoints)
    {
        if (MessagesBreakpoints->objectName().isEmpty())
            MessagesBreakpoints->setObjectName(QString::fromUtf8("MessagesBreakpoints"));
        MessagesBreakpoints->setWindowModality(Qt::NonModal);
        MessagesBreakpoints->resize(289, 214);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("breakpoint_execute");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8(":/Default/icons/breakpoint_execute.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        MessagesBreakpoints->setWindowIcon(icon);
        MessagesBreakpoints->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        MessagesBreakpoints->setModal(false);
        verticalLayout = new QVBoxLayout(MessagesBreakpoints);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lblMessages = new QLabel(MessagesBreakpoints);
        lblMessages->setObjectName(QString::fromUtf8("lblMessages"));

        horizontalLayout->addWidget(lblMessages);

        cboxMessages = new QComboBox(MessagesBreakpoints);
        cboxMessages->setObjectName(QString::fromUtf8("cboxMessages"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cboxMessages->sizePolicy().hasHeightForWidth());
        cboxMessages->setSizePolicy(sizePolicy);
        cboxMessages->setEditable(true);

        horizontalLayout->addWidget(cboxMessages);


        verticalLayout->addLayout(horizontalLayout);

        gboxBreakpoints = new QGroupBox(MessagesBreakpoints);
        gboxBreakpoints->setObjectName(QString::fromUtf8("gboxBreakpoints"));
        verticalLayout_2 = new QVBoxLayout(gboxBreakpoints);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        rbtnBreakAny = new QRadioButton(gboxBreakpoints);
        rbtnBreakAny->setObjectName(QString::fromUtf8("rbtnBreakAny"));
        rbtnBreakAny->setChecked(true);

        verticalLayout_2->addWidget(rbtnBreakAny);

        rbtnBreakCurrent = new QRadioButton(gboxBreakpoints);
        rbtnBreakCurrent->setObjectName(QString::fromUtf8("rbtnBreakCurrent"));

        verticalLayout_2->addWidget(rbtnBreakCurrent);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_2);

        chkTranslateMessage = new QCheckBox(gboxBreakpoints);
        chkTranslateMessage->setObjectName(QString::fromUtf8("chkTranslateMessage"));

        verticalLayout_2->addWidget(chkTranslateMessage);


        verticalLayout->addWidget(gboxBreakpoints);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnOk = new QPushButton(MessagesBreakpoints);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));

        horizontalLayout_2->addWidget(btnOk);

        btnCancel = new QPushButton(MessagesBreakpoints);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout_2->addWidget(btnCancel);


        verticalLayout->addLayout(horizontalLayout_2);

#ifndef QT_NO_SHORTCUT
        lblMessages->setBuddy(cboxMessages);
#endif // QT_NO_SHORTCUT

        retranslateUi(MessagesBreakpoints);
        QObject::connect(btnCancel, SIGNAL(clicked()), MessagesBreakpoints, SLOT(close()));
        QObject::connect(btnOk, SIGNAL(clicked()), MessagesBreakpoints, SLOT(accept()));

        QMetaObject::connectSlotsByName(MessagesBreakpoints);
    } // setupUi

    void retranslateUi(QDialog *MessagesBreakpoints)
    {
        MessagesBreakpoints->setWindowTitle(QApplication::translate("MessagesBreakpoints", "Message Breakpoint", nullptr));
        lblMessages->setText(QApplication::translate("MessagesBreakpoints", "Messages:", nullptr));
        gboxBreakpoints->setTitle(QString());
        rbtnBreakAny->setText(QApplication::translate("MessagesBreakpoints", "Break on any window", nullptr));
        rbtnBreakCurrent->setText(QApplication::translate("MessagesBreakpoints", "Break on current window only \n"
"(Invalid for next session)", nullptr));
        chkTranslateMessage->setText(QApplication::translate("MessagesBreakpoints", "Use TranslateMessage", nullptr));
        btnOk->setText(QApplication::translate("MessagesBreakpoints", "OK", nullptr));
        btnCancel->setText(QApplication::translate("MessagesBreakpoints", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MessagesBreakpoints: public Ui_MessagesBreakpoints {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGESBREAKPOINTS_H
