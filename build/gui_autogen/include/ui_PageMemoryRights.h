/********************************************************************************
** Form generated from reading UI file 'PageMemoryRights.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEMEMORYRIGHTS_H
#define UI_PAGEMEMORYRIGHTS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PageMemoryRights
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QTableWidget *pagetableWidget;
    QHBoxLayout *buttonsLayout;
    QPushButton *btnSelectall;
    QPushButton *btnDeselectall;
    QVBoxLayout *verticalLayoutGroup;
    QGroupBox *rightsGroup;
    QFormLayout *formLayout;
    QRadioButton *radioNoaccess;
    QRadioButton *radioReadonly;
    QRadioButton *radioReadwrite;
    QRadioButton *radioExecute;
    QRadioButton *radioExecuteread;
    QRadioButton *radioFullaccess;
    QRadioButton *radioWritecopy;
    QRadioButton *radioExecutewritecopy;
    QPushButton *btnSetrights;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QCheckBox *chkPageguard;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *LnEdStatus;
    QPushButton *pushButton;

    void setupUi(QDialog *PageMemoryRights)
    {
        if (PageMemoryRights->objectName().isEmpty())
            PageMemoryRights->setObjectName(QString::fromUtf8("PageMemoryRights"));
        PageMemoryRights->resize(445, 349);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PageMemoryRights->sizePolicy().hasHeightForWidth());
        PageMemoryRights->setSizePolicy(sizePolicy);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("memory-map");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8(":/Default/icons/memory-map.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        PageMemoryRights->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(PageMemoryRights);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pagetableWidget = new QTableWidget(PageMemoryRights);
        pagetableWidget->setObjectName(QString::fromUtf8("pagetableWidget"));
        pagetableWidget->setEnabled(true);
        pagetableWidget->setAutoScroll(true);
        pagetableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        pagetableWidget->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(pagetableWidget);

        buttonsLayout = new QHBoxLayout();
        buttonsLayout->setObjectName(QString::fromUtf8("buttonsLayout"));
        btnSelectall = new QPushButton(PageMemoryRights);
        btnSelectall->setObjectName(QString::fromUtf8("btnSelectall"));

        buttonsLayout->addWidget(btnSelectall);

        btnDeselectall = new QPushButton(PageMemoryRights);
        btnDeselectall->setObjectName(QString::fromUtf8("btnDeselectall"));

        buttonsLayout->addWidget(btnDeselectall);


        verticalLayout->addLayout(buttonsLayout);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayoutGroup = new QVBoxLayout();
        verticalLayoutGroup->setObjectName(QString::fromUtf8("verticalLayoutGroup"));
        rightsGroup = new QGroupBox(PageMemoryRights);
        rightsGroup->setObjectName(QString::fromUtf8("rightsGroup"));
        formLayout = new QFormLayout(rightsGroup);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        radioNoaccess = new QRadioButton(rightsGroup);
        radioNoaccess->setObjectName(QString::fromUtf8("radioNoaccess"));

        formLayout->setWidget(0, QFormLayout::LabelRole, radioNoaccess);

        radioReadonly = new QRadioButton(rightsGroup);
        radioReadonly->setObjectName(QString::fromUtf8("radioReadonly"));

        formLayout->setWidget(1, QFormLayout::LabelRole, radioReadonly);

        radioReadwrite = new QRadioButton(rightsGroup);
        radioReadwrite->setObjectName(QString::fromUtf8("radioReadwrite"));

        formLayout->setWidget(2, QFormLayout::LabelRole, radioReadwrite);

        radioExecute = new QRadioButton(rightsGroup);
        radioExecute->setObjectName(QString::fromUtf8("radioExecute"));

        formLayout->setWidget(3, QFormLayout::LabelRole, radioExecute);

        radioExecuteread = new QRadioButton(rightsGroup);
        radioExecuteread->setObjectName(QString::fromUtf8("radioExecuteread"));

        formLayout->setWidget(4, QFormLayout::LabelRole, radioExecuteread);

        radioFullaccess = new QRadioButton(rightsGroup);
        radioFullaccess->setObjectName(QString::fromUtf8("radioFullaccess"));

        formLayout->setWidget(5, QFormLayout::LabelRole, radioFullaccess);

        radioWritecopy = new QRadioButton(rightsGroup);
        radioWritecopy->setObjectName(QString::fromUtf8("radioWritecopy"));

        formLayout->setWidget(6, QFormLayout::LabelRole, radioWritecopy);

        radioExecutewritecopy = new QRadioButton(rightsGroup);
        radioExecutewritecopy->setObjectName(QString::fromUtf8("radioExecutewritecopy"));

        formLayout->setWidget(7, QFormLayout::LabelRole, radioExecutewritecopy);


        verticalLayoutGroup->addWidget(rightsGroup);

        btnSetrights = new QPushButton(PageMemoryRights);
        btnSetrights->setObjectName(QString::fromUtf8("btnSetrights"));

        verticalLayoutGroup->addWidget(btnSetrights);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        chkPageguard = new QCheckBox(PageMemoryRights);
        chkPageguard->setObjectName(QString::fromUtf8("chkPageguard"));

        horizontalLayout_2->addWidget(chkPageguard);


        verticalLayoutGroup->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayoutGroup);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        label = new QLabel(PageMemoryRights);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        LnEdStatus = new QLineEdit(PageMemoryRights);
        LnEdStatus->setObjectName(QString::fromUtf8("LnEdStatus"));
        LnEdStatus->setReadOnly(true);

        horizontalLayout->addWidget(LnEdStatus);

        pushButton = new QPushButton(PageMemoryRights);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout);

        QWidget::setTabOrder(pagetableWidget, btnSelectall);
        QWidget::setTabOrder(btnSelectall, btnDeselectall);
        QWidget::setTabOrder(btnDeselectall, radioNoaccess);
        QWidget::setTabOrder(radioNoaccess, radioReadonly);
        QWidget::setTabOrder(radioReadonly, radioReadwrite);
        QWidget::setTabOrder(radioReadwrite, radioExecute);
        QWidget::setTabOrder(radioExecute, radioExecuteread);
        QWidget::setTabOrder(radioExecuteread, radioFullaccess);
        QWidget::setTabOrder(radioFullaccess, radioWritecopy);
        QWidget::setTabOrder(radioWritecopy, radioExecutewritecopy);
        QWidget::setTabOrder(radioExecutewritecopy, btnSetrights);
        QWidget::setTabOrder(btnSetrights, chkPageguard);
        QWidget::setTabOrder(chkPageguard, LnEdStatus);

        retranslateUi(PageMemoryRights);
        QObject::connect(pushButton, SIGNAL(clicked()), PageMemoryRights, SLOT(reject()));

        QMetaObject::connectSlotsByName(PageMemoryRights);
    } // setupUi

    void retranslateUi(QDialog *PageMemoryRights)
    {
        PageMemoryRights->setWindowTitle(QApplication::translate("PageMemoryRights", "Set Page Memory Rights", nullptr));
        btnSelectall->setText(QApplication::translate("PageMemoryRights", "Select ALL", nullptr));
        btnDeselectall->setText(QApplication::translate("PageMemoryRights", "Deselect ALL", nullptr));
        rightsGroup->setTitle(QApplication::translate("PageMemoryRights", "Rights", nullptr));
        radioNoaccess->setText(QApplication::translate("PageMemoryRights", "NO ACCESS", nullptr));
        radioReadonly->setText(QApplication::translate("PageMemoryRights", "READ ONLY", nullptr));
        radioReadwrite->setText(QApplication::translate("PageMemoryRights", "READ WRITE", nullptr));
        radioExecute->setText(QApplication::translate("PageMemoryRights", "EXECUTE", nullptr));
        radioExecuteread->setText(QApplication::translate("PageMemoryRights", "EXECUTE READ", nullptr));
        radioFullaccess->setText(QApplication::translate("PageMemoryRights", "FULL ACCESS", nullptr));
        radioWritecopy->setText(QApplication::translate("PageMemoryRights", "WRITE COPY", nullptr));
        radioExecutewritecopy->setText(QApplication::translate("PageMemoryRights", "EXECUTE WRITE COPY", nullptr));
        btnSetrights->setText(QApplication::translate("PageMemoryRights", "Set Rights", nullptr));
        chkPageguard->setText(QApplication::translate("PageMemoryRights", "PAGE GUARD", nullptr));
        label->setText(QApplication::translate("PageMemoryRights", "Press CTRL or SHIFT key to select multiple pages", nullptr));
        pushButton->setText(QApplication::translate("PageMemoryRights", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageMemoryRights: public Ui_PageMemoryRights {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEMEMORYRIGHTS_H
