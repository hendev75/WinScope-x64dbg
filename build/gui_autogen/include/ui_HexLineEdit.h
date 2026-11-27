/********************************************************************************
** Form generated from reading UI file 'HexLineEdit.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEXLINEEDIT_H
#define UI_HEXLINEEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_HexLineEdit
{
public:

    void setupUi(QLineEdit *HexLineEdit)
    {
        if (HexLineEdit->objectName().isEmpty())
            HexLineEdit->setObjectName(QString::fromUtf8("HexLineEdit"));
        HexLineEdit->resize(361, 20);
        HexLineEdit->setProperty("widgetResizable", QVariant(true));

        retranslateUi(HexLineEdit);

        QMetaObject::connectSlotsByName(HexLineEdit);
    } // setupUi

    void retranslateUi(QLineEdit *HexLineEdit)
    {
        Q_UNUSED(HexLineEdit);
    } // retranslateUi

};

namespace Ui {
    class HexLineEdit: public Ui_HexLineEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEXLINEEDIT_H
