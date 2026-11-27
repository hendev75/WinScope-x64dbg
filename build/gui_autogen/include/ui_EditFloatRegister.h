/********************************************************************************
** Form generated from reading UI file 'EditFloatRegister.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITFLOATREGISTER_H
#define UI_EDITFLOATREGISTER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditFloatRegister
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_YMM;
    QLabel *labelHD;
    QLabel *labelHA;
    QLabel *labelHC;
    QLabel *labelH9;
    QLabel *labelHE;
    QLabel *labelHB;
    QLabel *labelH8;
    QHBoxLayout *horizontalLayout_9;
    QLineEdit *longLongEdit0;
    QLineEdit *longLongEdit1;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *doubleEdit0;
    QLineEdit *doubleEdit1;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *floatEdit0;
    QLineEdit *floatEdit1;
    QLineEdit *floatEdit2;
    QLineEdit *floatEdit3;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *longEdit0;
    QLineEdit *longEdit1;
    QLineEdit *longEdit2;
    QLineEdit *longEdit3;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *shortEdit0;
    QLineEdit *shortEdit1;
    QLineEdit *shortEdit2;
    QLineEdit *shortEdit3;
    QLineEdit *shortEdit4;
    QLineEdit *shortEdit5;
    QLineEdit *shortEdit6;
    QLineEdit *shortEdit7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelH0;
    QLabel *labelH1;
    QLabel *labelH2;
    QLabel *labelH3;
    QLabel *labelH4;
    QLabel *labelH5;
    QLabel *labelH6;
    QLabel *labelH7;
    QHBoxLayout *horizontalLayout;
    QLineEdit *hexEdit;
    QFrame *line;
    QGridLayout *gridLayout_XMM;
    QLabel *labelLB;
    QLabel *labelLowRegister;
    QLabel *labelL8;
    QLabel *labelLA;
    QLabel *labelLC;
    QLabel *labelL9;
    QLabel *labelLD;
    QHBoxLayout *horizontalLayout_17;
    QLineEdit *longLongEdit0_2;
    QLineEdit *longLongEdit1_2;
    QHBoxLayout *horizontalLayout_16;
    QLineEdit *doubleEdit0_2;
    QLineEdit *doubleEdit1_2;
    QHBoxLayout *horizontalLayout_15;
    QLineEdit *floatEdit0_2;
    QLineEdit *floatEdit1_2;
    QLineEdit *floatEdit2_2;
    QLineEdit *floatEdit3_2;
    QHBoxLayout *horizontalLayout_14;
    QLineEdit *longEdit0_2;
    QLineEdit *longEdit1_2;
    QLineEdit *longEdit2_2;
    QLineEdit *longEdit3_2;
    QHBoxLayout *horizontalLayout_13;
    QLineEdit *shortEdit0_2;
    QLineEdit *shortEdit1_2;
    QLineEdit *shortEdit2_2;
    QLineEdit *shortEdit3_2;
    QLineEdit *shortEdit4_2;
    QLineEdit *shortEdit5_2;
    QLineEdit *shortEdit6_2;
    QLineEdit *shortEdit7_2;
    QHBoxLayout *horizontalLayout_12;
    QLabel *labelL0;
    QLabel *labelL1;
    QLabel *labelL2;
    QLabel *labelL3;
    QLabel *labelL4;
    QLabel *labelL5;
    QLabel *labelL6;
    QLabel *labelL7;
    QHBoxLayout *horizontalLayout_11;
    QLineEdit *hexEdit_2;
    QScrollBar *scrollAVX512;
    QHBoxLayout *horizontalLayout_18;
    QRadioButton *radioHex;
    QRadioButton *radioSigned;
    QRadioButton *radioUnsigned;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *buttonOk;
    QPushButton *buttonCancel;

    void setupUi(QDialog *EditFloatRegister)
    {
        if (EditFloatRegister->objectName().isEmpty())
            EditFloatRegister->setObjectName(QString::fromUtf8("EditFloatRegister"));
        EditFloatRegister->setWindowModality(Qt::WindowModal);
        EditFloatRegister->resize(696, 451);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EditFloatRegister->sizePolicy().hasHeightForWidth());
        EditFloatRegister->setSizePolicy(sizePolicy);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("modify");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8(":/Default/icons/modify.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        EditFloatRegister->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(EditFloatRegister);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout_YMM = new QGridLayout();
        gridLayout_YMM->setObjectName(QString::fromUtf8("gridLayout_YMM"));
        labelHD = new QLabel(EditFloatRegister);
        labelHD->setObjectName(QString::fromUtf8("labelHD"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelHD->sizePolicy().hasHeightForWidth());
        labelHD->setSizePolicy(sizePolicy1);

        gridLayout_YMM->addWidget(labelHD, 5, 0, 1, 1);

        labelHA = new QLabel(EditFloatRegister);
        labelHA->setObjectName(QString::fromUtf8("labelHA"));
        sizePolicy1.setHeightForWidth(labelHA->sizePolicy().hasHeightForWidth());
        labelHA->setSizePolicy(sizePolicy1);

        gridLayout_YMM->addWidget(labelHA, 2, 0, 1, 1);

        labelHC = new QLabel(EditFloatRegister);
        labelHC->setObjectName(QString::fromUtf8("labelHC"));
        sizePolicy1.setHeightForWidth(labelHC->sizePolicy().hasHeightForWidth());
        labelHC->setSizePolicy(sizePolicy1);

        gridLayout_YMM->addWidget(labelHC, 4, 0, 1, 1);

        labelH9 = new QLabel(EditFloatRegister);
        labelH9->setObjectName(QString::fromUtf8("labelH9"));
        sizePolicy1.setHeightForWidth(labelH9->sizePolicy().hasHeightForWidth());
        labelH9->setSizePolicy(sizePolicy1);

        gridLayout_YMM->addWidget(labelH9, 1, 0, 1, 1);

        labelHE = new QLabel(EditFloatRegister);
        labelHE->setObjectName(QString::fromUtf8("labelHE"));
        sizePolicy1.setHeightForWidth(labelHE->sizePolicy().hasHeightForWidth());
        labelHE->setSizePolicy(sizePolicy1);

        gridLayout_YMM->addWidget(labelHE, 6, 0, 1, 1);

        labelHB = new QLabel(EditFloatRegister);
        labelHB->setObjectName(QString::fromUtf8("labelHB"));
        sizePolicy1.setHeightForWidth(labelHB->sizePolicy().hasHeightForWidth());
        labelHB->setSizePolicy(sizePolicy1);

        gridLayout_YMM->addWidget(labelHB, 3, 0, 1, 1);

        labelH8 = new QLabel(EditFloatRegister);
        labelH8->setObjectName(QString::fromUtf8("labelH8"));
        sizePolicy1.setHeightForWidth(labelH8->sizePolicy().hasHeightForWidth());
        labelH8->setSizePolicy(sizePolicy1);

        gridLayout_YMM->addWidget(labelH8, 0, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        longLongEdit0 = new QLineEdit(EditFloatRegister);
        longLongEdit0->setObjectName(QString::fromUtf8("longLongEdit0"));

        horizontalLayout_9->addWidget(longLongEdit0);

        longLongEdit1 = new QLineEdit(EditFloatRegister);
        longLongEdit1->setObjectName(QString::fromUtf8("longLongEdit1"));

        horizontalLayout_9->addWidget(longLongEdit1);


        gridLayout_YMM->addLayout(horizontalLayout_9, 6, 1, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        doubleEdit0 = new QLineEdit(EditFloatRegister);
        doubleEdit0->setObjectName(QString::fromUtf8("doubleEdit0"));

        horizontalLayout_6->addWidget(doubleEdit0);

        doubleEdit1 = new QLineEdit(EditFloatRegister);
        doubleEdit1->setObjectName(QString::fromUtf8("doubleEdit1"));

        horizontalLayout_6->addWidget(doubleEdit1);


        gridLayout_YMM->addLayout(horizontalLayout_6, 5, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        floatEdit0 = new QLineEdit(EditFloatRegister);
        floatEdit0->setObjectName(QString::fromUtf8("floatEdit0"));

        horizontalLayout_5->addWidget(floatEdit0);

        floatEdit1 = new QLineEdit(EditFloatRegister);
        floatEdit1->setObjectName(QString::fromUtf8("floatEdit1"));

        horizontalLayout_5->addWidget(floatEdit1);

        floatEdit2 = new QLineEdit(EditFloatRegister);
        floatEdit2->setObjectName(QString::fromUtf8("floatEdit2"));

        horizontalLayout_5->addWidget(floatEdit2);

        floatEdit3 = new QLineEdit(EditFloatRegister);
        floatEdit3->setObjectName(QString::fromUtf8("floatEdit3"));

        horizontalLayout_5->addWidget(floatEdit3);


        gridLayout_YMM->addLayout(horizontalLayout_5, 4, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        longEdit0 = new QLineEdit(EditFloatRegister);
        longEdit0->setObjectName(QString::fromUtf8("longEdit0"));

        horizontalLayout_4->addWidget(longEdit0);

        longEdit1 = new QLineEdit(EditFloatRegister);
        longEdit1->setObjectName(QString::fromUtf8("longEdit1"));

        horizontalLayout_4->addWidget(longEdit1);

        longEdit2 = new QLineEdit(EditFloatRegister);
        longEdit2->setObjectName(QString::fromUtf8("longEdit2"));

        horizontalLayout_4->addWidget(longEdit2);

        longEdit3 = new QLineEdit(EditFloatRegister);
        longEdit3->setObjectName(QString::fromUtf8("longEdit3"));

        horizontalLayout_4->addWidget(longEdit3);


        gridLayout_YMM->addLayout(horizontalLayout_4, 3, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        shortEdit0 = new QLineEdit(EditFloatRegister);
        shortEdit0->setObjectName(QString::fromUtf8("shortEdit0"));

        horizontalLayout_2->addWidget(shortEdit0);

        shortEdit1 = new QLineEdit(EditFloatRegister);
        shortEdit1->setObjectName(QString::fromUtf8("shortEdit1"));

        horizontalLayout_2->addWidget(shortEdit1);

        shortEdit2 = new QLineEdit(EditFloatRegister);
        shortEdit2->setObjectName(QString::fromUtf8("shortEdit2"));

        horizontalLayout_2->addWidget(shortEdit2);

        shortEdit3 = new QLineEdit(EditFloatRegister);
        shortEdit3->setObjectName(QString::fromUtf8("shortEdit3"));

        horizontalLayout_2->addWidget(shortEdit3);

        shortEdit4 = new QLineEdit(EditFloatRegister);
        shortEdit4->setObjectName(QString::fromUtf8("shortEdit4"));

        horizontalLayout_2->addWidget(shortEdit4);

        shortEdit5 = new QLineEdit(EditFloatRegister);
        shortEdit5->setObjectName(QString::fromUtf8("shortEdit5"));

        horizontalLayout_2->addWidget(shortEdit5);

        shortEdit6 = new QLineEdit(EditFloatRegister);
        shortEdit6->setObjectName(QString::fromUtf8("shortEdit6"));

        horizontalLayout_2->addWidget(shortEdit6);

        shortEdit7 = new QLineEdit(EditFloatRegister);
        shortEdit7->setObjectName(QString::fromUtf8("shortEdit7"));

        horizontalLayout_2->addWidget(shortEdit7);


        gridLayout_YMM->addLayout(horizontalLayout_2, 2, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labelH0 = new QLabel(EditFloatRegister);
        labelH0->setObjectName(QString::fromUtf8("labelH0"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelH0->sizePolicy().hasHeightForWidth());
        labelH0->setSizePolicy(sizePolicy2);
        labelH0->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(labelH0);

        labelH1 = new QLabel(EditFloatRegister);
        labelH1->setObjectName(QString::fromUtf8("labelH1"));
        sizePolicy2.setHeightForWidth(labelH1->sizePolicy().hasHeightForWidth());
        labelH1->setSizePolicy(sizePolicy2);
        labelH1->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(labelH1);

        labelH2 = new QLabel(EditFloatRegister);
        labelH2->setObjectName(QString::fromUtf8("labelH2"));
        sizePolicy2.setHeightForWidth(labelH2->sizePolicy().hasHeightForWidth());
        labelH2->setSizePolicy(sizePolicy2);
        labelH2->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(labelH2);

        labelH3 = new QLabel(EditFloatRegister);
        labelH3->setObjectName(QString::fromUtf8("labelH3"));
        sizePolicy2.setHeightForWidth(labelH3->sizePolicy().hasHeightForWidth());
        labelH3->setSizePolicy(sizePolicy2);
        labelH3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(labelH3);

        labelH4 = new QLabel(EditFloatRegister);
        labelH4->setObjectName(QString::fromUtf8("labelH4"));
        sizePolicy2.setHeightForWidth(labelH4->sizePolicy().hasHeightForWidth());
        labelH4->setSizePolicy(sizePolicy2);
        labelH4->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(labelH4);

        labelH5 = new QLabel(EditFloatRegister);
        labelH5->setObjectName(QString::fromUtf8("labelH5"));
        sizePolicy2.setHeightForWidth(labelH5->sizePolicy().hasHeightForWidth());
        labelH5->setSizePolicy(sizePolicy2);
        labelH5->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(labelH5);

        labelH6 = new QLabel(EditFloatRegister);
        labelH6->setObjectName(QString::fromUtf8("labelH6"));
        sizePolicy2.setHeightForWidth(labelH6->sizePolicy().hasHeightForWidth());
        labelH6->setSizePolicy(sizePolicy2);
        labelH6->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(labelH6);

        labelH7 = new QLabel(EditFloatRegister);
        labelH7->setObjectName(QString::fromUtf8("labelH7"));
        sizePolicy2.setHeightForWidth(labelH7->sizePolicy().hasHeightForWidth());
        labelH7->setSizePolicy(sizePolicy2);
        labelH7->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(labelH7);


        gridLayout_YMM->addLayout(horizontalLayout_3, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        hexEdit = new QLineEdit(EditFloatRegister);
        hexEdit->setObjectName(QString::fromUtf8("hexEdit"));
        hexEdit->setInputMethodHints(Qt::ImhUppercaseOnly);
        hexEdit->setMaxLength(32);

        horizontalLayout->addWidget(hexEdit);


        gridLayout_YMM->addLayout(horizontalLayout, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_YMM);

        line = new QFrame(EditFloatRegister);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        gridLayout_XMM = new QGridLayout();
        gridLayout_XMM->setObjectName(QString::fromUtf8("gridLayout_XMM"));
        labelLB = new QLabel(EditFloatRegister);
        labelLB->setObjectName(QString::fromUtf8("labelLB"));
        sizePolicy1.setHeightForWidth(labelLB->sizePolicy().hasHeightForWidth());
        labelLB->setSizePolicy(sizePolicy1);

        gridLayout_XMM->addWidget(labelLB, 4, 0, 1, 1);

        labelLowRegister = new QLabel(EditFloatRegister);
        labelLowRegister->setObjectName(QString::fromUtf8("labelLowRegister"));
        sizePolicy1.setHeightForWidth(labelLowRegister->sizePolicy().hasHeightForWidth());
        labelLowRegister->setSizePolicy(sizePolicy1);

        gridLayout_XMM->addWidget(labelLowRegister, 0, 0, 1, 1);

        labelL8 = new QLabel(EditFloatRegister);
        labelL8->setObjectName(QString::fromUtf8("labelL8"));
        sizePolicy1.setHeightForWidth(labelL8->sizePolicy().hasHeightForWidth());
        labelL8->setSizePolicy(sizePolicy1);

        gridLayout_XMM->addWidget(labelL8, 1, 0, 1, 1);

        labelLA = new QLabel(EditFloatRegister);
        labelLA->setObjectName(QString::fromUtf8("labelLA"));
        sizePolicy1.setHeightForWidth(labelLA->sizePolicy().hasHeightForWidth());
        labelLA->setSizePolicy(sizePolicy1);

        gridLayout_XMM->addWidget(labelLA, 3, 0, 1, 1);

        labelLC = new QLabel(EditFloatRegister);
        labelLC->setObjectName(QString::fromUtf8("labelLC"));
        sizePolicy1.setHeightForWidth(labelLC->sizePolicy().hasHeightForWidth());
        labelLC->setSizePolicy(sizePolicy1);

        gridLayout_XMM->addWidget(labelLC, 5, 0, 1, 1);

        labelL9 = new QLabel(EditFloatRegister);
        labelL9->setObjectName(QString::fromUtf8("labelL9"));
        sizePolicy1.setHeightForWidth(labelL9->sizePolicy().hasHeightForWidth());
        labelL9->setSizePolicy(sizePolicy1);

        gridLayout_XMM->addWidget(labelL9, 2, 0, 1, 1);

        labelLD = new QLabel(EditFloatRegister);
        labelLD->setObjectName(QString::fromUtf8("labelLD"));
        sizePolicy1.setHeightForWidth(labelLD->sizePolicy().hasHeightForWidth());
        labelLD->setSizePolicy(sizePolicy1);

        gridLayout_XMM->addWidget(labelLD, 6, 0, 1, 1);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        longLongEdit0_2 = new QLineEdit(EditFloatRegister);
        longLongEdit0_2->setObjectName(QString::fromUtf8("longLongEdit0_2"));

        horizontalLayout_17->addWidget(longLongEdit0_2);

        longLongEdit1_2 = new QLineEdit(EditFloatRegister);
        longLongEdit1_2->setObjectName(QString::fromUtf8("longLongEdit1_2"));

        horizontalLayout_17->addWidget(longLongEdit1_2);


        gridLayout_XMM->addLayout(horizontalLayout_17, 6, 1, 1, 1);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        doubleEdit0_2 = new QLineEdit(EditFloatRegister);
        doubleEdit0_2->setObjectName(QString::fromUtf8("doubleEdit0_2"));

        horizontalLayout_16->addWidget(doubleEdit0_2);

        doubleEdit1_2 = new QLineEdit(EditFloatRegister);
        doubleEdit1_2->setObjectName(QString::fromUtf8("doubleEdit1_2"));

        horizontalLayout_16->addWidget(doubleEdit1_2);


        gridLayout_XMM->addLayout(horizontalLayout_16, 5, 1, 1, 1);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        floatEdit0_2 = new QLineEdit(EditFloatRegister);
        floatEdit0_2->setObjectName(QString::fromUtf8("floatEdit0_2"));

        horizontalLayout_15->addWidget(floatEdit0_2);

        floatEdit1_2 = new QLineEdit(EditFloatRegister);
        floatEdit1_2->setObjectName(QString::fromUtf8("floatEdit1_2"));

        horizontalLayout_15->addWidget(floatEdit1_2);

        floatEdit2_2 = new QLineEdit(EditFloatRegister);
        floatEdit2_2->setObjectName(QString::fromUtf8("floatEdit2_2"));

        horizontalLayout_15->addWidget(floatEdit2_2);

        floatEdit3_2 = new QLineEdit(EditFloatRegister);
        floatEdit3_2->setObjectName(QString::fromUtf8("floatEdit3_2"));

        horizontalLayout_15->addWidget(floatEdit3_2);


        gridLayout_XMM->addLayout(horizontalLayout_15, 4, 1, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        longEdit0_2 = new QLineEdit(EditFloatRegister);
        longEdit0_2->setObjectName(QString::fromUtf8("longEdit0_2"));

        horizontalLayout_14->addWidget(longEdit0_2);

        longEdit1_2 = new QLineEdit(EditFloatRegister);
        longEdit1_2->setObjectName(QString::fromUtf8("longEdit1_2"));

        horizontalLayout_14->addWidget(longEdit1_2);

        longEdit2_2 = new QLineEdit(EditFloatRegister);
        longEdit2_2->setObjectName(QString::fromUtf8("longEdit2_2"));

        horizontalLayout_14->addWidget(longEdit2_2);

        longEdit3_2 = new QLineEdit(EditFloatRegister);
        longEdit3_2->setObjectName(QString::fromUtf8("longEdit3_2"));

        horizontalLayout_14->addWidget(longEdit3_2);


        gridLayout_XMM->addLayout(horizontalLayout_14, 3, 1, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        shortEdit0_2 = new QLineEdit(EditFloatRegister);
        shortEdit0_2->setObjectName(QString::fromUtf8("shortEdit0_2"));

        horizontalLayout_13->addWidget(shortEdit0_2);

        shortEdit1_2 = new QLineEdit(EditFloatRegister);
        shortEdit1_2->setObjectName(QString::fromUtf8("shortEdit1_2"));

        horizontalLayout_13->addWidget(shortEdit1_2);

        shortEdit2_2 = new QLineEdit(EditFloatRegister);
        shortEdit2_2->setObjectName(QString::fromUtf8("shortEdit2_2"));

        horizontalLayout_13->addWidget(shortEdit2_2);

        shortEdit3_2 = new QLineEdit(EditFloatRegister);
        shortEdit3_2->setObjectName(QString::fromUtf8("shortEdit3_2"));

        horizontalLayout_13->addWidget(shortEdit3_2);

        shortEdit4_2 = new QLineEdit(EditFloatRegister);
        shortEdit4_2->setObjectName(QString::fromUtf8("shortEdit4_2"));

        horizontalLayout_13->addWidget(shortEdit4_2);

        shortEdit5_2 = new QLineEdit(EditFloatRegister);
        shortEdit5_2->setObjectName(QString::fromUtf8("shortEdit5_2"));

        horizontalLayout_13->addWidget(shortEdit5_2);

        shortEdit6_2 = new QLineEdit(EditFloatRegister);
        shortEdit6_2->setObjectName(QString::fromUtf8("shortEdit6_2"));

        horizontalLayout_13->addWidget(shortEdit6_2);

        shortEdit7_2 = new QLineEdit(EditFloatRegister);
        shortEdit7_2->setObjectName(QString::fromUtf8("shortEdit7_2"));

        horizontalLayout_13->addWidget(shortEdit7_2);


        gridLayout_XMM->addLayout(horizontalLayout_13, 2, 1, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setSizeConstraint(QLayout::SetMinimumSize);
        labelL0 = new QLabel(EditFloatRegister);
        labelL0->setObjectName(QString::fromUtf8("labelL0"));
        sizePolicy2.setHeightForWidth(labelL0->sizePolicy().hasHeightForWidth());
        labelL0->setSizePolicy(sizePolicy2);
        labelL0->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(labelL0);

        labelL1 = new QLabel(EditFloatRegister);
        labelL1->setObjectName(QString::fromUtf8("labelL1"));
        sizePolicy2.setHeightForWidth(labelL1->sizePolicy().hasHeightForWidth());
        labelL1->setSizePolicy(sizePolicy2);
        labelL1->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(labelL1);

        labelL2 = new QLabel(EditFloatRegister);
        labelL2->setObjectName(QString::fromUtf8("labelL2"));
        sizePolicy2.setHeightForWidth(labelL2->sizePolicy().hasHeightForWidth());
        labelL2->setSizePolicy(sizePolicy2);
        labelL2->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(labelL2);

        labelL3 = new QLabel(EditFloatRegister);
        labelL3->setObjectName(QString::fromUtf8("labelL3"));
        sizePolicy2.setHeightForWidth(labelL3->sizePolicy().hasHeightForWidth());
        labelL3->setSizePolicy(sizePolicy2);
        labelL3->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(labelL3);

        labelL4 = new QLabel(EditFloatRegister);
        labelL4->setObjectName(QString::fromUtf8("labelL4"));
        sizePolicy2.setHeightForWidth(labelL4->sizePolicy().hasHeightForWidth());
        labelL4->setSizePolicy(sizePolicy2);
        labelL4->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(labelL4);

        labelL5 = new QLabel(EditFloatRegister);
        labelL5->setObjectName(QString::fromUtf8("labelL5"));
        sizePolicy2.setHeightForWidth(labelL5->sizePolicy().hasHeightForWidth());
        labelL5->setSizePolicy(sizePolicy2);
        labelL5->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(labelL5);

        labelL6 = new QLabel(EditFloatRegister);
        labelL6->setObjectName(QString::fromUtf8("labelL6"));
        sizePolicy2.setHeightForWidth(labelL6->sizePolicy().hasHeightForWidth());
        labelL6->setSizePolicy(sizePolicy2);
        labelL6->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(labelL6);

        labelL7 = new QLabel(EditFloatRegister);
        labelL7->setObjectName(QString::fromUtf8("labelL7"));
        sizePolicy2.setHeightForWidth(labelL7->sizePolicy().hasHeightForWidth());
        labelL7->setSizePolicy(sizePolicy2);
        labelL7->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(labelL7);


        gridLayout_XMM->addLayout(horizontalLayout_12, 1, 1, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        hexEdit_2 = new QLineEdit(EditFloatRegister);
        hexEdit_2->setObjectName(QString::fromUtf8("hexEdit_2"));
        hexEdit_2->setInputMethodHints(Qt::ImhUppercaseOnly);
        hexEdit_2->setMaxLength(32);

        horizontalLayout_11->addWidget(hexEdit_2);


        gridLayout_XMM->addLayout(horizontalLayout_11, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_XMM);


        horizontalLayout_7->addLayout(verticalLayout_2);

        scrollAVX512 = new QScrollBar(EditFloatRegister);
        scrollAVX512->setObjectName(QString::fromUtf8("scrollAVX512"));
        scrollAVX512->setMaximum(1);
        scrollAVX512->setPageStep(1);
        scrollAVX512->setValue(1);
        scrollAVX512->setOrientation(Qt::Vertical);

        horizontalLayout_7->addWidget(scrollAVX512);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        radioHex = new QRadioButton(EditFloatRegister);
        radioHex->setObjectName(QString::fromUtf8("radioHex"));

        horizontalLayout_18->addWidget(radioHex);

        radioSigned = new QRadioButton(EditFloatRegister);
        radioSigned->setObjectName(QString::fromUtf8("radioSigned"));
        radioSigned->setChecked(true);

        horizontalLayout_18->addWidget(radioSigned);

        radioUnsigned = new QRadioButton(EditFloatRegister);
        radioUnsigned->setObjectName(QString::fromUtf8("radioUnsigned"));

        horizontalLayout_18->addWidget(radioUnsigned);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_2);

        buttonOk = new QPushButton(EditFloatRegister);
        buttonOk->setObjectName(QString::fromUtf8("buttonOk"));

        horizontalLayout_18->addWidget(buttonOk);

        buttonCancel = new QPushButton(EditFloatRegister);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));

        horizontalLayout_18->addWidget(buttonCancel);


        verticalLayout->addLayout(horizontalLayout_18);

        QWidget::setTabOrder(hexEdit, shortEdit0);
        QWidget::setTabOrder(shortEdit0, shortEdit1);
        QWidget::setTabOrder(shortEdit1, shortEdit2);
        QWidget::setTabOrder(shortEdit2, shortEdit3);
        QWidget::setTabOrder(shortEdit3, shortEdit4);
        QWidget::setTabOrder(shortEdit4, shortEdit5);
        QWidget::setTabOrder(shortEdit5, shortEdit6);
        QWidget::setTabOrder(shortEdit6, shortEdit7);
        QWidget::setTabOrder(shortEdit7, longEdit0);
        QWidget::setTabOrder(longEdit0, longEdit1);
        QWidget::setTabOrder(longEdit1, longEdit2);
        QWidget::setTabOrder(longEdit2, longEdit3);
        QWidget::setTabOrder(longEdit3, floatEdit0);
        QWidget::setTabOrder(floatEdit0, floatEdit1);
        QWidget::setTabOrder(floatEdit1, floatEdit2);
        QWidget::setTabOrder(floatEdit2, floatEdit3);
        QWidget::setTabOrder(floatEdit3, doubleEdit0);
        QWidget::setTabOrder(doubleEdit0, doubleEdit1);
        QWidget::setTabOrder(doubleEdit1, longLongEdit0);
        QWidget::setTabOrder(longLongEdit0, longLongEdit1);
        QWidget::setTabOrder(longLongEdit1, hexEdit_2);
        QWidget::setTabOrder(hexEdit_2, shortEdit0_2);
        QWidget::setTabOrder(shortEdit0_2, shortEdit1_2);
        QWidget::setTabOrder(shortEdit1_2, shortEdit2_2);
        QWidget::setTabOrder(shortEdit2_2, shortEdit3_2);
        QWidget::setTabOrder(shortEdit3_2, shortEdit4_2);
        QWidget::setTabOrder(shortEdit4_2, shortEdit5_2);
        QWidget::setTabOrder(shortEdit5_2, shortEdit6_2);
        QWidget::setTabOrder(shortEdit6_2, shortEdit7_2);
        QWidget::setTabOrder(shortEdit7_2, longEdit0_2);
        QWidget::setTabOrder(longEdit0_2, longEdit1_2);
        QWidget::setTabOrder(longEdit1_2, longEdit2_2);
        QWidget::setTabOrder(longEdit2_2, longEdit3_2);
        QWidget::setTabOrder(longEdit3_2, floatEdit0_2);
        QWidget::setTabOrder(floatEdit0_2, floatEdit1_2);
        QWidget::setTabOrder(floatEdit1_2, floatEdit2_2);
        QWidget::setTabOrder(floatEdit2_2, floatEdit3_2);
        QWidget::setTabOrder(floatEdit3_2, doubleEdit0_2);
        QWidget::setTabOrder(doubleEdit0_2, doubleEdit1_2);
        QWidget::setTabOrder(doubleEdit1_2, longLongEdit0_2);
        QWidget::setTabOrder(longLongEdit0_2, longLongEdit1_2);
        QWidget::setTabOrder(longLongEdit1_2, radioHex);
        QWidget::setTabOrder(radioHex, radioSigned);
        QWidget::setTabOrder(radioSigned, radioUnsigned);

        retranslateUi(EditFloatRegister);
        QObject::connect(buttonOk, SIGNAL(clicked()), EditFloatRegister, SLOT(accept()));
        QObject::connect(buttonCancel, SIGNAL(clicked()), EditFloatRegister, SLOT(reject()));

        buttonOk->setDefault(true);


        QMetaObject::connectSlotsByName(EditFloatRegister);
    } // setupUi

    void retranslateUi(QDialog *EditFloatRegister)
    {
        EditFloatRegister->setWindowTitle(QApplication::translate("EditFloatRegister", "Dialog", nullptr));
        labelHD->setText(QApplication::translate("EditFloatRegister", "Double:", nullptr));
        labelHA->setText(QApplication::translate("EditFloatRegister", "Word:", nullptr));
        labelHC->setText(QApplication::translate("EditFloatRegister", "Float:", nullptr));
        labelH9->setText(QApplication::translate("EditFloatRegister", "Byte:", nullptr));
        labelHE->setText(QApplication::translate("EditFloatRegister", "Qword:", nullptr));
        labelHB->setText(QApplication::translate("EditFloatRegister", "Dword:", nullptr));
        labelH8->setText(QApplication::translate("EditFloatRegister", "High:", nullptr));
        shortEdit7->setText(QString());
        labelH0->setText(QApplication::translate("EditFloatRegister", "10-11", nullptr));
        labelH1->setText(QApplication::translate("EditFloatRegister", "12-13", nullptr));
        labelH2->setText(QApplication::translate("EditFloatRegister", "14-15", nullptr));
        labelH3->setText(QApplication::translate("EditFloatRegister", "16-17", nullptr));
        labelH4->setText(QApplication::translate("EditFloatRegister", "18-19", nullptr));
        labelH5->setText(QApplication::translate("EditFloatRegister", "1A-1B", nullptr));
        labelH6->setText(QApplication::translate("EditFloatRegister", "1C-1D", nullptr));
        labelH7->setText(QApplication::translate("EditFloatRegister", "1E-1F", nullptr));
        labelLB->setText(QApplication::translate("EditFloatRegister", "Float:", nullptr));
        labelLowRegister->setText(QApplication::translate("EditFloatRegister", "Low:", nullptr));
        labelL8->setText(QApplication::translate("EditFloatRegister", "Byte:", nullptr));
        labelLA->setText(QApplication::translate("EditFloatRegister", "Dword:", nullptr));
        labelLC->setText(QApplication::translate("EditFloatRegister", "Double:", nullptr));
        labelL9->setText(QApplication::translate("EditFloatRegister", "Word:", nullptr));
        labelLD->setText(QApplication::translate("EditFloatRegister", "Qword:", nullptr));
        shortEdit7_2->setText(QString());
        labelL0->setText(QApplication::translate("EditFloatRegister", "0-1", nullptr));
        labelL1->setText(QApplication::translate("EditFloatRegister", "2-3", nullptr));
        labelL2->setText(QApplication::translate("EditFloatRegister", "4-5", nullptr));
        labelL3->setText(QApplication::translate("EditFloatRegister", "6-7", nullptr));
        labelL4->setText(QApplication::translate("EditFloatRegister", "8-9", nullptr));
        labelL5->setText(QApplication::translate("EditFloatRegister", "A-B", nullptr));
        labelL6->setText(QApplication::translate("EditFloatRegister", "C-D", nullptr));
        labelL7->setText(QApplication::translate("EditFloatRegister", "E-F", nullptr));
        radioHex->setText(QApplication::translate("EditFloatRegister", "&Hexadecimal", nullptr));
        radioSigned->setText(QApplication::translate("EditFloatRegister", "&Signed", nullptr));
        radioUnsigned->setText(QApplication::translate("EditFloatRegister", "&Unsigned", nullptr));
        buttonOk->setText(QApplication::translate("EditFloatRegister", "&OK", nullptr));
        buttonCancel->setText(QApplication::translate("EditFloatRegister", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditFloatRegister: public Ui_EditFloatRegister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITFLOATREGISTER_H
