/********************************************************************************
** Form generated from reading UI file 'SelectFields.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTFIELDS_H
#define UI_SELECTFIELDS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SelectFields
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *SelectFields)
    {
        if (SelectFields->objectName().isEmpty())
            SelectFields->setObjectName(QString::fromUtf8("SelectFields"));
        SelectFields->setWindowModality(Qt::NonModal);
        SelectFields->resize(213, 181);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("log");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8(":/Default/icons/log.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        SelectFields->setWindowIcon(icon);
        SelectFields->setModal(true);
        verticalLayout = new QVBoxLayout(SelectFields);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget = new QListWidget(SelectFields);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_2 = new QPushButton(SelectFields);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(SelectFields);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SelectFields);
        QObject::connect(pushButton_2, SIGNAL(clicked()), SelectFields, SLOT(accept()));
        QObject::connect(pushButton, SIGNAL(clicked()), SelectFields, SLOT(reject()));

        QMetaObject::connectSlotsByName(SelectFields);
    } // setupUi

    void retranslateUi(QDialog *SelectFields)
    {
        SelectFields->setWindowTitle(QApplication::translate("SelectFields", "Dialog", nullptr));
        pushButton_2->setText(QApplication::translate("SelectFields", "&OK", nullptr));
        pushButton->setText(QApplication::translate("SelectFields", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectFields: public Ui_SelectFields {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTFIELDS_H
