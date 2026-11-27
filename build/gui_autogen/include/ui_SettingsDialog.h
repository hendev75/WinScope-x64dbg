/********************************************************************************
** Form generated from reading UI file 'SettingsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabEvents;
    QGridLayout *gridLayout;
    QCheckBox *chkDllLoad;
    QCheckBox *chkThreadStart;
    QCheckBox *chkExitBreakpoint;
    QCheckBox *chkThreadNameSet;
    QCheckBox *chkDllLoadSystem;
    QSpacerItem *verticalSpacer_4;
    QCheckBox *chkThreadEntry;
    QCheckBox *chkDebugStrings;
    QCheckBox *chkThreadEnd;
    QCheckBox *chkTlsCallbacksSystem;
    QCheckBox *chkDllUnloadSystem;
    QLabel *lblBreakOn;
    QCheckBox *chkDllUnload;
    QCheckBox *chkTlsCallbacks;
    QCheckBox *chkSystemBreakpoint;
    QCheckBox *chkEntryBreakpoint;
    QCheckBox *chkDllEntrySystem;
    QCheckBox *chkDllEntry;
    QLabel *label_2;
    QWidget *tabEngine;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBoxCalculationType;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioSigned;
    QRadioButton *radioUnsigned;
    QGroupBox *groupBoxDebugEngine;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioTitanEngine;
    QRadioButton *radioStandard;
    QGroupBox *groupBoxDefaultBreakpointType;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *layoutBreakpointType;
    QRadioButton *radioInt3Short;
    QRadioButton *radioInt3Long;
    QRadioButton *radioUd2;
    QCheckBox *chkUndecorateSymbolNames;
    QCheckBox *chkEnableDebugPrivilege;
    QCheckBox *chkEnableSourceDebugging;
    QCheckBox *chkDisableDatabaseCompression;
    QCheckBox *chkSaveDatabaseInProgramDirectory;
    QCheckBox *chkSkipInt3Stepping;
    QCheckBox *chkNoScriptTimeout;
    QCheckBox *chkIgnoreInconsistentBreakpoints;
    QCheckBox *chkHardcoreThreadSwitchWarning;
    QCheckBox *chkVerboseExceptionLogging;
    QCheckBox *chkNoWow64SingleStepWorkaround;
    QCheckBox *chkDisableAslr;
    QCheckBox *chkDetachOnAttach;
    QCheckBox *chkDetachOnExit;
    QHBoxLayout *horizontalLayoutMaxTraceCount;
    QLabel *lblMaxTraceCount;
    QSpinBox *spinMaxTraceCount;
    QHBoxLayout *horizontalLayoutAnimateInterval;
    QLabel *lblAnimateInterval;
    QSpinBox *spinAnimateInterval;
    QSpacerItem *verticalSpacer;
    QLabel *label_4;
    QWidget *tabExceptions;
    QVBoxLayout *verticalLayout_5;
    QLabel *lblExceptionFilters;
    QHBoxLayout *horizontalLayoutExceptions;
    QListWidget *listExceptions;
    QVBoxLayout *layoutExceptionButtons;
    QSpacerItem *verticalSpacerExceptionsTop;
    QPushButton *btnIgnoreRange;
    QPushButton *btnDeleteRange;
    QPushButton *btnIgnoreLast;
    QPushButton *btnIgnoreFirst;
    QGroupBox *groupBoBreakOn;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioFirstChance;
    QRadioButton *radioSecondChance;
    QRadioButton *radioDoNotBreak;
    QGroupBox *groupBoxLogging;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *chkLogException;
    QGroupBox *groupBoxExceptionHandledBy;
    QVBoxLayout *verticalLayout_8;
    QRadioButton *radioHandledByDebugger;
    QRadioButton *radioHandledByDebuggee;
    QSpacerItem *verticalSpacerExceptionsBottom;
    QWidget *tabDisasm;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *chkArgumentSpaces;
    QCheckBox *chkTabBetweenMnemonicAndArguments;
    QCheckBox *chkHidePointerSizes;
    QCheckBox *chkHideNormalSegments;
    QCheckBox *chkMemorySpaces;
    QCheckBox *chkUppercase;
    QCheckBox *chkOnlyCipAutoComments;
    QCheckBox *chkNoHighlightOperands;
    QCheckBox *chkNoCurrentModuleText;
    QCheckBox *chkPermanentHighlightingMode;
    QCheckBox *chkNoBranchDisasmPreview;
    QCheckBox *chkUseRunTrace;
    QHBoxLayout *layoutValueNotation;
    QLabel *labelValueNotation;
    QComboBox *comboValueNotation;
    QCheckBox *chkNoSourceLinesAutoComments;
    QCheckBox *chkDoubleClickAssemble;
    QHBoxLayout *layoutMaximumModuleNameSize;
    QLabel *lblMaximumModuleNameSize;
    QSpinBox *spinMaximumModuleNameSize;
    QSpacerItem *verticalSpacerDisasm;
    QWidget *tabGui;
    QVBoxLayout *verticalLayout_11;
    QCheckBox *chkFpuRegistersLittleEndian;
    QCheckBox *chkSaveColumnOrder;
    QCheckBox *chkNoCloseDialog;
    QCheckBox *chkSaveLoadTabOrder;
    QCheckBox *chkSidebarWatchLabels;
    QCheckBox *chkNoForegroundWindow;
    QCheckBox *chkShowGraphRva;
    QCheckBox *chkGraphZoomMode;
    QCheckBox *chkAutoFollowInStack;
    QCheckBox *chkShowExitConfirmation;
    QCheckBox *chkShowAttachConfirmation;
    QCheckBox *chkDisableAutoComplete;
    QCheckBox *chkHideSeasonalIcons;
    QCheckBox *chkQtHighDpiScaling;
    QCheckBox *chkWindowLongPath;
    QCheckBox *chkNoIcons;
    QCheckBox *chkAutoTraceDump;
    QSpacerItem *verticalSpacerGUI;
    QWidget *tabMisc;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayoutSymbolJIT;
    QHBoxLayout *horizontalLayoutSymbol;
    QVBoxLayout *verticalLayoutSymbolLabels;
    QLabel *lblSymbolStore;
    QLabel *lblSymbolPath;
    QVBoxLayout *verticalLayoutSymbolEdits;
    QLineEdit *editSymbolStore;
    QLineEdit *editSymbolCache;
    QCheckBox *chkSetJIT;
    QHBoxLayout *horizontalLayoutJIT;
    QLabel *label;
    QLineEdit *editJIT;
    QLabel *lblAdminWarning;
    QGroupBox *groupBoxSearchEngineURL;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *editHelpOnSymbolicNameUrl;
    QCheckBox *chkUtf16LogRedirect;
    QCheckBox *chkUseLocalHelpFile;
    QCheckBox *chkQueryProcessCookie;
    QCheckBox *chkQueryWorkingSet;
    QCheckBox *chkTransparentExceptionStepping;
    QSpacerItem *verticalSpacerMisc;
    QLabel *label_3;
    QHBoxLayout *horizontalLayoutSaveCancel;
    QSpacerItem *horizontalSpacerSaveCancel;
    QPushButton *btnSave;
    QPushButton *btnCancel;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QString::fromUtf8("SettingsDialog"));
        SettingsDialog->resize(365, 561);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SettingsDialog->sizePolicy().hasHeightForWidth());
        SettingsDialog->setSizePolicy(sizePolicy);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("settings");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8(":/Default/icons/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        SettingsDialog->setWindowIcon(icon);
        SettingsDialog->setAutoFillBackground(true);
        verticalLayout = new QVBoxLayout(SettingsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(SettingsDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setAutoFillBackground(true);
        tabEvents = new QWidget();
        tabEvents->setObjectName(QString::fromUtf8("tabEvents"));
        gridLayout = new QGridLayout(tabEvents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        chkDllLoad = new QCheckBox(tabEvents);
        chkDllLoad->setObjectName(QString::fromUtf8("chkDllLoad"));

        gridLayout->addWidget(chkDllLoad, 9, 0, 1, 1);

        chkThreadStart = new QCheckBox(tabEvents);
        chkThreadStart->setObjectName(QString::fromUtf8("chkThreadStart"));

        gridLayout->addWidget(chkThreadStart, 2, 1, 1, 1);

        chkExitBreakpoint = new QCheckBox(tabEvents);
        chkExitBreakpoint->setObjectName(QString::fromUtf8("chkExitBreakpoint"));

        gridLayout->addWidget(chkExitBreakpoint, 3, 0, 1, 1);

        chkThreadNameSet = new QCheckBox(tabEvents);
        chkThreadNameSet->setObjectName(QString::fromUtf8("chkThreadNameSet"));

        gridLayout->addWidget(chkThreadNameSet, 4, 1, 1, 1);

        chkDllLoadSystem = new QCheckBox(tabEvents);
        chkDllLoadSystem->setObjectName(QString::fromUtf8("chkDllLoadSystem"));

        gridLayout->addWidget(chkDllLoadSystem, 9, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 13, 0, 1, 1);

        chkThreadEntry = new QCheckBox(tabEvents);
        chkThreadEntry->setObjectName(QString::fromUtf8("chkThreadEntry"));

        gridLayout->addWidget(chkThreadEntry, 1, 1, 1, 1);

        chkDebugStrings = new QCheckBox(tabEvents);
        chkDebugStrings->setObjectName(QString::fromUtf8("chkDebugStrings"));

        gridLayout->addWidget(chkDebugStrings, 4, 0, 1, 1);

        chkThreadEnd = new QCheckBox(tabEvents);
        chkThreadEnd->setObjectName(QString::fromUtf8("chkThreadEnd"));

        gridLayout->addWidget(chkThreadEnd, 3, 1, 1, 1);

        chkTlsCallbacksSystem = new QCheckBox(tabEvents);
        chkTlsCallbacksSystem->setObjectName(QString::fromUtf8("chkTlsCallbacksSystem"));

        gridLayout->addWidget(chkTlsCallbacksSystem, 5, 1, 1, 1);

        chkDllUnloadSystem = new QCheckBox(tabEvents);
        chkDllUnloadSystem->setObjectName(QString::fromUtf8("chkDllUnloadSystem"));

        gridLayout->addWidget(chkDllUnloadSystem, 11, 1, 1, 1);

        lblBreakOn = new QLabel(tabEvents);
        lblBreakOn->setObjectName(QString::fromUtf8("lblBreakOn"));

        gridLayout->addWidget(lblBreakOn, 0, 0, 1, 1);

        chkDllUnload = new QCheckBox(tabEvents);
        chkDllUnload->setObjectName(QString::fromUtf8("chkDllUnload"));

        gridLayout->addWidget(chkDllUnload, 11, 0, 1, 1);

        chkTlsCallbacks = new QCheckBox(tabEvents);
        chkTlsCallbacks->setObjectName(QString::fromUtf8("chkTlsCallbacks"));
        chkTlsCallbacks->setChecked(false);

        gridLayout->addWidget(chkTlsCallbacks, 5, 0, 1, 1);

        chkSystemBreakpoint = new QCheckBox(tabEvents);
        chkSystemBreakpoint->setObjectName(QString::fromUtf8("chkSystemBreakpoint"));
        chkSystemBreakpoint->setChecked(false);

        gridLayout->addWidget(chkSystemBreakpoint, 1, 0, 1, 1);

        chkEntryBreakpoint = new QCheckBox(tabEvents);
        chkEntryBreakpoint->setObjectName(QString::fromUtf8("chkEntryBreakpoint"));
        chkEntryBreakpoint->setChecked(false);

        gridLayout->addWidget(chkEntryBreakpoint, 2, 0, 1, 1);

        chkDllEntrySystem = new QCheckBox(tabEvents);
        chkDllEntrySystem->setObjectName(QString::fromUtf8("chkDllEntrySystem"));

        gridLayout->addWidget(chkDllEntrySystem, 8, 1, 1, 1);

        chkDllEntry = new QCheckBox(tabEvents);
        chkDllEntry->setObjectName(QString::fromUtf8("chkDllEntry"));

        gridLayout->addWidget(chkDllEntry, 8, 0, 1, 1);

        label_2 = new QLabel(tabEvents);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 14, 1, 1, 1);

        tabWidget->addTab(tabEvents, QString());
        tabEngine = new QWidget();
        tabEngine->setObjectName(QString::fromUtf8("tabEngine"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabEngine->sizePolicy().hasHeightForWidth());
        tabEngine->setSizePolicy(sizePolicy1);
        tabEngine->setMinimumSize(QSize(0, 0));
        verticalLayout_4 = new QVBoxLayout(tabEngine);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBoxCalculationType = new QGroupBox(tabEngine);
        groupBoxCalculationType->setObjectName(QString::fromUtf8("groupBoxCalculationType"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBoxCalculationType->sizePolicy().hasHeightForWidth());
        groupBoxCalculationType->setSizePolicy(sizePolicy2);
        horizontalLayout_4 = new QHBoxLayout(groupBoxCalculationType);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        radioSigned = new QRadioButton(groupBoxCalculationType);
        radioSigned->setObjectName(QString::fromUtf8("radioSigned"));
        radioSigned->setChecked(true);

        horizontalLayout_4->addWidget(radioSigned);

        radioUnsigned = new QRadioButton(groupBoxCalculationType);
        radioUnsigned->setObjectName(QString::fromUtf8("radioUnsigned"));

        horizontalLayout_4->addWidget(radioUnsigned);


        horizontalLayout->addWidget(groupBoxCalculationType);

        groupBoxDebugEngine = new QGroupBox(tabEngine);
        groupBoxDebugEngine->setObjectName(QString::fromUtf8("groupBoxDebugEngine"));
        horizontalLayout_3 = new QHBoxLayout(groupBoxDebugEngine);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        radioTitanEngine = new QRadioButton(groupBoxDebugEngine);
        radioTitanEngine->setObjectName(QString::fromUtf8("radioTitanEngine"));
        radioTitanEngine->setChecked(true);

        horizontalLayout_3->addWidget(radioTitanEngine);

        radioStandard = new QRadioButton(groupBoxDebugEngine);
        radioStandard->setObjectName(QString::fromUtf8("radioStandard"));

        horizontalLayout_3->addWidget(radioStandard);


        horizontalLayout->addWidget(groupBoxDebugEngine);


        verticalLayout_4->addLayout(horizontalLayout);

        groupBoxDefaultBreakpointType = new QGroupBox(tabEngine);
        groupBoxDefaultBreakpointType->setObjectName(QString::fromUtf8("groupBoxDefaultBreakpointType"));
        sizePolicy2.setHeightForWidth(groupBoxDefaultBreakpointType->sizePolicy().hasHeightForWidth());
        groupBoxDefaultBreakpointType->setSizePolicy(sizePolicy2);
        verticalLayout_7 = new QVBoxLayout(groupBoxDefaultBreakpointType);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        layoutBreakpointType = new QHBoxLayout();
        layoutBreakpointType->setObjectName(QString::fromUtf8("layoutBreakpointType"));
        radioInt3Short = new QRadioButton(groupBoxDefaultBreakpointType);
        radioInt3Short->setObjectName(QString::fromUtf8("radioInt3Short"));
        radioInt3Short->setChecked(true);

        layoutBreakpointType->addWidget(radioInt3Short);

        radioInt3Long = new QRadioButton(groupBoxDefaultBreakpointType);
        radioInt3Long->setObjectName(QString::fromUtf8("radioInt3Long"));

        layoutBreakpointType->addWidget(radioInt3Long);

        radioUd2 = new QRadioButton(groupBoxDefaultBreakpointType);
        radioUd2->setObjectName(QString::fromUtf8("radioUd2"));

        layoutBreakpointType->addWidget(radioUd2);


        verticalLayout_7->addLayout(layoutBreakpointType);


        verticalLayout_4->addWidget(groupBoxDefaultBreakpointType);

        chkUndecorateSymbolNames = new QCheckBox(tabEngine);
        chkUndecorateSymbolNames->setObjectName(QString::fromUtf8("chkUndecorateSymbolNames"));

        verticalLayout_4->addWidget(chkUndecorateSymbolNames);

        chkEnableDebugPrivilege = new QCheckBox(tabEngine);
        chkEnableDebugPrivilege->setObjectName(QString::fromUtf8("chkEnableDebugPrivilege"));

        verticalLayout_4->addWidget(chkEnableDebugPrivilege);

        chkEnableSourceDebugging = new QCheckBox(tabEngine);
        chkEnableSourceDebugging->setObjectName(QString::fromUtf8("chkEnableSourceDebugging"));

        verticalLayout_4->addWidget(chkEnableSourceDebugging);

        chkDisableDatabaseCompression = new QCheckBox(tabEngine);
        chkDisableDatabaseCompression->setObjectName(QString::fromUtf8("chkDisableDatabaseCompression"));

        verticalLayout_4->addWidget(chkDisableDatabaseCompression);

        chkSaveDatabaseInProgramDirectory = new QCheckBox(tabEngine);
        chkSaveDatabaseInProgramDirectory->setObjectName(QString::fromUtf8("chkSaveDatabaseInProgramDirectory"));

        verticalLayout_4->addWidget(chkSaveDatabaseInProgramDirectory);

        chkSkipInt3Stepping = new QCheckBox(tabEngine);
        chkSkipInt3Stepping->setObjectName(QString::fromUtf8("chkSkipInt3Stepping"));

        verticalLayout_4->addWidget(chkSkipInt3Stepping);

        chkNoScriptTimeout = new QCheckBox(tabEngine);
        chkNoScriptTimeout->setObjectName(QString::fromUtf8("chkNoScriptTimeout"));

        verticalLayout_4->addWidget(chkNoScriptTimeout);

        chkIgnoreInconsistentBreakpoints = new QCheckBox(tabEngine);
        chkIgnoreInconsistentBreakpoints->setObjectName(QString::fromUtf8("chkIgnoreInconsistentBreakpoints"));

        verticalLayout_4->addWidget(chkIgnoreInconsistentBreakpoints);

        chkHardcoreThreadSwitchWarning = new QCheckBox(tabEngine);
        chkHardcoreThreadSwitchWarning->setObjectName(QString::fromUtf8("chkHardcoreThreadSwitchWarning"));

        verticalLayout_4->addWidget(chkHardcoreThreadSwitchWarning);

        chkVerboseExceptionLogging = new QCheckBox(tabEngine);
        chkVerboseExceptionLogging->setObjectName(QString::fromUtf8("chkVerboseExceptionLogging"));

        verticalLayout_4->addWidget(chkVerboseExceptionLogging);

        chkNoWow64SingleStepWorkaround = new QCheckBox(tabEngine);
        chkNoWow64SingleStepWorkaround->setObjectName(QString::fromUtf8("chkNoWow64SingleStepWorkaround"));

        verticalLayout_4->addWidget(chkNoWow64SingleStepWorkaround);

        chkDisableAslr = new QCheckBox(tabEngine);
        chkDisableAslr->setObjectName(QString::fromUtf8("chkDisableAslr"));

        verticalLayout_4->addWidget(chkDisableAslr);

        chkDetachOnAttach = new QCheckBox(tabEngine);
        chkDetachOnAttach->setObjectName(QString::fromUtf8("chkDetachOnAttach"));

        verticalLayout_4->addWidget(chkDetachOnAttach);

        chkDetachOnExit = new QCheckBox(tabEngine);
        chkDetachOnExit->setObjectName(QString::fromUtf8("chkDetachOnExit"));

        verticalLayout_4->addWidget(chkDetachOnExit);

        horizontalLayoutMaxTraceCount = new QHBoxLayout();
        horizontalLayoutMaxTraceCount->setObjectName(QString::fromUtf8("horizontalLayoutMaxTraceCount"));
        lblMaxTraceCount = new QLabel(tabEngine);
        lblMaxTraceCount->setObjectName(QString::fromUtf8("lblMaxTraceCount"));

        horizontalLayoutMaxTraceCount->addWidget(lblMaxTraceCount);

        spinMaxTraceCount = new QSpinBox(tabEngine);
        spinMaxTraceCount->setObjectName(QString::fromUtf8("spinMaxTraceCount"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(spinMaxTraceCount->sizePolicy().hasHeightForWidth());
        spinMaxTraceCount->setSizePolicy(sizePolicy3);
        spinMaxTraceCount->setWrapping(false);
        spinMaxTraceCount->setFrame(true);
        spinMaxTraceCount->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        spinMaxTraceCount->setMinimum(1);
        spinMaxTraceCount->setMaximum(2147483647);
        spinMaxTraceCount->setValue(50000);

        horizontalLayoutMaxTraceCount->addWidget(spinMaxTraceCount);


        verticalLayout_4->addLayout(horizontalLayoutMaxTraceCount);

        horizontalLayoutAnimateInterval = new QHBoxLayout();
        horizontalLayoutAnimateInterval->setObjectName(QString::fromUtf8("horizontalLayoutAnimateInterval"));
        lblAnimateInterval = new QLabel(tabEngine);
        lblAnimateInterval->setObjectName(QString::fromUtf8("lblAnimateInterval"));

        horizontalLayoutAnimateInterval->addWidget(lblAnimateInterval);

        spinAnimateInterval = new QSpinBox(tabEngine);
        spinAnimateInterval->setObjectName(QString::fromUtf8("spinAnimateInterval"));
        spinAnimateInterval->setMaximum(99999);

        horizontalLayoutAnimateInterval->addWidget(spinAnimateInterval);


        verticalLayout_4->addLayout(horizontalLayoutAnimateInterval);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_4->addItem(verticalSpacer);

        label_4 = new QLabel(tabEngine);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_4->addWidget(label_4);

        tabWidget->addTab(tabEngine, QString());
        tabExceptions = new QWidget();
        tabExceptions->setObjectName(QString::fromUtf8("tabExceptions"));
        verticalLayout_5 = new QVBoxLayout(tabExceptions);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        lblExceptionFilters = new QLabel(tabExceptions);
        lblExceptionFilters->setObjectName(QString::fromUtf8("lblExceptionFilters"));

        verticalLayout_5->addWidget(lblExceptionFilters);

        horizontalLayoutExceptions = new QHBoxLayout();
        horizontalLayoutExceptions->setObjectName(QString::fromUtf8("horizontalLayoutExceptions"));
        listExceptions = new QListWidget(tabExceptions);
        listExceptions->setObjectName(QString::fromUtf8("listExceptions"));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier New"));
        font.setPointSize(8);
        listExceptions->setFont(font);
        listExceptions->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

        horizontalLayoutExceptions->addWidget(listExceptions);

        layoutExceptionButtons = new QVBoxLayout();
        layoutExceptionButtons->setObjectName(QString::fromUtf8("layoutExceptionButtons"));
        verticalSpacerExceptionsTop = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layoutExceptionButtons->addItem(verticalSpacerExceptionsTop);

        btnIgnoreRange = new QPushButton(tabExceptions);
        btnIgnoreRange->setObjectName(QString::fromUtf8("btnIgnoreRange"));

        layoutExceptionButtons->addWidget(btnIgnoreRange);

        btnDeleteRange = new QPushButton(tabExceptions);
        btnDeleteRange->setObjectName(QString::fromUtf8("btnDeleteRange"));

        layoutExceptionButtons->addWidget(btnDeleteRange);

        btnIgnoreLast = new QPushButton(tabExceptions);
        btnIgnoreLast->setObjectName(QString::fromUtf8("btnIgnoreLast"));

        layoutExceptionButtons->addWidget(btnIgnoreLast);

        btnIgnoreFirst = new QPushButton(tabExceptions);
        btnIgnoreFirst->setObjectName(QString::fromUtf8("btnIgnoreFirst"));

        layoutExceptionButtons->addWidget(btnIgnoreFirst);

        groupBoBreakOn = new QGroupBox(tabExceptions);
        groupBoBreakOn->setObjectName(QString::fromUtf8("groupBoBreakOn"));
        sizePolicy2.setHeightForWidth(groupBoBreakOn->sizePolicy().hasHeightForWidth());
        groupBoBreakOn->setSizePolicy(sizePolicy2);
        verticalLayout_3 = new QVBoxLayout(groupBoBreakOn);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        radioFirstChance = new QRadioButton(groupBoBreakOn);
        radioFirstChance->setObjectName(QString::fromUtf8("radioFirstChance"));

        verticalLayout_3->addWidget(radioFirstChance);

        radioSecondChance = new QRadioButton(groupBoBreakOn);
        radioSecondChance->setObjectName(QString::fromUtf8("radioSecondChance"));

        verticalLayout_3->addWidget(radioSecondChance);

        radioDoNotBreak = new QRadioButton(groupBoBreakOn);
        radioDoNotBreak->setObjectName(QString::fromUtf8("radioDoNotBreak"));

        verticalLayout_3->addWidget(radioDoNotBreak);


        layoutExceptionButtons->addWidget(groupBoBreakOn);

        groupBoxLogging = new QGroupBox(tabExceptions);
        groupBoxLogging->setObjectName(QString::fromUtf8("groupBoxLogging"));
        verticalLayout_6 = new QVBoxLayout(groupBoxLogging);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        chkLogException = new QCheckBox(groupBoxLogging);
        chkLogException->setObjectName(QString::fromUtf8("chkLogException"));

        verticalLayout_6->addWidget(chkLogException);


        layoutExceptionButtons->addWidget(groupBoxLogging);

        groupBoxExceptionHandledBy = new QGroupBox(tabExceptions);
        groupBoxExceptionHandledBy->setObjectName(QString::fromUtf8("groupBoxExceptionHandledBy"));
        verticalLayout_8 = new QVBoxLayout(groupBoxExceptionHandledBy);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        radioHandledByDebugger = new QRadioButton(groupBoxExceptionHandledBy);
        radioHandledByDebugger->setObjectName(QString::fromUtf8("radioHandledByDebugger"));

        verticalLayout_8->addWidget(radioHandledByDebugger);

        radioHandledByDebuggee = new QRadioButton(groupBoxExceptionHandledBy);
        radioHandledByDebuggee->setObjectName(QString::fromUtf8("radioHandledByDebuggee"));

        verticalLayout_8->addWidget(radioHandledByDebuggee);


        layoutExceptionButtons->addWidget(groupBoxExceptionHandledBy);

        verticalSpacerExceptionsBottom = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layoutExceptionButtons->addItem(verticalSpacerExceptionsBottom);


        horizontalLayoutExceptions->addLayout(layoutExceptionButtons);


        verticalLayout_5->addLayout(horizontalLayoutExceptions);

        tabWidget->addTab(tabExceptions, QString());
        tabDisasm = new QWidget();
        tabDisasm->setObjectName(QString::fromUtf8("tabDisasm"));
        verticalLayout_2 = new QVBoxLayout(tabDisasm);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        chkArgumentSpaces = new QCheckBox(tabDisasm);
        chkArgumentSpaces->setObjectName(QString::fromUtf8("chkArgumentSpaces"));

        verticalLayout_2->addWidget(chkArgumentSpaces);

        chkTabBetweenMnemonicAndArguments = new QCheckBox(tabDisasm);
        chkTabBetweenMnemonicAndArguments->setObjectName(QString::fromUtf8("chkTabBetweenMnemonicAndArguments"));

        verticalLayout_2->addWidget(chkTabBetweenMnemonicAndArguments);

        chkHidePointerSizes = new QCheckBox(tabDisasm);
        chkHidePointerSizes->setObjectName(QString::fromUtf8("chkHidePointerSizes"));

        verticalLayout_2->addWidget(chkHidePointerSizes);

        chkHideNormalSegments = new QCheckBox(tabDisasm);
        chkHideNormalSegments->setObjectName(QString::fromUtf8("chkHideNormalSegments"));

        verticalLayout_2->addWidget(chkHideNormalSegments);

        chkMemorySpaces = new QCheckBox(tabDisasm);
        chkMemorySpaces->setObjectName(QString::fromUtf8("chkMemorySpaces"));

        verticalLayout_2->addWidget(chkMemorySpaces);

        chkUppercase = new QCheckBox(tabDisasm);
        chkUppercase->setObjectName(QString::fromUtf8("chkUppercase"));

        verticalLayout_2->addWidget(chkUppercase);

        chkOnlyCipAutoComments = new QCheckBox(tabDisasm);
        chkOnlyCipAutoComments->setObjectName(QString::fromUtf8("chkOnlyCipAutoComments"));

        verticalLayout_2->addWidget(chkOnlyCipAutoComments);

        chkNoHighlightOperands = new QCheckBox(tabDisasm);
        chkNoHighlightOperands->setObjectName(QString::fromUtf8("chkNoHighlightOperands"));

        verticalLayout_2->addWidget(chkNoHighlightOperands);

        chkNoCurrentModuleText = new QCheckBox(tabDisasm);
        chkNoCurrentModuleText->setObjectName(QString::fromUtf8("chkNoCurrentModuleText"));

        verticalLayout_2->addWidget(chkNoCurrentModuleText);

        chkPermanentHighlightingMode = new QCheckBox(tabDisasm);
        chkPermanentHighlightingMode->setObjectName(QString::fromUtf8("chkPermanentHighlightingMode"));

        verticalLayout_2->addWidget(chkPermanentHighlightingMode);

        chkNoBranchDisasmPreview = new QCheckBox(tabDisasm);
        chkNoBranchDisasmPreview->setObjectName(QString::fromUtf8("chkNoBranchDisasmPreview"));

        verticalLayout_2->addWidget(chkNoBranchDisasmPreview);

        chkUseRunTrace = new QCheckBox(tabDisasm);
        chkUseRunTrace->setObjectName(QString::fromUtf8("chkUseRunTrace"));

        verticalLayout_2->addWidget(chkUseRunTrace);

        layoutValueNotation = new QHBoxLayout();
        layoutValueNotation->setObjectName(QString::fromUtf8("layoutValueNotation"));
        labelValueNotation = new QLabel(tabDisasm);
        labelValueNotation->setObjectName(QString::fromUtf8("labelValueNotation"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(labelValueNotation->sizePolicy().hasHeightForWidth());
        labelValueNotation->setSizePolicy(sizePolicy4);

        layoutValueNotation->addWidget(labelValueNotation);

        comboValueNotation = new QComboBox(tabDisasm);
        comboValueNotation->addItem(QString());
        comboValueNotation->addItem(QString());
        comboValueNotation->addItem(QString());
        comboValueNotation->setObjectName(QString::fromUtf8("comboValueNotation"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(comboValueNotation->sizePolicy().hasHeightForWidth());
        comboValueNotation->setSizePolicy(sizePolicy5);
        comboValueNotation->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        layoutValueNotation->addWidget(comboValueNotation);


        verticalLayout_2->addLayout(layoutValueNotation);

        chkNoSourceLinesAutoComments = new QCheckBox(tabDisasm);
        chkNoSourceLinesAutoComments->setObjectName(QString::fromUtf8("chkNoSourceLinesAutoComments"));

        verticalLayout_2->addWidget(chkNoSourceLinesAutoComments);

        chkDoubleClickAssemble = new QCheckBox(tabDisasm);
        chkDoubleClickAssemble->setObjectName(QString::fromUtf8("chkDoubleClickAssemble"));

        verticalLayout_2->addWidget(chkDoubleClickAssemble);

        layoutMaximumModuleNameSize = new QHBoxLayout();
        layoutMaximumModuleNameSize->setObjectName(QString::fromUtf8("layoutMaximumModuleNameSize"));
        lblMaximumModuleNameSize = new QLabel(tabDisasm);
        lblMaximumModuleNameSize->setObjectName(QString::fromUtf8("lblMaximumModuleNameSize"));
        lblMaximumModuleNameSize->setEnabled(true);
        sizePolicy4.setHeightForWidth(lblMaximumModuleNameSize->sizePolicy().hasHeightForWidth());
        lblMaximumModuleNameSize->setSizePolicy(sizePolicy4);
        lblMaximumModuleNameSize->setMinimumSize(QSize(0, 0));

        layoutMaximumModuleNameSize->addWidget(lblMaximumModuleNameSize);

        spinMaximumModuleNameSize = new QSpinBox(tabDisasm);
        spinMaximumModuleNameSize->setObjectName(QString::fromUtf8("spinMaximumModuleNameSize"));
        sizePolicy3.setHeightForWidth(spinMaximumModuleNameSize->sizePolicy().hasHeightForWidth());
        spinMaximumModuleNameSize->setSizePolicy(sizePolicy3);
        spinMaximumModuleNameSize->setMaximumSize(QSize(16777215, 16777215));
        spinMaximumModuleNameSize->setMinimum(-1);
        spinMaximumModuleNameSize->setMaximum(2147483647);

        layoutMaximumModuleNameSize->addWidget(spinMaximumModuleNameSize);


        verticalLayout_2->addLayout(layoutMaximumModuleNameSize);

        verticalSpacerDisasm = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacerDisasm);

        tabWidget->addTab(tabDisasm, QString());
        tabGui = new QWidget();
        tabGui->setObjectName(QString::fromUtf8("tabGui"));
        verticalLayout_11 = new QVBoxLayout(tabGui);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        chkFpuRegistersLittleEndian = new QCheckBox(tabGui);
        chkFpuRegistersLittleEndian->setObjectName(QString::fromUtf8("chkFpuRegistersLittleEndian"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(chkFpuRegistersLittleEndian->sizePolicy().hasHeightForWidth());
        chkFpuRegistersLittleEndian->setSizePolicy(sizePolicy6);

        verticalLayout_11->addWidget(chkFpuRegistersLittleEndian);

        chkSaveColumnOrder = new QCheckBox(tabGui);
        chkSaveColumnOrder->setObjectName(QString::fromUtf8("chkSaveColumnOrder"));

        verticalLayout_11->addWidget(chkSaveColumnOrder);

        chkNoCloseDialog = new QCheckBox(tabGui);
        chkNoCloseDialog->setObjectName(QString::fromUtf8("chkNoCloseDialog"));

        verticalLayout_11->addWidget(chkNoCloseDialog);

        chkSaveLoadTabOrder = new QCheckBox(tabGui);
        chkSaveLoadTabOrder->setObjectName(QString::fromUtf8("chkSaveLoadTabOrder"));

        verticalLayout_11->addWidget(chkSaveLoadTabOrder);

        chkSidebarWatchLabels = new QCheckBox(tabGui);
        chkSidebarWatchLabels->setObjectName(QString::fromUtf8("chkSidebarWatchLabels"));

        verticalLayout_11->addWidget(chkSidebarWatchLabels);

        chkNoForegroundWindow = new QCheckBox(tabGui);
        chkNoForegroundWindow->setObjectName(QString::fromUtf8("chkNoForegroundWindow"));

        verticalLayout_11->addWidget(chkNoForegroundWindow);

        chkShowGraphRva = new QCheckBox(tabGui);
        chkShowGraphRva->setObjectName(QString::fromUtf8("chkShowGraphRva"));

        verticalLayout_11->addWidget(chkShowGraphRva);

        chkGraphZoomMode = new QCheckBox(tabGui);
        chkGraphZoomMode->setObjectName(QString::fromUtf8("chkGraphZoomMode"));

        verticalLayout_11->addWidget(chkGraphZoomMode);

        chkAutoFollowInStack = new QCheckBox(tabGui);
        chkAutoFollowInStack->setObjectName(QString::fromUtf8("chkAutoFollowInStack"));

        verticalLayout_11->addWidget(chkAutoFollowInStack);

        chkShowExitConfirmation = new QCheckBox(tabGui);
        chkShowExitConfirmation->setObjectName(QString::fromUtf8("chkShowExitConfirmation"));

        verticalLayout_11->addWidget(chkShowExitConfirmation);

        chkShowAttachConfirmation = new QCheckBox(tabGui);
        chkShowAttachConfirmation->setObjectName(QString::fromUtf8("chkShowAttachConfirmation"));

        verticalLayout_11->addWidget(chkShowAttachConfirmation);

        chkDisableAutoComplete = new QCheckBox(tabGui);
        chkDisableAutoComplete->setObjectName(QString::fromUtf8("chkDisableAutoComplete"));

        verticalLayout_11->addWidget(chkDisableAutoComplete);

        chkHideSeasonalIcons = new QCheckBox(tabGui);
        chkHideSeasonalIcons->setObjectName(QString::fromUtf8("chkHideSeasonalIcons"));

        verticalLayout_11->addWidget(chkHideSeasonalIcons);

        chkQtHighDpiScaling = new QCheckBox(tabGui);
        chkQtHighDpiScaling->setObjectName(QString::fromUtf8("chkQtHighDpiScaling"));

        verticalLayout_11->addWidget(chkQtHighDpiScaling);

        chkWindowLongPath = new QCheckBox(tabGui);
        chkWindowLongPath->setObjectName(QString::fromUtf8("chkWindowLongPath"));

        verticalLayout_11->addWidget(chkWindowLongPath);

        chkNoIcons = new QCheckBox(tabGui);
        chkNoIcons->setObjectName(QString::fromUtf8("chkNoIcons"));

        verticalLayout_11->addWidget(chkNoIcons);

        chkAutoTraceDump = new QCheckBox(tabGui);
        chkAutoTraceDump->setObjectName(QString::fromUtf8("chkAutoTraceDump"));

        verticalLayout_11->addWidget(chkAutoTraceDump);

        verticalSpacerGUI = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacerGUI);

        tabWidget->addTab(tabGui, QString());
        tabMisc = new QWidget();
        tabMisc->setObjectName(QString::fromUtf8("tabMisc"));
        verticalLayout_10 = new QVBoxLayout(tabMisc);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayoutSymbolJIT = new QVBoxLayout();
        verticalLayoutSymbolJIT->setObjectName(QString::fromUtf8("verticalLayoutSymbolJIT"));
        horizontalLayoutSymbol = new QHBoxLayout();
        horizontalLayoutSymbol->setObjectName(QString::fromUtf8("horizontalLayoutSymbol"));
        verticalLayoutSymbolLabels = new QVBoxLayout();
        verticalLayoutSymbolLabels->setObjectName(QString::fromUtf8("verticalLayoutSymbolLabels"));
        lblSymbolStore = new QLabel(tabMisc);
        lblSymbolStore->setObjectName(QString::fromUtf8("lblSymbolStore"));

        verticalLayoutSymbolLabels->addWidget(lblSymbolStore);

        lblSymbolPath = new QLabel(tabMisc);
        lblSymbolPath->setObjectName(QString::fromUtf8("lblSymbolPath"));

        verticalLayoutSymbolLabels->addWidget(lblSymbolPath);


        horizontalLayoutSymbol->addLayout(verticalLayoutSymbolLabels);

        verticalLayoutSymbolEdits = new QVBoxLayout();
        verticalLayoutSymbolEdits->setObjectName(QString::fromUtf8("verticalLayoutSymbolEdits"));
        editSymbolStore = new QLineEdit(tabMisc);
        editSymbolStore->setObjectName(QString::fromUtf8("editSymbolStore"));

        verticalLayoutSymbolEdits->addWidget(editSymbolStore);

        editSymbolCache = new QLineEdit(tabMisc);
        editSymbolCache->setObjectName(QString::fromUtf8("editSymbolCache"));

        verticalLayoutSymbolEdits->addWidget(editSymbolCache);


        horizontalLayoutSymbol->addLayout(verticalLayoutSymbolEdits);


        verticalLayoutSymbolJIT->addLayout(horizontalLayoutSymbol);

        chkSetJIT = new QCheckBox(tabMisc);
        chkSetJIT->setObjectName(QString::fromUtf8("chkSetJIT"));

        verticalLayoutSymbolJIT->addWidget(chkSetJIT);

        horizontalLayoutJIT = new QHBoxLayout();
        horizontalLayoutJIT->setObjectName(QString::fromUtf8("horizontalLayoutJIT"));
        label = new QLabel(tabMisc);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayoutJIT->addWidget(label);

        editJIT = new QLineEdit(tabMisc);
        editJIT->setObjectName(QString::fromUtf8("editJIT"));
        editJIT->setReadOnly(true);

        horizontalLayoutJIT->addWidget(editJIT);


        verticalLayoutSymbolJIT->addLayout(horizontalLayoutJIT);

        lblAdminWarning = new QLabel(tabMisc);
        lblAdminWarning->setObjectName(QString::fromUtf8("lblAdminWarning"));

        verticalLayoutSymbolJIT->addWidget(lblAdminWarning);

        groupBoxSearchEngineURL = new QGroupBox(tabMisc);
        groupBoxSearchEngineURL->setObjectName(QString::fromUtf8("groupBoxSearchEngineURL"));
        horizontalLayout_5 = new QHBoxLayout(groupBoxSearchEngineURL);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        editHelpOnSymbolicNameUrl = new QLineEdit(groupBoxSearchEngineURL);
        editHelpOnSymbolicNameUrl->setObjectName(QString::fromUtf8("editHelpOnSymbolicNameUrl"));

        horizontalLayout_5->addWidget(editHelpOnSymbolicNameUrl);


        verticalLayoutSymbolJIT->addWidget(groupBoxSearchEngineURL);


        verticalLayout_10->addLayout(verticalLayoutSymbolJIT);

        chkUtf16LogRedirect = new QCheckBox(tabMisc);
        chkUtf16LogRedirect->setObjectName(QString::fromUtf8("chkUtf16LogRedirect"));

        verticalLayout_10->addWidget(chkUtf16LogRedirect);

        chkUseLocalHelpFile = new QCheckBox(tabMisc);
        chkUseLocalHelpFile->setObjectName(QString::fromUtf8("chkUseLocalHelpFile"));

        verticalLayout_10->addWidget(chkUseLocalHelpFile);

        chkQueryProcessCookie = new QCheckBox(tabMisc);
        chkQueryProcessCookie->setObjectName(QString::fromUtf8("chkQueryProcessCookie"));

        verticalLayout_10->addWidget(chkQueryProcessCookie);

        chkQueryWorkingSet = new QCheckBox(tabMisc);
        chkQueryWorkingSet->setObjectName(QString::fromUtf8("chkQueryWorkingSet"));

        verticalLayout_10->addWidget(chkQueryWorkingSet);

        chkTransparentExceptionStepping = new QCheckBox(tabMisc);
        chkTransparentExceptionStepping->setObjectName(QString::fromUtf8("chkTransparentExceptionStepping"));

        verticalLayout_10->addWidget(chkTransparentExceptionStepping);

        verticalSpacerMisc = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacerMisc);

        label_3 = new QLabel(tabMisc);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_10->addWidget(label_3);

        tabWidget->addTab(tabMisc, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayoutSaveCancel = new QHBoxLayout();
        horizontalLayoutSaveCancel->setObjectName(QString::fromUtf8("horizontalLayoutSaveCancel"));
        horizontalSpacerSaveCancel = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutSaveCancel->addItem(horizontalSpacerSaveCancel);

        btnSave = new QPushButton(SettingsDialog);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));

        horizontalLayoutSaveCancel->addWidget(btnSave);

        btnCancel = new QPushButton(SettingsDialog);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayoutSaveCancel->addWidget(btnCancel);


        verticalLayout->addLayout(horizontalLayoutSaveCancel);

#ifndef QT_NO_SHORTCUT
        lblMaxTraceCount->setBuddy(spinMaxTraceCount);
        lblAnimateInterval->setBuddy(spinAnimateInterval);
        lblExceptionFilters->setBuddy(listExceptions);
        lblMaximumModuleNameSize->setBuddy(spinMaximumModuleNameSize);
        lblSymbolStore->setBuddy(editSymbolStore);
        lblSymbolPath->setBuddy(editSymbolCache);
        label->setBuddy(editJIT);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(tabWidget, chkSystemBreakpoint);
        QWidget::setTabOrder(chkSystemBreakpoint, chkEntryBreakpoint);
        QWidget::setTabOrder(chkEntryBreakpoint, radioInt3Short);
        QWidget::setTabOrder(radioInt3Short, radioInt3Long);
        QWidget::setTabOrder(radioInt3Long, radioUd2);
        QWidget::setTabOrder(radioUd2, chkUndecorateSymbolNames);
        QWidget::setTabOrder(chkUndecorateSymbolNames, chkEnableDebugPrivilege);
        QWidget::setTabOrder(chkEnableDebugPrivilege, chkEnableSourceDebugging);
        QWidget::setTabOrder(chkEnableSourceDebugging, chkDisableDatabaseCompression);
        QWidget::setTabOrder(chkDisableDatabaseCompression, chkSaveDatabaseInProgramDirectory);
        QWidget::setTabOrder(chkSaveDatabaseInProgramDirectory, listExceptions);
        QWidget::setTabOrder(listExceptions, btnIgnoreRange);
        QWidget::setTabOrder(btnIgnoreRange, btnDeleteRange);
        QWidget::setTabOrder(btnDeleteRange, btnIgnoreLast);
        QWidget::setTabOrder(btnIgnoreLast, chkArgumentSpaces);
        QWidget::setTabOrder(chkArgumentSpaces, chkTabBetweenMnemonicAndArguments);
        QWidget::setTabOrder(chkTabBetweenMnemonicAndArguments, chkMemorySpaces);
        QWidget::setTabOrder(chkMemorySpaces, chkUppercase);
        QWidget::setTabOrder(chkUppercase, chkOnlyCipAutoComments);
        QWidget::setTabOrder(chkOnlyCipAutoComments, editSymbolStore);
        QWidget::setTabOrder(editSymbolStore, editSymbolCache);
        QWidget::setTabOrder(editSymbolCache, chkSetJIT);
        QWidget::setTabOrder(chkSetJIT, editJIT);
        QWidget::setTabOrder(editJIT, btnSave);
        QWidget::setTabOrder(btnSave, btnCancel);

        retranslateUi(SettingsDialog);
        QObject::connect(btnCancel, SIGNAL(clicked()), SettingsDialog, SLOT(reject()));
        QObject::connect(btnSave, SIGNAL(clicked()), SettingsDialog, SLOT(accept()));

        tabWidget->setCurrentIndex(0);
        btnSave->setDefault(true);


        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QApplication::translate("SettingsDialog", "Preferences", nullptr));
        chkDllLoad->setText(QApplication::translate("SettingsDialog", "User DLL Load", nullptr));
        chkThreadStart->setText(QApplication::translate("SettingsDialog", "Thread Create", nullptr));
        chkExitBreakpoint->setText(QApplication::translate("SettingsDialog", "Exit Breakpoint*", nullptr));
        chkThreadNameSet->setText(QApplication::translate("SettingsDialog", "SetThreadName exceptions", nullptr));
        chkDllLoadSystem->setText(QApplication::translate("SettingsDialog", "System DLL Load", nullptr));
        chkThreadEntry->setText(QApplication::translate("SettingsDialog", "Thread Entry", nullptr));
        chkDebugStrings->setText(QApplication::translate("SettingsDialog", "Debug Strings", nullptr));
        chkThreadEnd->setText(QApplication::translate("SettingsDialog", "Thread Exit", nullptr));
        chkTlsCallbacksSystem->setText(QApplication::translate("SettingsDialog", "System TLS Callbacks*", nullptr));
        chkDllUnloadSystem->setText(QApplication::translate("SettingsDialog", "System DLL Unload", nullptr));
        lblBreakOn->setText(QApplication::translate("SettingsDialog", "Break on:", nullptr));
        chkDllUnload->setText(QApplication::translate("SettingsDialog", "User DLL Unload", nullptr));
        chkTlsCallbacks->setText(QApplication::translate("SettingsDialog", "User TLS Callbacks*", nullptr));
        chkSystemBreakpoint->setText(QApplication::translate("SettingsDialog", "System Breakpoint*", nullptr));
        chkEntryBreakpoint->setText(QApplication::translate("SettingsDialog", "Entry Breakpoint*", nullptr));
        chkDllEntrySystem->setText(QApplication::translate("SettingsDialog", "System DLL Entry", nullptr));
        chkDllEntry->setText(QApplication::translate("SettingsDialog", "User DLL Entry", nullptr));
        label_2->setText(QApplication::translate("SettingsDialog", "* Requires debuggee restart", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabEvents), QApplication::translate("SettingsDialog", "Events", nullptr));
        groupBoxCalculationType->setTitle(QApplication::translate("SettingsDialog", "Calculation Type", nullptr));
        radioSigned->setText(QApplication::translate("SettingsDialog", "&Signed", nullptr));
        radioUnsigned->setText(QApplication::translate("SettingsDialog", "&Unsigned", nullptr));
        groupBoxDebugEngine->setTitle(QApplication::translate("SettingsDialog", "Debug Engine*", nullptr));
        radioTitanEngine->setText(QApplication::translate("SettingsDialog", "TitanEngine", nullptr));
        radioStandard->setText(QApplication::translate("SettingsDialog", "Standard", nullptr));
        groupBoxDefaultBreakpointType->setTitle(QApplication::translate("SettingsDialog", "Default Breakpoint Type", nullptr));
        radioInt3Short->setText(QApplication::translate("SettingsDialog", "INT3", nullptr));
        radioInt3Long->setText(QApplication::translate("SettingsDialog", "Long INT3", nullptr));
        radioUd2->setText(QApplication::translate("SettingsDialog", "UD2", nullptr));
        chkUndecorateSymbolNames->setText(QApplication::translate("SettingsDialog", "Undecorate Symbol Names", nullptr));
        chkEnableDebugPrivilege->setText(QApplication::translate("SettingsDialog", "Enable Debug &Privilege", nullptr));
        chkEnableSourceDebugging->setText(QApplication::translate("SettingsDialog", "Enable Source Debugging", nullptr));
        chkDisableDatabaseCompression->setText(QApplication::translate("SettingsDialog", "Disable Database Compression", nullptr));
        chkSaveDatabaseInProgramDirectory->setText(QApplication::translate("SettingsDialog", "Save Database in Program Directory", nullptr));
        chkSkipInt3Stepping->setText(QApplication::translate("SettingsDialog", "Skip INT3 stepping", nullptr));
        chkNoScriptTimeout->setText(QApplication::translate("SettingsDialog", "No Script Timeout Warning", nullptr));
        chkIgnoreInconsistentBreakpoints->setText(QApplication::translate("SettingsDialog", "&Ignore inconsistent breakpoints", nullptr));
        chkHardcoreThreadSwitchWarning->setText(QApplication::translate("SettingsDialog", "Log If the Thread Has Switched", nullptr));
        chkVerboseExceptionLogging->setText(QApplication::translate("SettingsDialog", "Enable Verbose Exception Logging", nullptr));
        chkNoWow64SingleStepWorkaround->setText(QApplication::translate("SettingsDialog", "Disable WOW64 Single Step Workaround", nullptr));
        chkDisableAslr->setText(QApplication::translate("SettingsDialog", "Disable ASLR", nullptr));
        chkDetachOnAttach->setText(QApplication::translate("SettingsDialog", "Detach from process when attaching to another", nullptr));
#ifndef QT_NO_TOOLTIP
        chkDetachOnAttach->setToolTip(QApplication::translate("SettingsDialog", "When enabled, attaching to a new process will detach from the current process instead of terminating it", nullptr));
#endif // QT_NO_TOOLTIP
        chkDetachOnExit->setText(QApplication::translate("SettingsDialog", "Detach from process when exiting debugger", nullptr));
#ifndef QT_NO_TOOLTIP
        chkDetachOnExit->setToolTip(QApplication::translate("SettingsDialog", "When enabled, exiting WinScope will detach from the current process instead of terminating it", nullptr));
#endif // QT_NO_TOOLTIP
        lblMaxTraceCount->setText(QApplication::translate("SettingsDialog", "Default maximum trace &count", nullptr));
        lblAnimateInterval->setText(QApplication::translate("SettingsDialog", "Animation per-step interval (ms)", nullptr));
#ifndef QT_NO_TOOLTIP
        spinAnimateInterval->setToolTip(QApplication::translate("SettingsDialog", "<html><head/><body><p>The debugger sleeps for a certain time in order to keep the interval between animation steps constant as specified in this setting.</p><p>If you want to animate as fast as possible set this to 0.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("SettingsDialog", "* Requires debugger restart", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabEngine), QApplication::translate("SettingsDialog", "Engine", nullptr));
        lblExceptionFilters->setText(QApplication::translate("SettingsDialog", "Exception Filters:", nullptr));
        btnIgnoreRange->setText(QApplication::translate("SettingsDialog", "Ignore &Range", nullptr));
        btnDeleteRange->setText(QApplication::translate("SettingsDialog", "&Delete Range", nullptr));
        btnIgnoreLast->setText(QApplication::translate("SettingsDialog", "Ignore &Last", nullptr));
#ifndef QT_NO_TOOLTIP
        btnIgnoreFirst->setToolTip(QApplication::translate("SettingsDialog", "Ignore all first-chance exceptions, don't print log, pass them to the debuggee and only break on second-chance exceptions.", nullptr));
#endif // QT_NO_TOOLTIP
        btnIgnoreFirst->setText(QApplication::translate("SettingsDialog", "Ignore First-Chance", nullptr));
        groupBoBreakOn->setTitle(QApplication::translate("SettingsDialog", "Break On", nullptr));
        radioFirstChance->setText(QApplication::translate("SettingsDialog", "First chance", nullptr));
        radioSecondChance->setText(QApplication::translate("SettingsDialog", "Second chance", nullptr));
        radioDoNotBreak->setText(QApplication::translate("SettingsDialog", "Do not break", nullptr));
        groupBoxLogging->setTitle(QApplication::translate("SettingsDialog", "Logging", nullptr));
        chkLogException->setText(QApplication::translate("SettingsDialog", "Log exception", nullptr));
        groupBoxExceptionHandledBy->setTitle(QApplication::translate("SettingsDialog", "Exception handled by", nullptr));
        radioHandledByDebugger->setText(QApplication::translate("SettingsDialog", "Debugger", nullptr));
        radioHandledByDebuggee->setText(QApplication::translate("SettingsDialog", "Debuggee", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabExceptions), QApplication::translate("SettingsDialog", "Exceptions", nullptr));
        chkArgumentSpaces->setText(QApplication::translate("SettingsDialog", "Argument Spaces", nullptr));
        chkTabBetweenMnemonicAndArguments->setText(QApplication::translate("SettingsDialog", "Tab between mnemonic and arguments", nullptr));
        chkHidePointerSizes->setText(QApplication::translate("SettingsDialog", "Hide pointer sizes", nullptr));
        chkHideNormalSegments->setText(QApplication::translate("SettingsDialog", "Only show FS/GS segments", nullptr));
        chkMemorySpaces->setText(QApplication::translate("SettingsDialog", "Memory Spaces", nullptr));
        chkUppercase->setText(QApplication::translate("SettingsDialog", "Uppercase", nullptr));
        chkOnlyCipAutoComments->setText(QApplication::translate("SettingsDialog", "Autocomments only on CIP", nullptr));
        chkNoHighlightOperands->setText(QApplication::translate("SettingsDialog", "Don't highlight operands", nullptr));
        chkNoCurrentModuleText->setText(QApplication::translate("SettingsDialog", "Hide module name for local memory addresses", nullptr));
        chkPermanentHighlightingMode->setText(QApplication::translate("SettingsDialog", "Permanent highlighting mode", nullptr));
        chkNoBranchDisasmPreview->setText(QApplication::translate("SettingsDialog", "Disable branch disassembly preview", nullptr));
        chkUseRunTrace->setText(QApplication::translate("SettingsDialog", "Use trace coverage data to assist more accurate disassembling (experimental)", nullptr));
        labelValueNotation->setText(QApplication::translate("SettingsDialog", "Hexadecimal value notation:", nullptr));
        comboValueNotation->setItemText(0, QApplication::translate("SettingsDialog", "None", nullptr));
        comboValueNotation->setItemText(1, QApplication::translate("SettingsDialog", "C/C++", nullptr));
        comboValueNotation->setItemText(2, QApplication::translate("SettingsDialog", "MASM", nullptr));

        chkNoSourceLinesAutoComments->setText(QApplication::translate("SettingsDialog", "Don't show source lines in comments", nullptr));
        chkDoubleClickAssemble->setText(QApplication::translate("SettingsDialog", "Assemble instruction on double-click", nullptr));
        lblMaximumModuleNameSize->setText(QApplication::translate("SettingsDialog", "Maximum module name size", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabDisasm), QApplication::translate("SettingsDialog", "Disasm", nullptr));
        chkFpuRegistersLittleEndian->setText(QApplication::translate("SettingsDialog", "Show FPU registers as little endian", nullptr));
        chkSaveColumnOrder->setText(QApplication::translate("SettingsDialog", "Save GUI layout and column orders", nullptr));
        chkNoCloseDialog->setText(QApplication::translate("SettingsDialog", "Don't show close dialog", nullptr));
        chkSaveLoadTabOrder->setText(QApplication::translate("SettingsDialog", "Enable Load/Save Tab Order", nullptr));
        chkSidebarWatchLabels->setText(QApplication::translate("SettingsDialog", "Show Watch Labels in Side Bar", nullptr));
        chkNoForegroundWindow->setText(QApplication::translate("SettingsDialog", "Do not call SetForegroundWindow", nullptr));
        chkShowGraphRva->setText(QApplication::translate("SettingsDialog", "Show RVA addresses in graph view", nullptr));
        chkGraphZoomMode->setText(QApplication::translate("SettingsDialog", "Graph zoom mode", nullptr));
        chkAutoFollowInStack->setText(QApplication::translate("SettingsDialog", "Auto follow operand in stack", nullptr));
        chkShowExitConfirmation->setText(QApplication::translate("SettingsDialog", "Show exit confirmation dialog", nullptr));
        chkShowAttachConfirmation->setText(QApplication::translate("SettingsDialog", "Show attach confirmation dialog", nullptr));
        chkDisableAutoComplete->setText(QApplication::translate("SettingsDialog", "Disable auto completion in goto dialog", nullptr));
        chkHideSeasonalIcons->setText(QApplication::translate("SettingsDialog", "Hide seasonal icons", nullptr));
#ifndef QT_NO_TOOLTIP
        chkQtHighDpiScaling->setToolTip(QApplication::translate("SettingsDialog", "Disabling this option will tell Windows that WinScope is DPI unaware. This might result in blurry results in some configurations.", nullptr));
#endif // QT_NO_TOOLTIP
        chkQtHighDpiScaling->setText(QApplication::translate("SettingsDialog", "Qt High DPI Scaling", nullptr));
        chkWindowLongPath->setText(QApplication::translate("SettingsDialog", "Full executable path in title", nullptr));
        chkNoIcons->setText(QApplication::translate("SettingsDialog", "Disable icons*", nullptr));
#ifndef QT_NO_TOOLTIP
        chkAutoTraceDump->setToolTip(QApplication::translate("SettingsDialog", "Dump in trace view consumes significant memory. It is used by many features in trace view that need to search for access to memory. If disabled, it will not be loaded by default. The user can always load the dump manually. Dump in already opened trace tabs are not disabled until you close them.", nullptr));
#endif // QT_NO_TOOLTIP
        chkAutoTraceDump->setText(QApplication::translate("SettingsDialog", "Automatically load dump in trace view", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabGui), QApplication::translate("SettingsDialog", "GUI", nullptr));
        lblSymbolStore->setText(QApplication::translate("SettingsDialog", "Symbol Store:", nullptr));
        lblSymbolPath->setText(QApplication::translate("SettingsDialog", "Symbol Path:", nullptr));
        chkSetJIT->setText(QApplication::translate("SettingsDialog", "Set WinScope as Just In Time Debugger", nullptr));
        label->setText(QApplication::translate("SettingsDialog", "JIT:", nullptr));
        lblAdminWarning->setText(QApplication::translate("SettingsDialog", "<font color=\"red\">DIE SCUM!</font>", nullptr));
        groupBoxSearchEngineURL->setTitle(QApplication::translate("SettingsDialog", "Search Engine URL", nullptr));
        chkUtf16LogRedirect->setText(QApplication::translate("SettingsDialog", "UTF-16 Log Redirect*", nullptr));
        chkUseLocalHelpFile->setText(QApplication::translate("SettingsDialog", "Use local help file (WinScope.chm)", nullptr));
        chkQueryProcessCookie->setText(QApplication::translate("SettingsDialog", "Query process cookie*", nullptr));
        chkQueryWorkingSet->setText(QApplication::translate("SettingsDialog", "Query working set before reading memory", nullptr));
        chkTransparentExceptionStepping->setText(QApplication::translate("SettingsDialog", "Transparent exception stepping*", nullptr));
        label_3->setText(QApplication::translate("SettingsDialog", "* Requires debuggee restart", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabMisc), QApplication::translate("SettingsDialog", "Misc", nullptr));
        btnSave->setText(QApplication::translate("SettingsDialog", "Save", nullptr));
        btnCancel->setText(QApplication::translate("SettingsDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
