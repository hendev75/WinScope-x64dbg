/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionExit;
    QAction *actionRun;
    QAction *actionPause;
    QAction *actionRestart;
    QAction *actionClose;
    QAction *actionStepInto;
    QAction *actionStepOver;
    QAction *actionCommand;
    QAction *actionRtr;
    QAction *actionMemoryMap;
    QAction *actionLog;
    QAction *actionAbout;
    QAction *actionScylla;
    QAction *actionBreakpoints;
    QAction *actioneStepInto;
    QAction *actioneStepOver;
    QAction *actioneRun;
    QAction *actioneRtr;
    QAction *actionScript;
    QAction *actionRunSelection;
    QAction *actionCpu;
    QAction *actionSymbolInfo;
    QAction *actionReferences;
    QAction *actionThreads;
    QAction *actionSettings;
    QAction *actionStrings;
    QAction *actionAppearance;
    QAction *actionCalls;
    QAction *actionPatches;
    QAction *actionComments;
    QAction *actionLabels;
    QAction *actionBookmarks;
    QAction *actionFunctions;
    QAction *actionCheckUpdates;
    QAction *actionCallStack;
    QAction *actionShortcuts;
    QAction *actionDonate;
    QAction *actionCalculator;
    QAction *actionAttach;
    QAction *actionDetach;
    QAction *actionChangeCommandLine;
    QAction *actionSkipNextInstruction;
    QAction *actionTopmost;
    QAction *actionReportBug;
    QAction *actionSource;
    QAction *actionManual;
    QAction *actionFaq;
    QAction *actionSEHChain;
    QAction *actionHideDebugger;
    QAction *actionReloadStylesheet;
    QAction *actionNotes;
    QAction *actionHandles;
    QAction *actionTocnd;
    QAction *actionTicnd;
    QAction *actionTRBit;
    QAction *actionTRByte;
    QAction *actionTRWord;
    QAction *actionTRReset;
    QAction *actionTRTIBT;
    QAction *actionTRTOBT;
    QAction *actionTRTIIT;
    QAction *actionTRTOIT;
    QAction *actionTRNone;
    QAction *actionRtu;
    QAction *actionRunExpression;
    QAction *actionInstrUndo;
    QAction *actionCrashDump;
    QAction *actionManageFavourite;
    QAction *actionStepOverSource;
    QAction *actionStepIntoSource;
    QAction *actionGraph;
    QAction *actionseStepInto;
    QAction *actionseStepOver;
    QAction *actionseRun;
    QAction *actionBlog;
    QAction *actionAnimateInto;
    QAction *actionAnimateOver;
    QAction *actionAnimateCommand;
    QAction *actionSetInitializationScript;
    QAction *actionImportSettings;
    QAction *actionCustomizeMenus;
    QAction *actionImportdatabase;
    QAction *actionExportdatabase;
    QAction *actionPreviousTab;
    QAction *actionNextTab;
    QAction *actionPreviousView;
    QAction *actionNextView;
    QAction *actionHideTab;
    QAction *actionVariables;
    QAction *actionRestartAdmin;
    QAction *actionPlugins;
    QAction *actionTrace;
    QAction *actionModules;
    QAction *action_Theme;
    QAction *actionDefaultTheme;
    QAction *actionDbsave;
    QAction *actionDbload;
    QAction *actionDbrecovery;
    QAction *actionDbclear;
    QAction *actionAbout_Qt;
    QAction *actionMnemonic_Help;
    QAction *actionReleaseNotes;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuRecentFiles;
    QMenu *menuDatabase;
    QMenu *menuView;
    QMenu *menuDebug;
    QMenu *menuAdvanced;
    QMenu *menuHelp;
    QMenu *menuPlugins;
    QMenu *menuOptions;
    QMenu *menuTheme;
    QMenu *menuFavourites;
    QMenu *menu_Trace;
    QMenu *menuTrace_record;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *cmdBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(868, 600);
        MainWindow->setContextMenuPolicy(Qt::NoContextMenu);
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("folder-horizontal-open");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8(":/Default/icons/folder-horizontal-open.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionOpen->setIcon(icon);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon1;
        iconThemeName = QString::fromUtf8("control-exit");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8(":/Default/icons/control-exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionExit->setIcon(icon1);
        actionRun = new QAction(MainWindow);
        actionRun->setObjectName(QString::fromUtf8("actionRun"));
        QIcon icon2;
        iconThemeName = QString::fromUtf8("arrow-run");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QString::fromUtf8(":/Default/icons/arrow-run.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionRun->setIcon(icon2);
        actionPause = new QAction(MainWindow);
        actionPause->setObjectName(QString::fromUtf8("actionPause"));
        QIcon icon3;
        iconThemeName = QString::fromUtf8("control-pause");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon3 = QIcon::fromTheme(iconThemeName);
        } else {
            icon3.addFile(QString::fromUtf8(":/Default/icons/control-pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionPause->setIcon(icon3);
        actionRestart = new QAction(MainWindow);
        actionRestart->setObjectName(QString::fromUtf8("actionRestart"));
        QIcon icon4;
        iconThemeName = QString::fromUtf8("arrow-restart");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon4 = QIcon::fromTheme(iconThemeName);
        } else {
            icon4.addFile(QString::fromUtf8(":/Default/icons/arrow-restart.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionRestart->setIcon(icon4);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        QIcon icon5;
        iconThemeName = QString::fromUtf8("control-stop");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon5 = QIcon::fromTheme(iconThemeName);
        } else {
            icon5.addFile(QString::fromUtf8(":/Default/icons/control-stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionClose->setIcon(icon5);
        actionStepInto = new QAction(MainWindow);
        actionStepInto->setObjectName(QString::fromUtf8("actionStepInto"));
        QIcon icon6;
        iconThemeName = QString::fromUtf8("arrow-step-into");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon6 = QIcon::fromTheme(iconThemeName);
        } else {
            icon6.addFile(QString::fromUtf8(":/Default/icons/arrow-step-into.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionStepInto->setIcon(icon6);
        actionStepOver = new QAction(MainWindow);
        actionStepOver->setObjectName(QString::fromUtf8("actionStepOver"));
        QIcon icon7;
        iconThemeName = QString::fromUtf8("arrow-step-over");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon7 = QIcon::fromTheme(iconThemeName);
        } else {
            icon7.addFile(QString::fromUtf8(":/Default/icons/arrow-step-over.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionStepOver->setIcon(icon7);
        actionCommand = new QAction(MainWindow);
        actionCommand->setObjectName(QString::fromUtf8("actionCommand"));
        QIcon icon8;
        iconThemeName = QString::fromUtf8("terminal-command");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon8 = QIcon::fromTheme(iconThemeName);
        } else {
            icon8.addFile(QString::fromUtf8(":/Default/icons/terminal-command.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionCommand->setIcon(icon8);
        actionRtr = new QAction(MainWindow);
        actionRtr->setObjectName(QString::fromUtf8("actionRtr"));
        QIcon icon9;
        iconThemeName = QString::fromUtf8("arrow-step-rtr");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon9 = QIcon::fromTheme(iconThemeName);
        } else {
            icon9.addFile(QString::fromUtf8(":/Default/icons/arrow-step-rtr.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionRtr->setIcon(icon9);
        actionMemoryMap = new QAction(MainWindow);
        actionMemoryMap->setObjectName(QString::fromUtf8("actionMemoryMap"));
        QIcon icon10;
        iconThemeName = QString::fromUtf8("memory-map");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon10 = QIcon::fromTheme(iconThemeName);
        } else {
            icon10.addFile(QString::fromUtf8(":/Default/icons/memory-map.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionMemoryMap->setIcon(icon10);
        actionLog = new QAction(MainWindow);
        actionLog->setObjectName(QString::fromUtf8("actionLog"));
        QIcon icon11;
        iconThemeName = QString::fromUtf8("log");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon11 = QIcon::fromTheme(iconThemeName);
        } else {
            icon11.addFile(QString::fromUtf8(":/Default/icons/log.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionLog->setIcon(icon11);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon12;
        iconThemeName = QString::fromUtf8("information");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon12 = QIcon::fromTheme(iconThemeName);
        } else {
            icon12.addFile(QString::fromUtf8(":/Default/icons/information.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionAbout->setIcon(icon12);
        actionScylla = new QAction(MainWindow);
        actionScylla->setObjectName(QString::fromUtf8("actionScylla"));
        QIcon icon13;
        iconThemeName = QString::fromUtf8("scylla");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon13 = QIcon::fromTheme(iconThemeName);
        } else {
            icon13.addFile(QString::fromUtf8(":/Default/icons/scylla.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionScylla->setIcon(icon13);
        actionBreakpoints = new QAction(MainWindow);
        actionBreakpoints->setObjectName(QString::fromUtf8("actionBreakpoints"));
        QIcon icon14;
        iconThemeName = QString::fromUtf8("breakpoint");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon14 = QIcon::fromTheme(iconThemeName);
        } else {
            icon14.addFile(QString::fromUtf8(":/Default/icons/breakpoint.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionBreakpoints->setIcon(icon14);
        actioneStepInto = new QAction(MainWindow);
        actioneStepInto->setObjectName(QString::fromUtf8("actioneStepInto"));
        actioneStepInto->setIcon(icon6);
        actioneStepOver = new QAction(MainWindow);
        actioneStepOver->setObjectName(QString::fromUtf8("actioneStepOver"));
        actioneStepOver->setIcon(icon7);
        actioneRun = new QAction(MainWindow);
        actioneRun->setObjectName(QString::fromUtf8("actioneRun"));
        actioneRun->setIcon(icon2);
        actioneRtr = new QAction(MainWindow);
        actioneRtr->setObjectName(QString::fromUtf8("actioneRtr"));
        actioneRtr->setIcon(icon9);
        actionScript = new QAction(MainWindow);
        actionScript->setObjectName(QString::fromUtf8("actionScript"));
        QIcon icon15;
        iconThemeName = QString::fromUtf8("script-code");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon15 = QIcon::fromTheme(iconThemeName);
        } else {
            icon15.addFile(QString::fromUtf8(":/Default/icons/script-code.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionScript->setIcon(icon15);
        actionRunSelection = new QAction(MainWindow);
        actionRunSelection->setObjectName(QString::fromUtf8("actionRunSelection"));
        QIcon icon16;
        iconThemeName = QString::fromUtf8("arrow-run-cursor");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon16 = QIcon::fromTheme(iconThemeName);
        } else {
            icon16.addFile(QString::fromUtf8(":/Default/icons/arrow-run-cursor.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionRunSelection->setIcon(icon16);
        actionCpu = new QAction(MainWindow);
        actionCpu->setObjectName(QString::fromUtf8("actionCpu"));
        QIcon icon17;
        iconThemeName = QString::fromUtf8("processor64");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon17 = QIcon::fromTheme(iconThemeName);
        } else {
            icon17.addFile(QString::fromUtf8(":/Default/icons/processor64.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionCpu->setIcon(icon17);
        actionSymbolInfo = new QAction(MainWindow);
        actionSymbolInfo->setObjectName(QString::fromUtf8("actionSymbolInfo"));
        QIcon icon18;
        iconThemeName = QString::fromUtf8("pdb");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon18 = QIcon::fromTheme(iconThemeName);
        } else {
            icon18.addFile(QString::fromUtf8(":/Default/icons/pdb.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionSymbolInfo->setIcon(icon18);
        actionReferences = new QAction(MainWindow);
        actionReferences->setObjectName(QString::fromUtf8("actionReferences"));
        QIcon icon19;
        iconThemeName = QString::fromUtf8("search");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon19 = QIcon::fromTheme(iconThemeName);
        } else {
            icon19.addFile(QString::fromUtf8(":/Default/icons/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionReferences->setIcon(icon19);
        actionThreads = new QAction(MainWindow);
        actionThreads->setObjectName(QString::fromUtf8("actionThreads"));
        QIcon icon20;
        iconThemeName = QString::fromUtf8("arrow-threads");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon20 = QIcon::fromTheme(iconThemeName);
        } else {
            icon20.addFile(QString::fromUtf8(":/Default/icons/arrow-threads.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionThreads->setIcon(icon20);
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
        QIcon icon21;
        iconThemeName = QString::fromUtf8("settings");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon21 = QIcon::fromTheme(iconThemeName);
        } else {
            icon21.addFile(QString::fromUtf8(":/Default/icons/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionSettings->setIcon(icon21);
        actionStrings = new QAction(MainWindow);
        actionStrings->setObjectName(QString::fromUtf8("actionStrings"));
        QIcon icon22;
        iconThemeName = QString::fromUtf8("strings");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon22 = QIcon::fromTheme(iconThemeName);
        } else {
            icon22.addFile(QString::fromUtf8(":/Default/icons/strings.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionStrings->setIcon(icon22);
        actionAppearance = new QAction(MainWindow);
        actionAppearance->setObjectName(QString::fromUtf8("actionAppearance"));
        QIcon icon23;
        iconThemeName = QString::fromUtf8("color-swatches");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon23 = QIcon::fromTheme(iconThemeName);
        } else {
            icon23.addFile(QString::fromUtf8(":/Default/icons/color-swatches.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionAppearance->setIcon(icon23);
        actionCalls = new QAction(MainWindow);
        actionCalls->setObjectName(QString::fromUtf8("actionCalls"));
        QIcon icon24;
        iconThemeName = QString::fromUtf8("call");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon24 = QIcon::fromTheme(iconThemeName);
        } else {
            icon24.addFile(QString::fromUtf8(":/Default/icons/call.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionCalls->setIcon(icon24);
        actionPatches = new QAction(MainWindow);
        actionPatches->setObjectName(QString::fromUtf8("actionPatches"));
        QIcon icon25;
        iconThemeName = QString::fromUtf8("patch");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon25 = QIcon::fromTheme(iconThemeName);
        } else {
            icon25.addFile(QString::fromUtf8(":/Default/icons/patch.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionPatches->setIcon(icon25);
        actionComments = new QAction(MainWindow);
        actionComments->setObjectName(QString::fromUtf8("actionComments"));
        QIcon icon26;
        iconThemeName = QString::fromUtf8("comments");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon26 = QIcon::fromTheme(iconThemeName);
        } else {
            icon26.addFile(QString::fromUtf8(":/Default/icons/comments.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionComments->setIcon(icon26);
        actionLabels = new QAction(MainWindow);
        actionLabels->setObjectName(QString::fromUtf8("actionLabels"));
        QIcon icon27;
        iconThemeName = QString::fromUtf8("labels");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon27 = QIcon::fromTheme(iconThemeName);
        } else {
            icon27.addFile(QString::fromUtf8(":/Default/icons/labels.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionLabels->setIcon(icon27);
        actionBookmarks = new QAction(MainWindow);
        actionBookmarks->setObjectName(QString::fromUtf8("actionBookmarks"));
        QIcon icon28;
        iconThemeName = QString::fromUtf8("bookmarks");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon28 = QIcon::fromTheme(iconThemeName);
        } else {
            icon28.addFile(QString::fromUtf8(":/Default/icons/bookmarks.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionBookmarks->setIcon(icon28);
        actionFunctions = new QAction(MainWindow);
        actionFunctions->setObjectName(QString::fromUtf8("actionFunctions"));
        QIcon icon29;
        iconThemeName = QString::fromUtf8("functions");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon29 = QIcon::fromTheme(iconThemeName);
        } else {
            icon29.addFile(QString::fromUtf8(":/Default/icons/functions.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionFunctions->setIcon(icon29);
        actionCheckUpdates = new QAction(MainWindow);
        actionCheckUpdates->setObjectName(QString::fromUtf8("actionCheckUpdates"));
        QIcon icon30;
        iconThemeName = QString::fromUtf8("update");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon30 = QIcon::fromTheme(iconThemeName);
        } else {
            icon30.addFile(QString::fromUtf8(":/Default/icons/update.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionCheckUpdates->setIcon(icon30);
        actionCallStack = new QAction(MainWindow);
        actionCallStack->setObjectName(QString::fromUtf8("actionCallStack"));
        QIcon icon31;
        iconThemeName = QString::fromUtf8("callstack");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon31 = QIcon::fromTheme(iconThemeName);
        } else {
            icon31.addFile(QString::fromUtf8(":/Default/icons/callstack.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionCallStack->setIcon(icon31);
        actionShortcuts = new QAction(MainWindow);
        actionShortcuts->setObjectName(QString::fromUtf8("actionShortcuts"));
        QIcon icon32;
        iconThemeName = QString::fromUtf8("shortcut");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon32 = QIcon::fromTheme(iconThemeName);
        } else {
            icon32.addFile(QString::fromUtf8(":/Default/icons/shortcut.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionShortcuts->setIcon(icon32);
        actionDonate = new QAction(MainWindow);
        actionDonate->setObjectName(QString::fromUtf8("actionDonate"));
        QIcon icon33;
        iconThemeName = QString::fromUtf8("donate");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon33 = QIcon::fromTheme(iconThemeName);
        } else {
            icon33.addFile(QString::fromUtf8(":/Default/icons/donate.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionDonate->setIcon(icon33);
        actionCalculator = new QAction(MainWindow);
        actionCalculator->setObjectName(QString::fromUtf8("actionCalculator"));
        QIcon icon34;
        iconThemeName = QString::fromUtf8("calculator");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon34 = QIcon::fromTheme(iconThemeName);
        } else {
            icon34.addFile(QString::fromUtf8(":/Default/icons/calculator.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionCalculator->setIcon(icon34);
        actionAttach = new QAction(MainWindow);
        actionAttach->setObjectName(QString::fromUtf8("actionAttach"));
        QIcon icon35;
        iconThemeName = QString::fromUtf8("attach");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon35 = QIcon::fromTheme(iconThemeName);
        } else {
            icon35.addFile(QString::fromUtf8(":/Default/icons/attach.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionAttach->setIcon(icon35);
        actionDetach = new QAction(MainWindow);
        actionDetach->setObjectName(QString::fromUtf8("actionDetach"));
        QIcon icon36;
        iconThemeName = QString::fromUtf8("detach");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon36 = QIcon::fromTheme(iconThemeName);
        } else {
            icon36.addFile(QString::fromUtf8(":/Default/icons/detach.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionDetach->setIcon(icon36);
        actionChangeCommandLine = new QAction(MainWindow);
        actionChangeCommandLine->setObjectName(QString::fromUtf8("actionChangeCommandLine"));
        QIcon icon37;
        iconThemeName = QString::fromUtf8("changeargs");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon37 = QIcon::fromTheme(iconThemeName);
        } else {
            icon37.addFile(QString::fromUtf8(":/Default/icons/changeargs.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionChangeCommandLine->setIcon(icon37);
        actionSkipNextInstruction = new QAction(MainWindow);
        actionSkipNextInstruction->setObjectName(QString::fromUtf8("actionSkipNextInstruction"));
        QIcon icon38;
        iconThemeName = QString::fromUtf8("arrow-skip");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon38 = QIcon::fromTheme(iconThemeName);
        } else {
            icon38.addFile(QString::fromUtf8(":/Default/icons/arrow-skip.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionSkipNextInstruction->setIcon(icon38);
        actionTopmost = new QAction(MainWindow);
        actionTopmost->setObjectName(QString::fromUtf8("actionTopmost"));
        actionTopmost->setCheckable(true);
        QIcon icon39;
        iconThemeName = QString::fromUtf8("topmost");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon39 = QIcon::fromTheme(iconThemeName);
        } else {
            icon39.addFile(QString::fromUtf8(":/Default/icons/topmost.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionTopmost->setIcon(icon39);
        actionReportBug = new QAction(MainWindow);
        actionReportBug->setObjectName(QString::fromUtf8("actionReportBug"));
        QIcon icon40;
        iconThemeName = QString::fromUtf8("bug-report");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon40 = QIcon::fromTheme(iconThemeName);
        } else {
            icon40.addFile(QString::fromUtf8(":/Default/icons/bug-report.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionReportBug->setIcon(icon40);
        actionSource = new QAction(MainWindow);
        actionSource->setObjectName(QString::fromUtf8("actionSource"));
        QIcon icon41;
        iconThemeName = QString::fromUtf8("source");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon41 = QIcon::fromTheme(iconThemeName);
        } else {
            icon41.addFile(QString::fromUtf8(":/Default/icons/source.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionSource->setIcon(icon41);
        actionManual = new QAction(MainWindow);
        actionManual->setObjectName(QString::fromUtf8("actionManual"));
        QIcon icon42;
        iconThemeName = QString::fromUtf8("win-help");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon42 = QIcon::fromTheme(iconThemeName);
        } else {
            icon42.addFile(QString::fromUtf8(":/Default/icons/win-help.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionManual->setIcon(icon42);
        actionFaq = new QAction(MainWindow);
        actionFaq->setObjectName(QString::fromUtf8("actionFaq"));
        QIcon icon43;
        iconThemeName = QString::fromUtf8("faq");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon43 = QIcon::fromTheme(iconThemeName);
        } else {
            icon43.addFile(QString::fromUtf8(":/Default/icons/faq.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionFaq->setIcon(icon43);
        actionSEHChain = new QAction(MainWindow);
        actionSEHChain->setObjectName(QString::fromUtf8("actionSEHChain"));
        QIcon icon44;
        iconThemeName = QString::fromUtf8("seh-chain");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon44 = QIcon::fromTheme(iconThemeName);
        } else {
            icon44.addFile(QString::fromUtf8(":/Default/icons/seh-chain.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionSEHChain->setIcon(icon44);
        actionHideDebugger = new QAction(MainWindow);
        actionHideDebugger->setObjectName(QString::fromUtf8("actionHideDebugger"));
        QIcon icon45;
        iconThemeName = QString::fromUtf8("hide-debugger");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon45 = QIcon::fromTheme(iconThemeName);
        } else {
            icon45.addFile(QString::fromUtf8(":/Default/icons/hide-debugger.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionHideDebugger->setIcon(icon45);
        actionReloadStylesheet = new QAction(MainWindow);
        actionReloadStylesheet->setObjectName(QString::fromUtf8("actionReloadStylesheet"));
        QIcon icon46;
        iconThemeName = QString::fromUtf8("css");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon46 = QIcon::fromTheme(iconThemeName);
        } else {
            icon46.addFile(QString::fromUtf8(":/Default/icons/css.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionReloadStylesheet->setIcon(icon46);
        actionNotes = new QAction(MainWindow);
        actionNotes->setObjectName(QString::fromUtf8("actionNotes"));
        QIcon icon47;
        iconThemeName = QString::fromUtf8("notes");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon47 = QIcon::fromTheme(iconThemeName);
        } else {
            icon47.addFile(QString::fromUtf8(":/Default/icons/notes.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionNotes->setIcon(icon47);
        actionHandles = new QAction(MainWindow);
        actionHandles->setObjectName(QString::fromUtf8("actionHandles"));
        QIcon icon48;
        iconThemeName = QString::fromUtf8("handles");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon48 = QIcon::fromTheme(iconThemeName);
        } else {
            icon48.addFile(QString::fromUtf8(":/Default/icons/handles.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionHandles->setIcon(icon48);
        actionTocnd = new QAction(MainWindow);
        actionTocnd->setObjectName(QString::fromUtf8("actionTocnd"));
        QIcon icon49;
        iconThemeName = QString::fromUtf8("traceover");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon49 = QIcon::fromTheme(iconThemeName);
        } else {
            icon49.addFile(QString::fromUtf8(":/Default/icons/traceover.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionTocnd->setIcon(icon49);
        actionTicnd = new QAction(MainWindow);
        actionTicnd->setObjectName(QString::fromUtf8("actionTicnd"));
        QIcon icon50;
        iconThemeName = QString::fromUtf8("traceinto");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon50 = QIcon::fromTheme(iconThemeName);
        } else {
            icon50.addFile(QString::fromUtf8(":/Default/icons/traceinto.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionTicnd->setIcon(icon50);
        actionTRBit = new QAction(MainWindow);
        actionTRBit->setObjectName(QString::fromUtf8("actionTRBit"));
        QIcon icon51;
        iconThemeName = QString::fromUtf8("bit");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon51 = QIcon::fromTheme(iconThemeName);
        } else {
            icon51.addFile(QString::fromUtf8(":/Default/icons/bit.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionTRBit->setIcon(icon51);
        actionTRByte = new QAction(MainWindow);
        actionTRByte->setObjectName(QString::fromUtf8("actionTRByte"));
        QIcon icon52;
        iconThemeName = QString::fromUtf8("byte");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon52 = QIcon::fromTheme(iconThemeName);
        } else {
            icon52.addFile(QString::fromUtf8(":/Default/icons/byte.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionTRByte->setIcon(icon52);
        actionTRWord = new QAction(MainWindow);
        actionTRWord->setObjectName(QString::fromUtf8("actionTRWord"));
        QIcon icon53;
        iconThemeName = QString::fromUtf8("word");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon53 = QIcon::fromTheme(iconThemeName);
        } else {
            icon53.addFile(QString::fromUtf8(":/Default/icons/word.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionTRWord->setIcon(icon53);
        actionTRReset = new QAction(MainWindow);
        actionTRReset->setObjectName(QString::fromUtf8("actionTRReset"));
        actionTRTIBT = new QAction(MainWindow);
        actionTRTIBT->setObjectName(QString::fromUtf8("actionTRTIBT"));
        actionTRTIBT->setIcon(icon50);
        actionTRTOBT = new QAction(MainWindow);
        actionTRTOBT->setObjectName(QString::fromUtf8("actionTRTOBT"));
        actionTRTOBT->setIcon(icon49);
        actionTRTIIT = new QAction(MainWindow);
        actionTRTIIT->setObjectName(QString::fromUtf8("actionTRTIIT"));
        actionTRTIIT->setIcon(icon6);
        actionTRTOIT = new QAction(MainWindow);
        actionTRTOIT->setObjectName(QString::fromUtf8("actionTRTOIT"));
        actionTRTOIT->setIcon(icon7);
        actionTRNone = new QAction(MainWindow);
        actionTRNone->setObjectName(QString::fromUtf8("actionTRNone"));
        QIcon icon54;
        iconThemeName = QString::fromUtf8("close-all-tabs");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon54 = QIcon::fromTheme(iconThemeName);
        } else {
            icon54.addFile(QString::fromUtf8(":/Default/icons/close-all-tabs.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionTRNone->setIcon(icon54);
        actionRtu = new QAction(MainWindow);
        actionRtu->setObjectName(QString::fromUtf8("actionRtu"));
        QIcon icon55;
        iconThemeName = QString::fromUtf8("runtouser");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon55 = QIcon::fromTheme(iconThemeName);
        } else {
            icon55.addFile(QString::fromUtf8(":/Default/icons/runtouser.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionRtu->setIcon(icon55);
        actionRunExpression = new QAction(MainWindow);
        actionRunExpression->setObjectName(QString::fromUtf8("actionRunExpression"));
        actionRunExpression->setIcon(icon16);
        actionInstrUndo = new QAction(MainWindow);
        actionInstrUndo->setObjectName(QString::fromUtf8("actionInstrUndo"));
        QIcon icon56;
        iconThemeName = QString::fromUtf8("undo");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon56 = QIcon::fromTheme(iconThemeName);
        } else {
            icon56.addFile(QString::fromUtf8(":/Default/icons/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionInstrUndo->setIcon(icon56);
        actionCrashDump = new QAction(MainWindow);
        actionCrashDump->setObjectName(QString::fromUtf8("actionCrashDump"));
        QIcon icon57;
        iconThemeName = QString::fromUtf8("crash_dump");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon57 = QIcon::fromTheme(iconThemeName);
        } else {
            icon57.addFile(QString::fromUtf8(":/Default/icons/crash_dump.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionCrashDump->setIcon(icon57);
        actionManageFavourite = new QAction(MainWindow);
        actionManageFavourite->setObjectName(QString::fromUtf8("actionManageFavourite"));
        QIcon icon58;
        iconThemeName = QString::fromUtf8("star");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon58 = QIcon::fromTheme(iconThemeName);
        } else {
            icon58.addFile(QString::fromUtf8(":/Default/icons/star.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionManageFavourite->setIcon(icon58);
        actionStepOverSource = new QAction(MainWindow);
        actionStepOverSource->setObjectName(QString::fromUtf8("actionStepOverSource"));
        actionStepOverSource->setIcon(icon7);
        actionStepIntoSource = new QAction(MainWindow);
        actionStepIntoSource->setObjectName(QString::fromUtf8("actionStepIntoSource"));
        actionStepIntoSource->setIcon(icon6);
        actionGraph = new QAction(MainWindow);
        actionGraph->setObjectName(QString::fromUtf8("actionGraph"));
        QIcon icon59;
        iconThemeName = QString::fromUtf8("graph");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon59 = QIcon::fromTheme(iconThemeName);
        } else {
            icon59.addFile(QString::fromUtf8(":/Default/icons/graph.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionGraph->setIcon(icon59);
        actionseStepInto = new QAction(MainWindow);
        actionseStepInto->setObjectName(QString::fromUtf8("actionseStepInto"));
        actionseStepInto->setIcon(icon6);
        actionseStepOver = new QAction(MainWindow);
        actionseStepOver->setObjectName(QString::fromUtf8("actionseStepOver"));
        actionseStepOver->setIcon(icon7);
        actionseRun = new QAction(MainWindow);
        actionseRun->setObjectName(QString::fromUtf8("actionseRun"));
        actionseRun->setIcon(icon2);
        actionBlog = new QAction(MainWindow);
        actionBlog->setObjectName(QString::fromUtf8("actionBlog"));
        QIcon icon60;
        iconThemeName = QString::fromUtf8("hex");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon60 = QIcon::fromTheme(iconThemeName);
        } else {
            icon60.addFile(QString::fromUtf8(":/Default/icons/hex.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionBlog->setIcon(icon60);
        actionAnimateInto = new QAction(MainWindow);
        actionAnimateInto->setObjectName(QString::fromUtf8("actionAnimateInto"));
        QIcon icon61;
        iconThemeName = QString::fromUtf8("animateinto");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon61 = QIcon::fromTheme(iconThemeName);
        } else {
            icon61.addFile(QString::fromUtf8(":/Default/icons/animateinto.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionAnimateInto->setIcon(icon61);
        actionAnimateOver = new QAction(MainWindow);
        actionAnimateOver->setObjectName(QString::fromUtf8("actionAnimateOver"));
        QIcon icon62;
        iconThemeName = QString::fromUtf8("animateover");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon62 = QIcon::fromTheme(iconThemeName);
        } else {
            icon62.addFile(QString::fromUtf8(":/Default/icons/animateover.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionAnimateOver->setIcon(icon62);
        actionAnimateCommand = new QAction(MainWindow);
        actionAnimateCommand->setObjectName(QString::fromUtf8("actionAnimateCommand"));
        QIcon icon63;
        iconThemeName = QString::fromUtf8("animatecommand");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon63 = QIcon::fromTheme(iconThemeName);
        } else {
            icon63.addFile(QString::fromUtf8(":/Default/icons/animatecommand.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionAnimateCommand->setIcon(icon63);
        actionSetInitializationScript = new QAction(MainWindow);
        actionSetInitializationScript->setObjectName(QString::fromUtf8("actionSetInitializationScript"));
        QIcon icon64;
        iconThemeName = QString::fromUtf8("initscript");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon64 = QIcon::fromTheme(iconThemeName);
        } else {
            icon64.addFile(QString::fromUtf8(":/Default/icons/initscript.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionSetInitializationScript->setIcon(icon64);
        actionImportSettings = new QAction(MainWindow);
        actionImportSettings->setObjectName(QString::fromUtf8("actionImportSettings"));
        QIcon icon65;
        iconThemeName = QString::fromUtf8("importsettings");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon65 = QIcon::fromTheme(iconThemeName);
        } else {
            icon65.addFile(QString::fromUtf8(":/Default/icons/importsettings.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionImportSettings->setIcon(icon65);
        actionCustomizeMenus = new QAction(MainWindow);
        actionCustomizeMenus->setObjectName(QString::fromUtf8("actionCustomizeMenus"));
        QIcon icon66;
        iconThemeName = QString::fromUtf8("analysis");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon66 = QIcon::fromTheme(iconThemeName);
        } else {
            icon66.addFile(QString::fromUtf8(":/Default/icons/analysis.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionCustomizeMenus->setIcon(icon66);
        actionImportdatabase = new QAction(MainWindow);
        actionImportdatabase->setObjectName(QString::fromUtf8("actionImportdatabase"));
        QIcon icon67;
        iconThemeName = QString::fromUtf8("database-import");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon67 = QIcon::fromTheme(iconThemeName);
        } else {
            icon67.addFile(QString::fromUtf8(":/Default/icons/database-import.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionImportdatabase->setIcon(icon67);
        actionExportdatabase = new QAction(MainWindow);
        actionExportdatabase->setObjectName(QString::fromUtf8("actionExportdatabase"));
        QIcon icon68;
        iconThemeName = QString::fromUtf8("database-export");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon68 = QIcon::fromTheme(iconThemeName);
        } else {
            icon68.addFile(QString::fromUtf8(":/Default/icons/database-export.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionExportdatabase->setIcon(icon68);
        actionPreviousTab = new QAction(MainWindow);
        actionPreviousTab->setObjectName(QString::fromUtf8("actionPreviousTab"));
        QIcon icon69;
        iconThemeName = QString::fromUtf8("previous");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon69 = QIcon::fromTheme(iconThemeName);
        } else {
            icon69.addFile(QString::fromUtf8(":/Default/icons/previous.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionPreviousTab->setIcon(icon69);
        actionNextTab = new QAction(MainWindow);
        actionNextTab->setObjectName(QString::fromUtf8("actionNextTab"));
        QIcon icon70;
        iconThemeName = QString::fromUtf8("next");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon70 = QIcon::fromTheme(iconThemeName);
        } else {
            icon70.addFile(QString::fromUtf8(":/Default/icons/next.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionNextTab->setIcon(icon70);
        actionPreviousView = new QAction(MainWindow);
        actionPreviousView->setObjectName(QString::fromUtf8("actionPreviousView"));
        actionPreviousView->setIcon(icon69);
        actionNextView = new QAction(MainWindow);
        actionNextView->setObjectName(QString::fromUtf8("actionNextView"));
        actionNextView->setIcon(icon70);
        actionHideTab = new QAction(MainWindow);
        actionHideTab->setObjectName(QString::fromUtf8("actionHideTab"));
        QIcon icon71;
        iconThemeName = QString::fromUtf8("hidetab");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon71 = QIcon::fromTheme(iconThemeName);
        } else {
            icon71.addFile(QString::fromUtf8(":/Default/icons/hidetab.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionHideTab->setIcon(icon71);
        actionVariables = new QAction(MainWindow);
        actionVariables->setObjectName(QString::fromUtf8("actionVariables"));
        QIcon icon72;
        iconThemeName = QString::fromUtf8("variables");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon72 = QIcon::fromTheme(iconThemeName);
        } else {
            icon72.addFile(QString::fromUtf8(":/Default/icons/variables.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionVariables->setIcon(icon72);
        actionRestartAdmin = new QAction(MainWindow);
        actionRestartAdmin->setObjectName(QString::fromUtf8("actionRestartAdmin"));
        QIcon icon73;
        iconThemeName = QString::fromUtf8("uac");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon73 = QIcon::fromTheme(iconThemeName);
        } else {
            icon73.addFile(QString::fromUtf8(":/Default/icons/uac.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionRestartAdmin->setIcon(icon73);
        actionPlugins = new QAction(MainWindow);
        actionPlugins->setObjectName(QString::fromUtf8("actionPlugins"));
        QIcon icon74;
        iconThemeName = QString::fromUtf8("plugin");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon74 = QIcon::fromTheme(iconThemeName);
        } else {
            icon74.addFile(QString::fromUtf8(":/Default/icons/plugin.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionPlugins->setIcon(icon74);
        actionTrace = new QAction(MainWindow);
        actionTrace->setObjectName(QString::fromUtf8("actionTrace"));
        QIcon icon75;
        iconThemeName = QString::fromUtf8("trace");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon75 = QIcon::fromTheme(iconThemeName);
        } else {
            icon75.addFile(QString::fromUtf8(":/Default/icons/trace.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionTrace->setIcon(icon75);
        actionModules = new QAction(MainWindow);
        actionModules->setObjectName(QString::fromUtf8("actionModules"));
        QIcon icon76;
        iconThemeName = QString::fromUtf8("lib");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon76 = QIcon::fromTheme(iconThemeName);
        } else {
            icon76.addFile(QString::fromUtf8(":/Default/icons/lib.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionModules->setIcon(icon76);
        action_Theme = new QAction(MainWindow);
        action_Theme->setObjectName(QString::fromUtf8("action_Theme"));
        actionDefaultTheme = new QAction(MainWindow);
        actionDefaultTheme->setObjectName(QString::fromUtf8("actionDefaultTheme"));
        actionDefaultTheme->setCheckable(true);
        actionDefaultTheme->setChecked(true);
        actionDbsave = new QAction(MainWindow);
        actionDbsave->setObjectName(QString::fromUtf8("actionDbsave"));
        QIcon icon77;
        iconThemeName = QString::fromUtf8("binary_save");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon77 = QIcon::fromTheme(iconThemeName);
        } else {
            icon77.addFile(QString::fromUtf8(":/Default/icons/binary_save.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionDbsave->setIcon(icon77);
        actionDbload = new QAction(MainWindow);
        actionDbload->setObjectName(QString::fromUtf8("actionDbload"));
        actionDbload->setIcon(icon4);
        actionDbrecovery = new QAction(MainWindow);
        actionDbrecovery->setObjectName(QString::fromUtf8("actionDbrecovery"));
        QIcon icon78;
        iconThemeName = QString::fromUtf8("help");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon78 = QIcon::fromTheme(iconThemeName);
        } else {
            icon78.addFile(QString::fromUtf8(":/Default/icons/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionDbrecovery->setIcon(icon78);
        actionDbclear = new QAction(MainWindow);
        actionDbclear->setObjectName(QString::fromUtf8("actionDbclear"));
        actionDbclear->setIcon(icon57);
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        actionMnemonic_Help = new QAction(MainWindow);
        actionMnemonic_Help->setObjectName(QString::fromUtf8("actionMnemonic_Help"));
        QIcon icon79;
        icon79.addFile(QString::fromUtf8(":/Default/icons/helpmnemonic.png"), QSize(), QIcon::Normal, QIcon::On);
        actionMnemonic_Help->setIcon(icon79);
        actionReleaseNotes = new QAction(MainWindow);
        actionReleaseNotes->setObjectName(QString::fromUtf8("actionReleaseNotes"));
        QIcon icon80;
        iconThemeName = QString::fromUtf8("bug");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon80 = QIcon::fromTheme(iconThemeName);
        } else {
            icon80.addFile(QString::fromUtf8(":/Default/icons/bug.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionReleaseNotes->setIcon(icon80);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 868, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuRecentFiles = new QMenu(menuFile);
        menuRecentFiles->setObjectName(QString::fromUtf8("menuRecentFiles"));
        QIcon icon81;
        iconThemeName = QString::fromUtf8("recentfiles");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon81 = QIcon::fromTheme(iconThemeName);
        } else {
            icon81.addFile(QString::fromUtf8(":/Default/icons/recentfiles.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        menuRecentFiles->setIcon(icon81);
        menuDatabase = new QMenu(menuFile);
        menuDatabase->setObjectName(QString::fromUtf8("menuDatabase"));
        QIcon icon82;
        iconThemeName = QString::fromUtf8("data-copy");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon82 = QIcon::fromTheme(iconThemeName);
        } else {
            icon82.addFile(QString::fromUtf8(":/Default/icons/data-copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        menuDatabase->setIcon(icon82);
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuDebug = new QMenu(menuBar);
        menuDebug->setObjectName(QString::fromUtf8("menuDebug"));
        menuAdvanced = new QMenu(menuDebug);
        menuAdvanced->setObjectName(QString::fromUtf8("menuAdvanced"));
        QIcon icon83;
        iconThemeName = QString::fromUtf8("branchpreview");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon83 = QIcon::fromTheme(iconThemeName);
        } else {
            icon83.addFile(QString::fromUtf8(":/Default/icons/branchpreview.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        menuAdvanced->setIcon(icon83);
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuPlugins = new QMenu(menuBar);
        menuPlugins->setObjectName(QString::fromUtf8("menuPlugins"));
        menuOptions = new QMenu(menuBar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        menuTheme = new QMenu(menuOptions);
        menuTheme->setObjectName(QString::fromUtf8("menuTheme"));
        QIcon icon84;
        iconThemeName = QString::fromUtf8("themes");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon84 = QIcon::fromTheme(iconThemeName);
        } else {
            icon84.addFile(QString::fromUtf8(":/Default/icons/themes.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        menuTheme->setIcon(icon84);
        menuFavourites = new QMenu(menuBar);
        menuFavourites->setObjectName(QString::fromUtf8("menuFavourites"));
        menu_Trace = new QMenu(menuBar);
        menu_Trace->setObjectName(QString::fromUtf8("menu_Trace"));
        menuTrace_record = new QMenu(menu_Trace);
        menuTrace_record->setObjectName(QString::fromUtf8("menuTrace_record"));
        menuTrace_record->setIcon(icon75);
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setMovable(false);
        mainToolBar->setIconSize(QSize(16, 16));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setSizeGripEnabled(false);
        MainWindow->setStatusBar(statusBar);
        cmdBar = new QToolBar(MainWindow);
        cmdBar->setObjectName(QString::fromUtf8("cmdBar"));
        cmdBar->setMovable(false);
        cmdBar->setAllowedAreas(Qt::NoToolBarArea);
        MainWindow->addToolBar(Qt::BottomToolBarArea, cmdBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuDebug->menuAction());
        menuBar->addAction(menu_Trace->menuAction());
        menuBar->addAction(menuPlugins->menuAction());
        menuBar->addAction(menuFavourites->menuAction());
        menuBar->addAction(menuOptions->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(menuRecentFiles->menuAction());
        menuFile->addAction(actionAttach);
        menuFile->addAction(actionDetach);
        menuFile->addAction(menuDatabase->menuAction());
        menuFile->addAction(actionPatches);
        menuFile->addAction(actionChangeCommandLine);
        menuFile->addAction(actionRestartAdmin);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuRecentFiles->addSeparator();
        menuDatabase->addAction(actionDbsave);
        menuDatabase->addAction(actionDbload);
        menuDatabase->addAction(actionDbrecovery);
        menuDatabase->addAction(actionDbclear);
        menuDatabase->addSeparator();
        menuDatabase->addAction(actionImportdatabase);
        menuDatabase->addAction(actionExportdatabase);
        menuView->addAction(actionCpu);
        menuView->addAction(actionLog);
        menuView->addAction(actionNotes);
        menuView->addAction(actionBreakpoints);
        menuView->addAction(actionMemoryMap);
        menuView->addAction(actionCallStack);
        menuView->addAction(actionSEHChain);
        menuView->addAction(actionScript);
        menuView->addAction(actionSymbolInfo);
        menuView->addAction(actionModules);
        menuView->addAction(actionSource);
        menuView->addAction(actionReferences);
        menuView->addAction(actionThreads);
        menuView->addAction(actionHandles);
        menuView->addAction(actionGraph);
        menuView->addAction(actionTrace);
        menuView->addAction(actionPatches);
        menuView->addAction(actionComments);
        menuView->addAction(actionLabels);
        menuView->addAction(actionBookmarks);
        menuView->addAction(actionFunctions);
        menuView->addAction(actionVariables);
        menuView->addAction(actionCommand);
        menuView->addSeparator();
        menuView->addAction(actionPreviousTab);
        menuView->addAction(actionNextTab);
        menuView->addAction(actionPreviousView);
        menuView->addAction(actionNextView);
        menuView->addAction(actionHideTab);
        menuDebug->addAction(actionRun);
        menuDebug->addAction(actionRunSelection);
        menuDebug->addAction(actionPause);
        menuDebug->addAction(actionRestart);
        menuDebug->addAction(actionClose);
        menuDebug->addSeparator();
        menuDebug->addAction(actionStepInto);
        menuDebug->addAction(actionStepOver);
        menuDebug->addSeparator();
        menuDebug->addAction(actionRtr);
        menuDebug->addAction(actionRtu);
        menuDebug->addSeparator();
        menuDebug->addSeparator();
        menuDebug->addAction(menuAdvanced->menuAction());
        menuAdvanced->addAction(actioneRun);
        menuAdvanced->addAction(actionseRun);
        menuAdvanced->addAction(actionRunExpression);
        menuAdvanced->addSeparator();
        menuAdvanced->addAction(actioneStepInto);
        menuAdvanced->addAction(actionseStepInto);
        menuAdvanced->addAction(actionStepIntoSource);
        menuAdvanced->addAction(actioneStepOver);
        menuAdvanced->addAction(actionseStepOver);
        menuAdvanced->addAction(actionStepOverSource);
        menuAdvanced->addSeparator();
        menuAdvanced->addAction(actioneRtr);
        menuAdvanced->addAction(actionSkipNextInstruction);
        menuAdvanced->addAction(actionInstrUndo);
        menuAdvanced->addSeparator();
        menuAdvanced->addAction(actionHideDebugger);
        menuHelp->addAction(actionCalculator);
        menuHelp->addAction(actionMnemonic_Help);
        menuHelp->addAction(actionCheckUpdates);
        menuHelp->addAction(actionBlog);
        menuHelp->addAction(actionDonate);
        menuHelp->addAction(actionReportBug);
        menuHelp->addAction(actionPlugins);
        menuHelp->addSeparator();
        menuHelp->addAction(actionManual);
        menuHelp->addAction(actionFaq);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionReleaseNotes);
        menuHelp->addAction(actionAbout_Qt);
        menuHelp->addSeparator();
        menuHelp->addAction(actionCrashDump);
        menuOptions->addAction(actionSettings);
        menuOptions->addAction(actionAppearance);
        menuOptions->addAction(actionShortcuts);
        menuOptions->addAction(actionCustomizeMenus);
        menuOptions->addAction(actionTopmost);
        menuOptions->addAction(actionReloadStylesheet);
        menuOptions->addAction(actionSetInitializationScript);
        menuOptions->addAction(actionImportSettings);
        menuOptions->addAction(menuTheme->menuAction());
        menuTheme->addAction(actionDefaultTheme);
        menu_Trace->addAction(actionTicnd);
        menu_Trace->addAction(actionTocnd);
        menu_Trace->addAction(menuTrace_record->menuAction());
        menu_Trace->addSeparator();
        menu_Trace->addAction(actionAnimateInto);
        menu_Trace->addAction(actionAnimateOver);
        menu_Trace->addAction(actionAnimateCommand);
        menuTrace_record->addAction(actionTRBit);
        menuTrace_record->addAction(actionTRByte);
        menuTrace_record->addAction(actionTRWord);
        menuTrace_record->addAction(actionTRNone);
        menuTrace_record->addSeparator();
        menuTrace_record->addAction(actionTRTIBT);
        menuTrace_record->addAction(actionTRTOBT);
        menuTrace_record->addAction(actionTRTIIT);
        menuTrace_record->addAction(actionTRTOIT);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionRestart);
        mainToolBar->addAction(actionClose);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionRun);
        mainToolBar->addAction(actionPause);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionStepInto);
        mainToolBar->addAction(actionStepOver);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionTicnd);
        mainToolBar->addAction(actionTocnd);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionRtr);
        mainToolBar->addAction(actionRtu);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionScylla);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionPatches);
        mainToolBar->addAction(actionComments);
        mainToolBar->addAction(actionLabels);
        mainToolBar->addAction(actionBookmarks);
        mainToolBar->addAction(actionFunctions);
        mainToolBar->addAction(actionVariables);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionStrings);
        mainToolBar->addAction(actionCalls);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCalculator);
        mainToolBar->addAction(actionCheckUpdates);

        retranslateUi(MainWindow);
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "WinScope", nullptr));
        actionOpen->setText(QApplication::translate("MainWindow", "&Open", nullptr));
#ifndef QT_NO_STATUSTIP
        actionOpen->setStatusTip(QApplication::translate("MainWindow", "Run the file and start debugging.", nullptr));
#endif // QT_NO_STATUSTIP
        actionExit->setText(QApplication::translate("MainWindow", "E&xit", nullptr));
#ifndef QT_NO_STATUSTIP
        actionExit->setStatusTip(QApplication::translate("MainWindow", "Exit WinScope.", nullptr));
#endif // QT_NO_STATUSTIP
        actionRun->setText(QApplication::translate("MainWindow", "&Run", nullptr));
#ifndef QT_NO_STATUSTIP
        actionRun->setStatusTip(QApplication::translate("MainWindow", "Run the debuggee or restart debugging.", nullptr));
#endif // QT_NO_STATUSTIP
        actionPause->setText(QApplication::translate("MainWindow", "&Pause", nullptr));
#ifndef QT_NO_STATUSTIP
        actionPause->setStatusTip(QApplication::translate("MainWindow", "Pause the execution of debuggee to debug it, or stop animate into/animate over.", nullptr));
#endif // QT_NO_STATUSTIP
        actionRestart->setText(QApplication::translate("MainWindow", "Re&start", nullptr));
#ifndef QT_NO_STATUSTIP
        actionRestart->setStatusTip(QApplication::translate("MainWindow", "Stop the debuggee and restart it, or restart the last debugged file.", nullptr));
#endif // QT_NO_STATUSTIP
        actionClose->setText(QApplication::translate("MainWindow", "&Close", nullptr));
#ifndef QT_NO_STATUSTIP
        actionClose->setStatusTip(QApplication::translate("MainWindow", "Terminate the debuggee and stop debugging.", nullptr));
#endif // QT_NO_STATUSTIP
        actionStepInto->setText(QApplication::translate("MainWindow", "Step &into", nullptr));
#ifndef QT_NO_STATUSTIP
        actionStepInto->setStatusTip(QApplication::translate("MainWindow", "Execute a single instruction", nullptr));
#endif // QT_NO_STATUSTIP
        actionStepOver->setText(QApplication::translate("MainWindow", "Step &over", nullptr));
#ifndef QT_NO_STATUSTIP
        actionStepOver->setStatusTip(QApplication::translate("MainWindow", "Execute a single instruction without entering the CALL instruction", nullptr));
#endif // QT_NO_STATUSTIP
        actionCommand->setText(QApplication::translate("MainWindow", "Co&mmand", nullptr));
#ifndef QT_NO_STATUSTIP
        actionCommand->setStatusTip(QApplication::translate("MainWindow", "Focus on the command bar", nullptr));
#endif // QT_NO_STATUSTIP
        actionRtr->setText(QApplication::translate("MainWindow", "E&xecute till return", nullptr));
#ifndef QT_NO_STATUSTIP
        actionRtr->setStatusTip(QApplication::translate("MainWindow", "Trace over until the RET instruction would be executed and stack pointer is less than or equal to current value.", nullptr));
#endif // QT_NO_STATUSTIP
        actionMemoryMap->setText(QApplication::translate("MainWindow", "&Memory Map", nullptr));
#ifndef QT_NO_STATUSTIP
        actionMemoryMap->setStatusTip(QApplication::translate("MainWindow", "Show the Memory Map tab.", nullptr));
#endif // QT_NO_STATUSTIP
        actionLog->setText(QApplication::translate("MainWindow", "&Log Window", nullptr));
#ifndef QT_NO_STATUSTIP
        actionLog->setStatusTip(QApplication::translate("MainWindow", "Show the Log tab.", nullptr));
#endif // QT_NO_STATUSTIP
        actionAbout->setText(QApplication::translate("MainWindow", "&About", nullptr));
#ifndef QT_NO_STATUSTIP
        actionAbout->setStatusTip(QApplication::translate("MainWindow", "Display information about WinScope", nullptr));
#endif // QT_NO_STATUSTIP
        actionScylla->setText(QApplication::translate("MainWindow", "Scylla", nullptr));
        actionBreakpoints->setText(QApplication::translate("MainWindow", "&Breakpoints", nullptr));
#ifndef QT_NO_STATUSTIP
        actionBreakpoints->setStatusTip(QApplication::translate("MainWindow", "Show the Breakpoints tab.", nullptr));
#endif // QT_NO_STATUSTIP
        actioneStepInto->setText(QApplication::translate("MainWindow", "Step into (pass all exceptions)", nullptr));
#ifndef QT_NO_STATUSTIP
        actioneStepInto->setStatusTip(QApplication::translate("MainWindow", "Execute a single instruction, pass exceptions to the debuggee.", nullptr));
#endif // QT_NO_STATUSTIP
        actioneStepOver->setText(QApplication::translate("MainWindow", "Step over (pass all exceptions)", nullptr));
        actioneRun->setText(QApplication::translate("MainWindow", "Run (pass all exceptions)", nullptr));
#ifndef QT_NO_STATUSTIP
        actioneRun->setStatusTip(QApplication::translate("MainWindow", "Run the debuggee and pass all exceptions to the debuggee without pausing.", nullptr));
#endif // QT_NO_STATUSTIP
        actioneRtr->setText(QApplication::translate("MainWindow", "Execute till return (pass all exceptions)", nullptr));
        actionScript->setText(QApplication::translate("MainWindow", "&Script", nullptr));
#ifndef QT_NO_TOOLTIP
        actionScript->setToolTip(QApplication::translate("MainWindow", "Script", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionScript->setStatusTip(QApplication::translate("MainWindow", "Show the Script tab.", nullptr));
#endif // QT_NO_STATUSTIP
        actionRunSelection->setText(QApplication::translate("MainWindow", "Run &until selection", nullptr));
#ifndef QT_NO_TOOLTIP
        actionRunSelection->setToolTip(QApplication::translate("MainWindow", "Run until selection", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionRunSelection->setStatusTip(QApplication::translate("MainWindow", "Put a breakpoint on selection and run the debuggee.", nullptr));
#endif // QT_NO_STATUSTIP
        actionCpu->setText(QApplication::translate("MainWindow", "&CPU", nullptr));
#ifndef QT_NO_TOOLTIP
        actionCpu->setToolTip(QApplication::translate("MainWindow", "CPU", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionCpu->setStatusTip(QApplication::translate("MainWindow", "Show the CPU tab to display the disassembly.", nullptr));
#endif // QT_NO_STATUSTIP
        actionSymbolInfo->setText(QApplication::translate("MainWindow", "Symbol &Info", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSymbolInfo->setToolTip(QApplication::translate("MainWindow", "Symbol Info", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSymbolInfo->setStatusTip(QApplication::translate("MainWindow", "Show the Symbols tab.", nullptr));
#endif // QT_NO_STATUSTIP
        actionReferences->setText(QApplication::translate("MainWindow", "&References", nullptr));
#ifndef QT_NO_TOOLTIP
        actionReferences->setToolTip(QApplication::translate("MainWindow", "References", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionReferences->setStatusTip(QApplication::translate("MainWindow", "Show the References tab.", nullptr));
#endif // QT_NO_STATUSTIP
        actionThreads->setText(QApplication::translate("MainWindow", "&Threads", nullptr));
#ifndef QT_NO_TOOLTIP
        actionThreads->setToolTip(QApplication::translate("MainWindow", "Threads", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionThreads->setStatusTip(QApplication::translate("MainWindow", "Show the Threads tab.", nullptr));
#endif // QT_NO_STATUSTIP
        actionSettings->setText(QApplication::translate("MainWindow", "&Preferences", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSettings->setToolTip(QApplication::translate("MainWindow", "Preferences", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSettings->setStatusTip(QApplication::translate("MainWindow", "Opem the Preferences dialog.", nullptr));
#endif // QT_NO_STATUSTIP
        actionStrings->setText(QApplication::translate("MainWindow", "&Find Strings", nullptr));
#ifndef QT_NO_TOOLTIP
        actionStrings->setToolTip(QApplication::translate("MainWindow", "Find Strings", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionStrings->setStatusTip(QApplication::translate("MainWindow", "Find possible strings in the current module. Equivalent command \"strref\"", nullptr));
#endif // QT_NO_STATUSTIP
        actionAppearance->setText(QApplication::translate("MainWindow", "&Appearance", nullptr));
#ifndef QT_NO_STATUSTIP
        actionAppearance->setStatusTip(QApplication::translate("MainWindow", "Open the Appearance dialog to adjust color and font settings.", nullptr));
#endif // QT_NO_STATUSTIP
        actionCalls->setText(QApplication::translate("MainWindow", "Find Intermodular Calls", nullptr));
#ifndef QT_NO_TOOLTIP
        actionCalls->setToolTip(QApplication::translate("MainWindow", "Find Intermodular Calls", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionCalls->setStatusTip(QApplication::translate("MainWindow", "Find intermodular calls in the current module. Equivalent command \"modcallfind\"", nullptr));
#endif // QT_NO_STATUSTIP
        actionPatches->setText(QApplication::translate("MainWindow", "Patch file...", nullptr));
#ifndef QT_NO_TOOLTIP
        actionPatches->setToolTip(QApplication::translate("MainWindow", "Patches", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionPatches->setStatusTip(QApplication::translate("MainWindow", "Open the patch dialog.", nullptr));
#endif // QT_NO_STATUSTIP
        actionComments->setText(QApplication::translate("MainWindow", "Comments", nullptr));
#ifndef QT_NO_STATUSTIP
        actionComments->setStatusTip(QApplication::translate("MainWindow", "Show a list of comments. Equivalent command \"commentlist\"", nullptr));
#endif // QT_NO_STATUSTIP
        actionLabels->setText(QApplication::translate("MainWindow", "Labels", nullptr));
#ifndef QT_NO_STATUSTIP
        actionLabels->setStatusTip(QApplication::translate("MainWindow", "Show a list of labels. Equivalent command \"labellist\"", nullptr));
#endif // QT_NO_STATUSTIP
        actionBookmarks->setText(QApplication::translate("MainWindow", "Bookmarks", nullptr));
#ifndef QT_NO_STATUSTIP
        actionBookmarks->setStatusTip(QApplication::translate("MainWindow", "Show a list of bookmarks. Equivalent command \"bookmarklist\"", nullptr));
#endif // QT_NO_STATUSTIP
        actionFunctions->setText(QApplication::translate("MainWindow", "Functions", nullptr));
#ifndef QT_NO_STATUSTIP
        actionFunctions->setStatusTip(QApplication::translate("MainWindow", "Show a list of functions. Equivalent command \"functionlist\"", nullptr));
#endif // QT_NO_STATUSTIP
        actionCheckUpdates->setText(QApplication::translate("MainWindow", "Check for &Updates", nullptr));
#ifndef QT_NO_STATUSTIP
        actionCheckUpdates->setStatusTip(QApplication::translate("MainWindow", "Connect to Github to check for updates", nullptr));
#endif // QT_NO_STATUSTIP
        actionCallStack->setText(QApplication::translate("MainWindow", "Call Stack", nullptr));
#ifndef QT_NO_TOOLTIP
        actionCallStack->setToolTip(QApplication::translate("MainWindow", "Call Stack", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionCallStack->setStatusTip(QApplication::translate("MainWindow", "Show the Call Stack tab.", nullptr));
#endif // QT_NO_STATUSTIP
        actionShortcuts->setText(QApplication::translate("MainWindow", "Hotkeys", nullptr));
#ifndef QT_NO_STATUSTIP
        actionShortcuts->setStatusTip(QApplication::translate("MainWindow", "Open the Hotkeys dialog to customize keyboard hotkeys.", nullptr));
#endif // QT_NO_STATUSTIP
        actionDonate->setText(QApplication::translate("MainWindow", "&Donate", nullptr));
#ifndef QT_NO_TOOLTIP
        actionDonate->setToolTip(QApplication::translate("MainWindow", "Donate", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionDonate->setStatusTip(QApplication::translate("MainWindow", "Open https://winscope.example/donate", nullptr));
#endif // QT_NO_STATUSTIP
        actionCalculator->setText(QApplication::translate("MainWindow", "Calculator", nullptr));
#ifndef QT_NO_STATUSTIP
        actionCalculator->setStatusTip(QApplication::translate("MainWindow", "Open the Calculator dialog.", nullptr));
#endif // QT_NO_STATUSTIP
        actionAttach->setText(QApplication::translate("MainWindow", "Attach", nullptr));
#ifndef QT_NO_TOOLTIP
        actionAttach->setToolTip(QApplication::translate("MainWindow", "Attach", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionAttach->setStatusTip(QApplication::translate("MainWindow", "Attach the debugger to a process to debug it.", nullptr));
#endif // QT_NO_STATUSTIP
        actionDetach->setText(QApplication::translate("MainWindow", "Detach", nullptr));
#ifndef QT_NO_TOOLTIP
        actionDetach->setToolTip(QApplication::translate("MainWindow", "Detach", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionDetach->setStatusTip(QApplication::translate("MainWindow", "Detach from the debuggee so that it continues running without being debugged.", nullptr));
#endif // QT_NO_STATUSTIP
        actionChangeCommandLine->setText(QApplication::translate("MainWindow", "Change Command &Line", nullptr));
#ifndef QT_NO_STATUSTIP
        actionChangeCommandLine->setStatusTip(QApplication::translate("MainWindow", "Set the command line of the debuggee.", nullptr));
#endif // QT_NO_STATUSTIP
        actionSkipNextInstruction->setText(QApplication::translate("MainWindow", "Skip next instruction", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSkipNextInstruction->setToolTip(QApplication::translate("MainWindow", "Skip next instruction", nullptr));
#endif // QT_NO_TOOLTIP
        actionTopmost->setText(QApplication::translate("MainWindow", "Topmost", nullptr));
#ifndef QT_NO_TOOLTIP
        actionTopmost->setToolTip(QApplication::translate("MainWindow", "Topmost Window", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionTopmost->setStatusTip(QApplication::translate("MainWindow", "Make WinScope topmost", nullptr));
#endif // QT_NO_STATUSTIP
        actionReportBug->setText(QApplication::translate("MainWindow", "&Report Bug", nullptr));
#ifndef QT_NO_TOOLTIP
        actionReportBug->setToolTip(QApplication::translate("MainWindow", "Report Bug", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionReportBug->setStatusTip(QApplication::translate("MainWindow", "Open https://winscope.example/report", nullptr));
#endif // QT_NO_STATUSTIP
        actionSource->setText(QApplication::translate("MainWindow", "&Source", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSource->setToolTip(QApplication::translate("MainWindow", "Source", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSource->setStatusTip(QApplication::translate("MainWindow", "Show the Source tab.", nullptr));
#endif // QT_NO_STATUSTIP
        actionManual->setText(QApplication::translate("MainWindow", "&Manual", nullptr));
#ifndef QT_NO_STATUSTIP
        actionManual->setStatusTip(QApplication::translate("MainWindow", "Open the CHM manual or online documentation at https://winscope.example/help", nullptr));
#endif // QT_NO_STATUSTIP
        actionFaq->setText(QApplication::translate("MainWindow", "&FAQ", nullptr));
#ifndef QT_NO_TOOLTIP
        actionFaq->setToolTip(QApplication::translate("MainWindow", "FAQ", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionFaq->setStatusTip(QApplication::translate("MainWindow", "Open https://winscope.example/faq", nullptr));
#endif // QT_NO_STATUSTIP
        actionSEHChain->setText(QApplication::translate("MainWindow", "SEH Chain", nullptr));
        actionHideDebugger->setText(QApplication::translate("MainWindow", "Hide debugger (PEB)", nullptr));
#ifndef QT_NO_TOOLTIP
        actionHideDebugger->setToolTip(QApplication::translate("MainWindow", "Hide debugger (PEB)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionHideDebugger->setStatusTip(QApplication::translate("MainWindow", "Modifies the PEB to hide debugger.", nullptr));
#endif // QT_NO_STATUSTIP
        actionReloadStylesheet->setText(QApplication::translate("MainWindow", "Reload style.css", nullptr));
#ifndef QT_NO_TOOLTIP
        actionReloadStylesheet->setToolTip(QApplication::translate("MainWindow", "Reload style.css", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionReloadStylesheet->setStatusTip(QApplication::translate("MainWindow", "Read style.css from disk to apply theme changes.", nullptr));
#endif // QT_NO_STATUSTIP
        actionNotes->setText(QApplication::translate("MainWindow", "Notes", nullptr));
#ifndef QT_NO_STATUSTIP
        actionNotes->setStatusTip(QApplication::translate("MainWindow", "Show the Notes tab.", nullptr));
#endif // QT_NO_STATUSTIP
        actionHandles->setText(QApplication::translate("MainWindow", "Handles", nullptr));
#ifndef QT_NO_STATUSTIP
        actionHandles->setStatusTip(QApplication::translate("MainWindow", "Show the Handles tab.", nullptr));
#endif // QT_NO_STATUSTIP
        actionTocnd->setText(QApplication::translate("MainWindow", "Trace over...", nullptr));
#ifndef QT_NO_TOOLTIP
        actionTocnd->setToolTip(QApplication::translate("MainWindow", "Trace over...", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionTocnd->setStatusTip(QApplication::translate("MainWindow", "Step over until a condition becomes true, and optionally log and execute commands when tracing. Equivalent command \"tocnd\"", nullptr));
#endif // QT_NO_STATUSTIP
        actionTicnd->setText(QApplication::translate("MainWindow", "Trace into...", nullptr));
#ifndef QT_NO_TOOLTIP
        actionTicnd->setToolTip(QApplication::translate("MainWindow", "Trace into...", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionTicnd->setStatusTip(QApplication::translate("MainWindow", "Step into until a condition becomes true, and optionally log and execute commands when tracing. Equivalent command \"ticnd\"", nullptr));
#endif // QT_NO_STATUSTIP
        actionTRBit->setText(QApplication::translate("MainWindow", "Mark covered (yes/no)", nullptr));
#ifndef QT_NO_STATUSTIP
        actionTRBit->setStatusTip(QApplication::translate("MainWindow", "Enable trace coverage with 1 bit (whether an instruction was executed or not)", nullptr));
#endif // QT_NO_STATUSTIP
        actionTRByte->setText(QApplication::translate("MainWindow", "Count hits (up to 63)", nullptr));
#ifndef QT_NO_STATUSTIP
        actionTRByte->setStatusTip(QApplication::translate("MainWindow", "Enable trace coverage with 1 byte per byte of code to record how many times an instruction has been executed, enable hit count up to 63 and accurate run trace assisted disassembly.", nullptr));
#endif // QT_NO_STATUSTIP
        actionTRWord->setText(QApplication::translate("MainWindow", "Count hits (up to 16383)", nullptr));
#ifndef QT_NO_STATUSTIP
        actionTRWord->setStatusTip(QApplication::translate("MainWindow", "Enable trace coverage with 2 bytes per byte of code to record how many times an instruction has been executed, enable hit count up to 16383 and accurate run trace assisted disassembly.", nullptr));
#endif // QT_NO_STATUSTIP
        actionTRReset->setText(QApplication::translate("MainWindow", "Reset trace coverage", nullptr));
        actionTRTIBT->setText(QApplication::translate("MainWindow", "Step into until reaching uncovered code", nullptr));
#ifndef QT_NO_STATUSTIP
        actionTRTIBT->setStatusTip(QApplication::translate("MainWindow", "Step into until reaching an instruction that was not covered before. Equivalent command \"tibt\"", nullptr));
#endif // QT_NO_STATUSTIP
        actionTRTOBT->setText(QApplication::translate("MainWindow", "Step over until reaching uncovered code", nullptr));
#ifndef QT_NO_STATUSTIP
        actionTRTOBT->setStatusTip(QApplication::translate("MainWindow", "Step over until reaching an instruction that was not covered before. Equivalent command \"tobt\"", nullptr));
#endif // QT_NO_STATUSTIP
        actionTRTIIT->setText(QApplication::translate("MainWindow", "Step into until reaching covered code", nullptr));
#ifndef QT_NO_STATUSTIP
        actionTRTIIT->setStatusTip(QApplication::translate("MainWindow", "Step into until reaching an instruction that has been covered before. Equivalent command \"tiit\"", nullptr));
#endif // QT_NO_STATUSTIP
        actionTRTOIT->setText(QApplication::translate("MainWindow", "Step over until reaching covered code", nullptr));
#ifndef QT_NO_STATUSTIP
        actionTRTOIT->setStatusTip(QApplication::translate("MainWindow", "Step over until reaching an instruction that has been covered before. Equivalent command \"toit\"", nullptr));
#endif // QT_NO_STATUSTIP
        actionTRNone->setText(QApplication::translate("MainWindow", "Disable", nullptr));
#ifndef QT_NO_STATUSTIP
        actionTRNone->setStatusTip(QApplication::translate("MainWindow", "Disable trace coverage", nullptr));
#endif // QT_NO_STATUSTIP
        actionRtu->setText(QApplication::translate("MainWindow", "Run to &user code", nullptr));
#ifndef QT_NO_STATUSTIP
        actionRtu->setStatusTip(QApplication::translate("MainWindow", "Trace over until user code would be executed.", nullptr));
#endif // QT_NO_STATUSTIP
        actionRunExpression->setText(QApplication::translate("MainWindow", "Run until e&xpression", nullptr));
        actionInstrUndo->setText(QApplication::translate("MainWindow", "Undo last instruction", nullptr));
        actionCrashDump->setText(QApplication::translate("MainWindow", "Generate crash dump", nullptr));
        actionManageFavourite->setText(QApplication::translate("MainWindow", "&Manage Favourite Tools...", nullptr));
        actionStepOverSource->setText(QApplication::translate("MainWindow", "Step over (source)", nullptr));
#ifndef QT_NO_STATUSTIP
        actionStepOverSource->setStatusTip(QApplication::translate("MainWindow", "Execute a single line of source code without entering the subroutine. Equivalent to \"TraceOverConditional src.line(cip) && !src.disp(cip)\"", nullptr));
#endif // QT_NO_STATUSTIP
        actionStepIntoSource->setText(QApplication::translate("MainWindow", "Step into (source)", nullptr));
#ifndef QT_NO_STATUSTIP
        actionStepIntoSource->setStatusTip(QApplication::translate("MainWindow", "Execute a single source code line. Equivalent to \"TraceIntoConditional src.line(cip) && !src.disp(cip)\"", nullptr));
#endif // QT_NO_STATUSTIP
        actionGraph->setText(QApplication::translate("MainWindow", "&Graph", nullptr));
#ifndef QT_NO_STATUSTIP
        actionGraph->setStatusTip(QApplication::translate("MainWindow", "Show the CPU tab and switch to Graph mode.", nullptr));
#endif // QT_NO_STATUSTIP
        actionseStepInto->setText(QApplication::translate("MainWindow", "Step into (swallow exception)", nullptr));
#ifndef QT_NO_STATUSTIP
        actionseStepInto->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        actionseStepOver->setText(QApplication::translate("MainWindow", "Step over (swallow exception)", nullptr));
        actionseRun->setText(QApplication::translate("MainWindow", "Run (swallow exception)", nullptr));
#ifndef QT_NO_STATUSTIP
        actionseRun->setStatusTip(QApplication::translate("MainWindow", "Run the debuggee and ignore all exceptions so the debuggee will not process the exception.", nullptr));
#endif // QT_NO_STATUSTIP
        actionBlog->setText(QApplication::translate("MainWindow", "Blog", nullptr));
#ifndef QT_NO_STATUSTIP
        actionBlog->setStatusTip(QApplication::translate("MainWindow", "Open https://winscope.example/blog", nullptr));
#endif // QT_NO_STATUSTIP
        actionAnimateInto->setText(QApplication::translate("MainWindow", "Animate into", nullptr));
#ifndef QT_NO_STATUSTIP
        actionAnimateInto->setStatusTip(QApplication::translate("MainWindow", "Execute the step into command at a fixed pace", nullptr));
#endif // QT_NO_STATUSTIP
        actionAnimateOver->setText(QApplication::translate("MainWindow", "Animate over", nullptr));
#ifndef QT_NO_STATUSTIP
        actionAnimateOver->setStatusTip(QApplication::translate("MainWindow", "Execute the step over command at a fixed pace", nullptr));
#endif // QT_NO_STATUSTIP
        actionAnimateCommand->setText(QApplication::translate("MainWindow", "Animate command...", nullptr));
#ifndef QT_NO_STATUSTIP
        actionAnimateCommand->setStatusTip(QApplication::translate("MainWindow", "Execute a command at a fixed pace", nullptr));
#endif // QT_NO_STATUSTIP
        actionSetInitializationScript->setText(QApplication::translate("MainWindow", "System breakpoint scripts", nullptr));
#ifndef QT_NO_STATUSTIP
        actionSetInitializationScript->setStatusTip(QApplication::translate("MainWindow", "Set the script file to run automatically when the system breakpoint is reached.", nullptr));
#endif // QT_NO_STATUSTIP
        actionImportSettings->setText(QApplication::translate("MainWindow", "Import settings...", nullptr));
#ifndef QT_NO_STATUSTIP
        actionImportSettings->setStatusTip(QApplication::translate("MainWindow", "Import settings from an external file", nullptr));
#endif // QT_NO_STATUSTIP
        actionCustomizeMenus->setText(QApplication::translate("MainWindow", "Customize menus", nullptr));
#ifndef QT_NO_STATUSTIP
        actionCustomizeMenus->setStatusTip(QApplication::translate("MainWindow", "Open the Customize Menus dialog to hide infrequently used menu items into the \"more commands\" submenu.", nullptr));
#endif // QT_NO_STATUSTIP
        actionImportdatabase->setText(QApplication::translate("MainWindow", "&Import database", nullptr));
#ifndef QT_NO_STATUSTIP
        actionImportdatabase->setStatusTip(QApplication::translate("MainWindow", "Open an external database file to import data.", nullptr));
#endif // QT_NO_STATUSTIP
        actionExportdatabase->setText(QApplication::translate("MainWindow", "&Export database", nullptr));
        actionPreviousTab->setText(QApplication::translate("MainWindow", "Previous Tab", nullptr));
#ifndef QT_NO_STATUSTIP
        actionPreviousTab->setStatusTip(QApplication::translate("MainWindow", "Show the tab on the left.", nullptr));
#endif // QT_NO_STATUSTIP
        actionNextTab->setText(QApplication::translate("MainWindow", "Next Tab", nullptr));
#ifndef QT_NO_STATUSTIP
        actionNextTab->setStatusTip(QApplication::translate("MainWindow", "Show the tab on the right.", nullptr));
#endif // QT_NO_STATUSTIP
        actionPreviousView->setText(QApplication::translate("MainWindow", "Previous View", nullptr));
#ifndef QT_NO_STATUSTIP
        actionPreviousView->setStatusTip(QApplication::translate("MainWindow", "Show the tab history popup window and select more recently used tab.", nullptr));
#endif // QT_NO_STATUSTIP
        actionNextView->setText(QApplication::translate("MainWindow", "Next View", nullptr));
#ifndef QT_NO_STATUSTIP
        actionNextView->setStatusTip(QApplication::translate("MainWindow", "Show the tab history popup window and select previously viewed tab.", nullptr));
#endif // QT_NO_STATUSTIP
        actionHideTab->setText(QApplication::translate("MainWindow", "Hide Tab", nullptr));
#ifndef QT_NO_STATUSTIP
        actionHideTab->setStatusTip(QApplication::translate("MainWindow", "Hide the current tab. The hidden tab can be reopened from the View menu.", nullptr));
#endif // QT_NO_STATUSTIP
        actionVariables->setText(QApplication::translate("MainWindow", "&Variables", nullptr));
#ifndef QT_NO_STATUSTIP
        actionVariables->setStatusTip(QApplication::translate("MainWindow", "Show a list of WinScope variables. Equivalent command \"varlist\"", nullptr));
#endif // QT_NO_STATUSTIP
        actionRestartAdmin->setText(QApplication::translate("MainWindow", "Restart as Admin", nullptr));
#ifndef QT_NO_STATUSTIP
        actionRestartAdmin->setStatusTip(QApplication::translate("MainWindow", "Restart WinScope under Administrator privilege.", nullptr));
#endif // QT_NO_STATUSTIP
        actionPlugins->setText(QApplication::translate("MainWindow", "Plugins", nullptr));
#ifndef QT_NO_STATUSTIP
        actionPlugins->setStatusTip(QApplication::translate("MainWindow", "Open https://winscope.example/plugins", nullptr));
#endif // QT_NO_STATUSTIP
        actionTrace->setText(QApplication::translate("MainWindow", "Trace", nullptr));
#ifndef QT_NO_STATUSTIP
        actionTrace->setStatusTip(QApplication::translate("MainWindow", "Show the Trace tab.", nullptr));
#endif // QT_NO_STATUSTIP
        actionModules->setText(QApplication::translate("MainWindow", "Modules", nullptr));
#ifndef QT_NO_STATUSTIP
        actionModules->setStatusTip(QApplication::translate("MainWindow", "Show the Symbols tab. Note that the Modules list is in the symbols tab.", nullptr));
#endif // QT_NO_STATUSTIP
        action_Theme->setText(QApplication::translate("MainWindow", "&Theme", nullptr));
        actionDefaultTheme->setText(QApplication::translate("MainWindow", "&Default", nullptr));
        actionDbsave->setText(QApplication::translate("MainWindow", "&Save database", nullptr));
#ifndef QT_NO_STATUSTIP
        actionDbsave->setStatusTip(QApplication::translate("MainWindow", "Save all data. The database will be automatically saved when debugging is stopped.", nullptr));
#endif // QT_NO_STATUSTIP
        actionDbload->setText(QApplication::translate("MainWindow", "Re&load database", nullptr));
#ifndef QT_NO_STATUSTIP
        actionDbload->setStatusTip(QApplication::translate("MainWindow", "Discard all modifications and read all data from disk.", nullptr));
#endif // QT_NO_STATUSTIP
        actionDbrecovery->setText(QApplication::translate("MainWindow", "&Restore backup database", nullptr));
#ifndef QT_NO_STATUSTIP
        actionDbrecovery->setStatusTip(QApplication::translate("MainWindow", "Read data from the backup database to recover from database corruption.", nullptr));
#endif // QT_NO_STATUSTIP
        actionDbclear->setText(QApplication::translate("MainWindow", "&Clear database", nullptr));
#ifndef QT_NO_STATUSTIP
        actionDbclear->setStatusTip(QApplication::translate("MainWindow", "Clear all data.", nullptr));
#endif // QT_NO_STATUSTIP
        actionAbout_Qt->setText(QApplication::translate("MainWindow", "About Qt", nullptr));
#ifndef QT_NO_STATUSTIP
        actionAbout_Qt->setStatusTip(QApplication::translate("MainWindow", "Display information about Qt", nullptr));
#endif // QT_NO_STATUSTIP
        actionMnemonic_Help->setText(QApplication::translate("MainWindow", "Mnemonic Help", nullptr));
#ifndef QT_NO_STATUSTIP
        actionMnemonic_Help->setStatusTip(QApplication::translate("MainWindow", "Output the detailed help information about an assembly mnemonic to the log. Equivalent command \"mnemonichelp name\".", nullptr));
#endif // QT_NO_STATUSTIP
        actionReleaseNotes->setText(QApplication::translate("MainWindow", "Release Notes", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "&File", nullptr));
        menuRecentFiles->setTitle(QApplication::translate("MainWindow", "&Recent Files", nullptr));
        menuDatabase->setTitle(QApplication::translate("MainWindow", "Database", nullptr));
        menuView->setTitle(QApplication::translate("MainWindow", "&View", nullptr));
        menuDebug->setTitle(QApplication::translate("MainWindow", "&Debug", nullptr));
        menuAdvanced->setTitle(QApplication::translate("MainWindow", "Advanced", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "&Help", nullptr));
        menuPlugins->setTitle(QApplication::translate("MainWindow", "&Plugins", nullptr));
        menuOptions->setTitle(QApplication::translate("MainWindow", "&Options", nullptr));
        menuTheme->setTitle(QApplication::translate("MainWindow", "&Theme", nullptr));
        menuFavourites->setTitle(QApplication::translate("MainWindow", "Favour&ites", nullptr));
        menu_Trace->setTitle(QApplication::translate("MainWindow", "Traci&ng", nullptr));
        menuTrace_record->setTitle(QApplication::translate("MainWindow", "Trace &coverage", nullptr));
        mainToolBar->setWindowTitle(QApplication::translate("MainWindow", "Toolbar", nullptr));
        cmdBar->setWindowTitle(QApplication::translate("MainWindow", "CommandBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
