/********************************************************************************
** Form generated from reading UI file 'CPUWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CPUWIDGET_H
#define UI_CPUWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CPUWidget
{
public:
    QAction *actionGoto;
    QVBoxLayout *verticalLayout;
    QSplitter *mVSplitter;
    QSplitter *mTopHSplitter;
    QSplitter *mTopLeftVSplitter;
    QSplitter *mTopLeftUpperHSplitter;
    QFrame *mTopLeftUpperLeftFrame;
    QVBoxLayout *mTopLeftUpperLeftFrameLayout;
    QFrame *mTopLeftUpperRightFrame;
    QVBoxLayout *mTopLeftUpperRightFrameLayout;
    QFrame *mTopLeftLowerFrame;
    QVBoxLayout *mTopLeftLowerFrameLayout;
    QSplitter *mTopRightVSplitter;
    QFrame *mTopRightUpperFrame;
    QVBoxLayout *mTopRightUpperFrameLayout;
    QFrame *mTopRightLowerFrame;
    QVBoxLayout *mTopRightLowerFrameLayout;
    QSplitter *mBotHSplitter;
    QFrame *mBotLeftFrame;
    QVBoxLayout *mBotLeftFrameLayout;
    QFrame *mBotRightFrame;
    QVBoxLayout *mBotRightFrameLayout;

    void setupUi(QWidget *CPUWidget)
    {
        if (CPUWidget->objectName().isEmpty())
            CPUWidget->setObjectName(QString::fromUtf8("CPUWidget"));
        CPUWidget->resize(800, 600);
        actionGoto = new QAction(CPUWidget);
        actionGoto->setObjectName(QString::fromUtf8("actionGoto"));
        verticalLayout = new QVBoxLayout(CPUWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mVSplitter = new QSplitter(CPUWidget);
        mVSplitter->setObjectName(QString::fromUtf8("mVSplitter"));
        mVSplitter->setOrientation(Qt::Vertical);
        mVSplitter->setHandleWidth(1);
        mVSplitter->setChildrenCollapsible(false);
        mTopHSplitter = new QSplitter(mVSplitter);
        mTopHSplitter->setObjectName(QString::fromUtf8("mTopHSplitter"));
        mTopHSplitter->setOrientation(Qt::Horizontal);
        mTopHSplitter->setHandleWidth(1);
        mTopHSplitter->setChildrenCollapsible(false);
        mTopLeftVSplitter = new QSplitter(mTopHSplitter);
        mTopLeftVSplitter->setObjectName(QString::fromUtf8("mTopLeftVSplitter"));
        mTopLeftVSplitter->setOrientation(Qt::Vertical);
        mTopLeftVSplitter->setHandleWidth(1);
        mTopLeftVSplitter->setChildrenCollapsible(false);
        mTopLeftUpperHSplitter = new QSplitter(mTopLeftVSplitter);
        mTopLeftUpperHSplitter->setObjectName(QString::fromUtf8("mTopLeftUpperHSplitter"));
        mTopLeftUpperHSplitter->setOrientation(Qt::Horizontal);
        mTopLeftUpperHSplitter->setHandleWidth(1);
        mTopLeftUpperHSplitter->setChildrenCollapsible(false);
        mTopLeftUpperLeftFrame = new QFrame(mTopLeftUpperHSplitter);
        mTopLeftUpperLeftFrame->setObjectName(QString::fromUtf8("mTopLeftUpperLeftFrame"));
        mTopLeftUpperLeftFrame->setFrameShape(QFrame::NoFrame);
        mTopLeftUpperLeftFrame->setFrameShadow(QFrame::Raised);
        mTopLeftUpperLeftFrameLayout = new QVBoxLayout(mTopLeftUpperLeftFrame);
        mTopLeftUpperLeftFrameLayout->setSpacing(0);
        mTopLeftUpperLeftFrameLayout->setObjectName(QString::fromUtf8("mTopLeftUpperLeftFrameLayout"));
        mTopLeftUpperLeftFrameLayout->setContentsMargins(0, 0, 0, 0);
        mTopLeftUpperHSplitter->addWidget(mTopLeftUpperLeftFrame);
        mTopLeftUpperRightFrame = new QFrame(mTopLeftUpperHSplitter);
        mTopLeftUpperRightFrame->setObjectName(QString::fromUtf8("mTopLeftUpperRightFrame"));
        mTopLeftUpperRightFrame->setFrameShape(QFrame::NoFrame);
        mTopLeftUpperRightFrame->setFrameShadow(QFrame::Raised);
        mTopLeftUpperRightFrameLayout = new QVBoxLayout(mTopLeftUpperRightFrame);
        mTopLeftUpperRightFrameLayout->setSpacing(0);
        mTopLeftUpperRightFrameLayout->setObjectName(QString::fromUtf8("mTopLeftUpperRightFrameLayout"));
        mTopLeftUpperRightFrameLayout->setContentsMargins(0, 0, 0, 0);
        mTopLeftUpperHSplitter->addWidget(mTopLeftUpperRightFrame);
        mTopLeftVSplitter->addWidget(mTopLeftUpperHSplitter);
        mTopLeftLowerFrame = new QFrame(mTopLeftVSplitter);
        mTopLeftLowerFrame->setObjectName(QString::fromUtf8("mTopLeftLowerFrame"));
        mTopLeftLowerFrame->setFrameShape(QFrame::NoFrame);
        mTopLeftLowerFrame->setFrameShadow(QFrame::Raised);
        mTopLeftLowerFrameLayout = new QVBoxLayout(mTopLeftLowerFrame);
        mTopLeftLowerFrameLayout->setSpacing(0);
        mTopLeftLowerFrameLayout->setObjectName(QString::fromUtf8("mTopLeftLowerFrameLayout"));
        mTopLeftLowerFrameLayout->setContentsMargins(0, 0, 0, 0);
        mTopLeftVSplitter->addWidget(mTopLeftLowerFrame);
        mTopHSplitter->addWidget(mTopLeftVSplitter);
        mTopRightVSplitter = new QSplitter(mTopHSplitter);
        mTopRightVSplitter->setObjectName(QString::fromUtf8("mTopRightVSplitter"));
        mTopRightVSplitter->setOrientation(Qt::Vertical);
        mTopRightVSplitter->setHandleWidth(1);
        mTopRightVSplitter->setChildrenCollapsible(false);
        mTopRightUpperFrame = new QFrame(mTopRightVSplitter);
        mTopRightUpperFrame->setObjectName(QString::fromUtf8("mTopRightUpperFrame"));
        mTopRightUpperFrame->setFrameShape(QFrame::NoFrame);
        mTopRightUpperFrame->setFrameShadow(QFrame::Raised);
        mTopRightUpperFrameLayout = new QVBoxLayout(mTopRightUpperFrame);
        mTopRightUpperFrameLayout->setSpacing(0);
        mTopRightUpperFrameLayout->setObjectName(QString::fromUtf8("mTopRightUpperFrameLayout"));
        mTopRightUpperFrameLayout->setContentsMargins(0, 0, 0, 0);
        mTopRightVSplitter->addWidget(mTopRightUpperFrame);
        mTopRightLowerFrame = new QFrame(mTopRightVSplitter);
        mTopRightLowerFrame->setObjectName(QString::fromUtf8("mTopRightLowerFrame"));
        mTopRightLowerFrame->setFrameShape(QFrame::NoFrame);
        mTopRightLowerFrame->setFrameShadow(QFrame::Raised);
        mTopRightLowerFrameLayout = new QVBoxLayout(mTopRightLowerFrame);
        mTopRightLowerFrameLayout->setSpacing(0);
        mTopRightLowerFrameLayout->setObjectName(QString::fromUtf8("mTopRightLowerFrameLayout"));
        mTopRightLowerFrameLayout->setContentsMargins(0, 0, 0, 0);
        mTopRightVSplitter->addWidget(mTopRightLowerFrame);
        mTopHSplitter->addWidget(mTopRightVSplitter);
        mVSplitter->addWidget(mTopHSplitter);
        mBotHSplitter = new QSplitter(mVSplitter);
        mBotHSplitter->setObjectName(QString::fromUtf8("mBotHSplitter"));
        mBotHSplitter->setOrientation(Qt::Horizontal);
        mBotHSplitter->setHandleWidth(1);
        mBotHSplitter->setChildrenCollapsible(false);
        mBotLeftFrame = new QFrame(mBotHSplitter);
        mBotLeftFrame->setObjectName(QString::fromUtf8("mBotLeftFrame"));
        mBotLeftFrame->setFrameShape(QFrame::NoFrame);
        mBotLeftFrame->setFrameShadow(QFrame::Raised);
        mBotLeftFrameLayout = new QVBoxLayout(mBotLeftFrame);
        mBotLeftFrameLayout->setSpacing(0);
        mBotLeftFrameLayout->setObjectName(QString::fromUtf8("mBotLeftFrameLayout"));
        mBotLeftFrameLayout->setContentsMargins(0, 0, 0, 0);
        mBotHSplitter->addWidget(mBotLeftFrame);
        mBotRightFrame = new QFrame(mBotHSplitter);
        mBotRightFrame->setObjectName(QString::fromUtf8("mBotRightFrame"));
        mBotRightFrame->setFrameShape(QFrame::NoFrame);
        mBotRightFrame->setFrameShadow(QFrame::Raised);
        mBotRightFrameLayout = new QVBoxLayout(mBotRightFrame);
        mBotRightFrameLayout->setSpacing(0);
        mBotRightFrameLayout->setObjectName(QString::fromUtf8("mBotRightFrameLayout"));
        mBotRightFrameLayout->setContentsMargins(0, 0, 0, 0);
        mBotHSplitter->addWidget(mBotRightFrame);
        mVSplitter->addWidget(mBotHSplitter);

        verticalLayout->addWidget(mVSplitter);


        retranslateUi(CPUWidget);

        QMetaObject::connectSlotsByName(CPUWidget);
    } // setupUi

    void retranslateUi(QWidget *CPUWidget)
    {
        CPUWidget->setWindowTitle(QApplication::translate("CPUWidget", "Form", nullptr));
        actionGoto->setText(QApplication::translate("CPUWidget", "Goto", nullptr));
#ifndef QT_NO_SHORTCUT
        actionGoto->setShortcut(QApplication::translate("CPUWidget", "Ctrl+G", nullptr));
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class CPUWidget: public Ui_CPUWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CPUWIDGET_H
