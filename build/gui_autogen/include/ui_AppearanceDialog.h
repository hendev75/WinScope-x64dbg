/********************************************************************************
** Form generated from reading UI file 'AppearanceDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPEARANCEDIALOG_H
#define UI_APPEARANCEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AppearanceDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *tabColors;
    QGridLayout *gridLayout_3;
    QGroupBox *groupProperties;
    QVBoxLayout *verticalLayout_2;
    QTreeWidget *listColorNames;
    QGroupBox *groupColor;
    QGridLayout *gridLayout_2;
    QGridLayout *gridForegroundColors;
    QPushButton *button000000;
    QPushButton *button000080;
    QPushButton *button008000;
    QPushButton *button008080;
    QPushButton *button800000;
    QPushButton *button800080;
    QPushButton *button808000;
    QPushButton *buttonC0C0C0;
    QPushButton *button808080;
    QPushButton *button0000FF;
    QPushButton *button00FF00;
    QPushButton *button00FFFF;
    QPushButton *buttonFF0000;
    QPushButton *buttonFF00FF;
    QPushButton *buttonFFFF00;
    QPushButton *buttonFFFFFF;
    QLineEdit *editColor;
    QPushButton *buttonColor;
    QGroupBox *groupBackgroundColor;
    QGridLayout *gridLayout;
    QGridLayout *gridBackgroundColors;
    QPushButton *buttonBackgroundNone;
    QPushButton *buttonBackground000000;
    QPushButton *buttonBackgroundC0C0C0;
    QPushButton *buttonBackgroundFFFFFF;
    QPushButton *buttonBackground00FFFF;
    QPushButton *buttonBackground00FF00;
    QPushButton *buttonBackgroundFF0000;
    QPushButton *buttonBackgroundFFFF00;
    QLineEdit *editBackgroundColor;
    QPushButton *buttonBackgroundColor;
    QLabel *exampleText;
    QWidget *tabFont;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *fontAbstractTablesLayout;
    QLabel *labelFontAbstractTables;
    QFontComboBox *fontAbstractTables;
    QComboBox *fontAbstractTablesStyle;
    QComboBox *fontAbstractTablesSize;
    QHBoxLayout *fontDisassemblyLayout;
    QLabel *labelFontDisassembly;
    QFontComboBox *fontDisassembly;
    QComboBox *fontDisassemblyStyle;
    QComboBox *fontDisassemblySize;
    QHBoxLayout *fontHexDumpLayout;
    QLabel *labelFontHexDump;
    QFontComboBox *fontHexDump;
    QComboBox *fontHexDumpStyle;
    QComboBox *fontHexDumpSize;
    QHBoxLayout *fontStackLayout;
    QLabel *labelFontStack;
    QFontComboBox *fontStack;
    QComboBox *fontStackStyle;
    QComboBox *fontStackSize;
    QHBoxLayout *fontRegistersLayout;
    QLabel *labelFontRegisters;
    QFontComboBox *fontRegisters;
    QComboBox *fontRegistersStyle;
    QComboBox *fontRegistersSize;
    QHBoxLayout *fontHexEditLayout;
    QLabel *labelFontHexEdit;
    QFontComboBox *fontHexEdit;
    QComboBox *fontHexEditStyle;
    QComboBox *fontHexEditSize;
    QHBoxLayout *fontLogLayout;
    QLabel *labelFontLog;
    QFontComboBox *fontLog;
    QComboBox *fontLogStyle;
    QComboBox *fontLogSize;
    QHBoxLayout *fontApplicationLayout;
    QPushButton *buttonApplicationFont;
    QLabel *labelApplicationFont;
    QPushButton *buttonFontDefaults;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *fontRestartRequiredLayout;
    QLabel *labelFontRestartRequired;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonSave;
    QPushButton *buttonCancel;

    void setupUi(QDialog *AppearanceDialog)
    {
        if (AppearanceDialog->objectName().isEmpty())
            AppearanceDialog->setObjectName(QString::fromUtf8("AppearanceDialog"));
        AppearanceDialog->resize(522, 429);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("color-swatches");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8(":/Default/icons/color-swatches.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        AppearanceDialog->setWindowIcon(icon);
        AppearanceDialog->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_3 = new QVBoxLayout(AppearanceDialog);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        tabWidget = new QTabWidget(AppearanceDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabColors = new QWidget();
        tabColors->setObjectName(QString::fromUtf8("tabColors"));
        gridLayout_3 = new QGridLayout(tabColors);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupProperties = new QGroupBox(tabColors);
        groupProperties->setObjectName(QString::fromUtf8("groupProperties"));
        groupProperties->setCheckable(false);
        verticalLayout_2 = new QVBoxLayout(groupProperties);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        listColorNames = new QTreeWidget(groupProperties);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        listColorNames->setHeaderItem(__qtreewidgetitem);
        listColorNames->setObjectName(QString::fromUtf8("listColorNames"));
        listColorNames->header()->setVisible(false);

        verticalLayout_2->addWidget(listColorNames);


        gridLayout_3->addWidget(groupProperties, 0, 0, 3, 1);

        groupColor = new QGroupBox(tabColors);
        groupColor->setObjectName(QString::fromUtf8("groupColor"));
        groupColor->setCheckable(false);
        gridLayout_2 = new QGridLayout(groupColor);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridForegroundColors = new QGridLayout();
        gridForegroundColors->setSpacing(0);
        gridForegroundColors->setObjectName(QString::fromUtf8("gridForegroundColors"));
        button000000 = new QPushButton(groupColor);
        button000000->setObjectName(QString::fromUtf8("button000000"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(button000000->sizePolicy().hasHeightForWidth());
        button000000->setSizePolicy(sizePolicy);
        button000000->setStyleSheet(QString::fromUtf8("background-color: #000000;\n"
"border: solid black;\n"
"border-width: 2px 1px 2px 2px;"));

        gridForegroundColors->addWidget(button000000, 0, 0, 1, 1);

        button000080 = new QPushButton(groupColor);
        button000080->setObjectName(QString::fromUtf8("button000080"));
        sizePolicy.setHeightForWidth(button000080->sizePolicy().hasHeightForWidth());
        button000080->setSizePolicy(sizePolicy);
        button000080->setStyleSheet(QString::fromUtf8("background-color: #000080;\n"
"border: solid black;\n"
"border-width: 2px 1px 2px 1px;"));

        gridForegroundColors->addWidget(button000080, 0, 1, 1, 1);

        button008000 = new QPushButton(groupColor);
        button008000->setObjectName(QString::fromUtf8("button008000"));
        sizePolicy.setHeightForWidth(button008000->sizePolicy().hasHeightForWidth());
        button008000->setSizePolicy(sizePolicy);
        button008000->setStyleSheet(QString::fromUtf8("background-color: #008000;\n"
"border: solid black;\n"
"border-width: 2px 1px 2px 1px;"));

        gridForegroundColors->addWidget(button008000, 0, 2, 1, 1);

        button008080 = new QPushButton(groupColor);
        button008080->setObjectName(QString::fromUtf8("button008080"));
        sizePolicy.setHeightForWidth(button008080->sizePolicy().hasHeightForWidth());
        button008080->setSizePolicy(sizePolicy);
        button008080->setStyleSheet(QString::fromUtf8("background-color: #008080;\n"
"border: solid black;\n"
"border-width: 2px 2px 2px 1px;"));

        gridForegroundColors->addWidget(button008080, 0, 3, 1, 1);

        button800000 = new QPushButton(groupColor);
        button800000->setObjectName(QString::fromUtf8("button800000"));
        sizePolicy.setHeightForWidth(button800000->sizePolicy().hasHeightForWidth());
        button800000->setSizePolicy(sizePolicy);
        button800000->setStyleSheet(QString::fromUtf8("background-color: #800000;\n"
"border: solid black;\n"
"border-width: 1px 1px 2px 2px;"));

        gridForegroundColors->addWidget(button800000, 1, 0, 1, 1);

        button800080 = new QPushButton(groupColor);
        button800080->setObjectName(QString::fromUtf8("button800080"));
        sizePolicy.setHeightForWidth(button800080->sizePolicy().hasHeightForWidth());
        button800080->setSizePolicy(sizePolicy);
        button800080->setStyleSheet(QString::fromUtf8("background-color: #800080;\n"
"border: solid black;\n"
"border-width: 1px 1px 2px 1px;"));

        gridForegroundColors->addWidget(button800080, 1, 1, 1, 1);

        button808000 = new QPushButton(groupColor);
        button808000->setObjectName(QString::fromUtf8("button808000"));
        sizePolicy.setHeightForWidth(button808000->sizePolicy().hasHeightForWidth());
        button808000->setSizePolicy(sizePolicy);
        button808000->setStyleSheet(QString::fromUtf8("background-color: #808000;\n"
"border: solid black;\n"
"border-width: 1px 1px 2px 1px;"));

        gridForegroundColors->addWidget(button808000, 1, 2, 1, 1);

        buttonC0C0C0 = new QPushButton(groupColor);
        buttonC0C0C0->setObjectName(QString::fromUtf8("buttonC0C0C0"));
        sizePolicy.setHeightForWidth(buttonC0C0C0->sizePolicy().hasHeightForWidth());
        buttonC0C0C0->setSizePolicy(sizePolicy);
        buttonC0C0C0->setStyleSheet(QString::fromUtf8("background-color: #C0C0C0;\n"
"border: solid black;\n"
"border-width: 1px 2px 2px 1px;"));

        gridForegroundColors->addWidget(buttonC0C0C0, 1, 3, 1, 1);

        button808080 = new QPushButton(groupColor);
        button808080->setObjectName(QString::fromUtf8("button808080"));
        sizePolicy.setHeightForWidth(button808080->sizePolicy().hasHeightForWidth());
        button808080->setSizePolicy(sizePolicy);
        button808080->setStyleSheet(QString::fromUtf8("background-color: #808080;\n"
"border: solid black;\n"
"border-width: 1px 1px 2px 2px;"));

        gridForegroundColors->addWidget(button808080, 2, 0, 1, 1);

        button0000FF = new QPushButton(groupColor);
        button0000FF->setObjectName(QString::fromUtf8("button0000FF"));
        sizePolicy.setHeightForWidth(button0000FF->sizePolicy().hasHeightForWidth());
        button0000FF->setSizePolicy(sizePolicy);
        button0000FF->setStyleSheet(QString::fromUtf8("background-color: #0000FF;\n"
"border: solid black;\n"
"border-width: 1px 1px 2px 1px;"));

        gridForegroundColors->addWidget(button0000FF, 2, 1, 1, 1);

        button00FF00 = new QPushButton(groupColor);
        button00FF00->setObjectName(QString::fromUtf8("button00FF00"));
        sizePolicy.setHeightForWidth(button00FF00->sizePolicy().hasHeightForWidth());
        button00FF00->setSizePolicy(sizePolicy);
        button00FF00->setStyleSheet(QString::fromUtf8("background-color: #00FF00;\n"
"border: solid black;\n"
"border-width: 1px 1px 2px 1px;"));

        gridForegroundColors->addWidget(button00FF00, 2, 2, 1, 1);

        button00FFFF = new QPushButton(groupColor);
        button00FFFF->setObjectName(QString::fromUtf8("button00FFFF"));
        sizePolicy.setHeightForWidth(button00FFFF->sizePolicy().hasHeightForWidth());
        button00FFFF->setSizePolicy(sizePolicy);
        button00FFFF->setStyleSheet(QString::fromUtf8("background-color: #00FFFF;\n"
"border: solid black;\n"
"border-width: 1px 2px 2px 1px;"));

        gridForegroundColors->addWidget(button00FFFF, 2, 3, 1, 1);

        buttonFF0000 = new QPushButton(groupColor);
        buttonFF0000->setObjectName(QString::fromUtf8("buttonFF0000"));
        sizePolicy.setHeightForWidth(buttonFF0000->sizePolicy().hasHeightForWidth());
        buttonFF0000->setSizePolicy(sizePolicy);
        buttonFF0000->setStyleSheet(QString::fromUtf8("background-color : #FF0000;\n"
"border: solid black;\n"
"border-width: 1px 1px 2px 2px;"));

        gridForegroundColors->addWidget(buttonFF0000, 3, 0, 1, 1);

        buttonFF00FF = new QPushButton(groupColor);
        buttonFF00FF->setObjectName(QString::fromUtf8("buttonFF00FF"));
        sizePolicy.setHeightForWidth(buttonFF00FF->sizePolicy().hasHeightForWidth());
        buttonFF00FF->setSizePolicy(sizePolicy);
        buttonFF00FF->setStyleSheet(QString::fromUtf8("background-color: #FF00FF;\n"
"border: solid black;\n"
"border-width: 1px 1px 2px 1px;"));

        gridForegroundColors->addWidget(buttonFF00FF, 3, 1, 1, 1);

        buttonFFFF00 = new QPushButton(groupColor);
        buttonFFFF00->setObjectName(QString::fromUtf8("buttonFFFF00"));
        sizePolicy.setHeightForWidth(buttonFFFF00->sizePolicy().hasHeightForWidth());
        buttonFFFF00->setSizePolicy(sizePolicy);
        buttonFFFF00->setStyleSheet(QString::fromUtf8("background-color: #FFFF00;\n"
"border: solid black;\n"
"border-width: 1px 1px 2px 1px;"));

        gridForegroundColors->addWidget(buttonFFFF00, 3, 2, 1, 1);

        buttonFFFFFF = new QPushButton(groupColor);
        buttonFFFFFF->setObjectName(QString::fromUtf8("buttonFFFFFF"));
        sizePolicy.setHeightForWidth(buttonFFFFFF->sizePolicy().hasHeightForWidth());
        buttonFFFFFF->setSizePolicy(sizePolicy);
        buttonFFFFFF->setStyleSheet(QString::fromUtf8("background-color: #FFFBF0;\n"
"border: solid black;\n"
"border-width: 1px 2px 2px 1px;"));

        gridForegroundColors->addWidget(buttonFFFFFF, 3, 3, 1, 1);


        gridLayout_2->addLayout(gridForegroundColors, 0, 0, 1, 2);

        editColor = new QLineEdit(groupColor);
        editColor->setObjectName(QString::fromUtf8("editColor"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(editColor->sizePolicy().hasHeightForWidth());
        editColor->setSizePolicy(sizePolicy1);
        editColor->setStyleSheet(QString::fromUtf8("QLineEdit {border-style: outset; border-width: 1px; border-color: black}"));
        editColor->setFrame(false);

        gridLayout_2->addWidget(editColor, 1, 0, 1, 1);

        buttonColor = new QPushButton(groupColor);
        buttonColor->setObjectName(QString::fromUtf8("buttonColor"));
        sizePolicy1.setHeightForWidth(buttonColor->sizePolicy().hasHeightForWidth());
        buttonColor->setSizePolicy(sizePolicy1);
        buttonColor->setMinimumSize(QSize(30, 18));
        buttonColor->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF; border : 2px solid black"));

        gridLayout_2->addWidget(buttonColor, 1, 1, 1, 1);


        gridLayout_3->addWidget(groupColor, 0, 1, 1, 1);

        groupBackgroundColor = new QGroupBox(tabColors);
        groupBackgroundColor->setObjectName(QString::fromUtf8("groupBackgroundColor"));
        gridLayout = new QGridLayout(groupBackgroundColor);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridBackgroundColors = new QGridLayout();
        gridBackgroundColors->setSpacing(0);
        gridBackgroundColors->setObjectName(QString::fromUtf8("gridBackgroundColors"));
        buttonBackgroundNone = new QPushButton(groupBackgroundColor);
        buttonBackgroundNone->setObjectName(QString::fromUtf8("buttonBackgroundNone"));
        sizePolicy.setHeightForWidth(buttonBackgroundNone->sizePolicy().hasHeightForWidth());
        buttonBackgroundNone->setSizePolicy(sizePolicy);
        buttonBackgroundNone->setStyleSheet(QString::fromUtf8("background-color: #C0C0C0;\n"
"border: solid black;\n"
"border-width: 2px 1px 2px 2px;"));

        gridBackgroundColors->addWidget(buttonBackgroundNone, 0, 0, 1, 1);

        buttonBackground000000 = new QPushButton(groupBackgroundColor);
        buttonBackground000000->setObjectName(QString::fromUtf8("buttonBackground000000"));
        sizePolicy.setHeightForWidth(buttonBackground000000->sizePolicy().hasHeightForWidth());
        buttonBackground000000->setSizePolicy(sizePolicy);
        buttonBackground000000->setStyleSheet(QString::fromUtf8("background-color: #000000;\n"
"border: solid black;\n"
"border-width: 2px 1px 2px 1px;"));

        gridBackgroundColors->addWidget(buttonBackground000000, 0, 1, 1, 1);

        buttonBackgroundC0C0C0 = new QPushButton(groupBackgroundColor);
        buttonBackgroundC0C0C0->setObjectName(QString::fromUtf8("buttonBackgroundC0C0C0"));
        sizePolicy.setHeightForWidth(buttonBackgroundC0C0C0->sizePolicy().hasHeightForWidth());
        buttonBackgroundC0C0C0->setSizePolicy(sizePolicy);
        buttonBackgroundC0C0C0->setStyleSheet(QString::fromUtf8("background-color: #C0C0C0;\n"
"border: solid black;\n"
"border-width: 2px 1px 2px 1px;"));

        gridBackgroundColors->addWidget(buttonBackgroundC0C0C0, 0, 2, 1, 1);

        buttonBackgroundFFFFFF = new QPushButton(groupBackgroundColor);
        buttonBackgroundFFFFFF->setObjectName(QString::fromUtf8("buttonBackgroundFFFFFF"));
        sizePolicy.setHeightForWidth(buttonBackgroundFFFFFF->sizePolicy().hasHeightForWidth());
        buttonBackgroundFFFFFF->setSizePolicy(sizePolicy);
        buttonBackgroundFFFFFF->setStyleSheet(QString::fromUtf8("background-color: #FFFBF0;\n"
"border: solid black;\n"
"border-width: 2px 2px 2px 1px;"));

        gridBackgroundColors->addWidget(buttonBackgroundFFFFFF, 0, 3, 1, 1);

        buttonBackground00FFFF = new QPushButton(groupBackgroundColor);
        buttonBackground00FFFF->setObjectName(QString::fromUtf8("buttonBackground00FFFF"));
        sizePolicy.setHeightForWidth(buttonBackground00FFFF->sizePolicy().hasHeightForWidth());
        buttonBackground00FFFF->setSizePolicy(sizePolicy);
        buttonBackground00FFFF->setStyleSheet(QString::fromUtf8("background-color : #00FFFF;\n"
"border: solid black;\n"
"border-width: 1px 1px 2px 2px;"));

        gridBackgroundColors->addWidget(buttonBackground00FFFF, 1, 0, 1, 1);

        buttonBackground00FF00 = new QPushButton(groupBackgroundColor);
        buttonBackground00FF00->setObjectName(QString::fromUtf8("buttonBackground00FF00"));
        sizePolicy.setHeightForWidth(buttonBackground00FF00->sizePolicy().hasHeightForWidth());
        buttonBackground00FF00->setSizePolicy(sizePolicy);
        buttonBackground00FF00->setStyleSheet(QString::fromUtf8("background-color: #00FF00;\n"
"border: solid black;\n"
"border-width: 1px 1px 2px 1px;"));

        gridBackgroundColors->addWidget(buttonBackground00FF00, 1, 1, 1, 1);

        buttonBackgroundFF0000 = new QPushButton(groupBackgroundColor);
        buttonBackgroundFF0000->setObjectName(QString::fromUtf8("buttonBackgroundFF0000"));
        sizePolicy.setHeightForWidth(buttonBackgroundFF0000->sizePolicy().hasHeightForWidth());
        buttonBackgroundFF0000->setSizePolicy(sizePolicy);
        buttonBackgroundFF0000->setStyleSheet(QString::fromUtf8("background-color: #FF0000;\n"
"border: solid black;\n"
"border-width: 1px 1px 2px 1px;"));

        gridBackgroundColors->addWidget(buttonBackgroundFF0000, 1, 2, 1, 1);

        buttonBackgroundFFFF00 = new QPushButton(groupBackgroundColor);
        buttonBackgroundFFFF00->setObjectName(QString::fromUtf8("buttonBackgroundFFFF00"));
        sizePolicy.setHeightForWidth(buttonBackgroundFFFF00->sizePolicy().hasHeightForWidth());
        buttonBackgroundFFFF00->setSizePolicy(sizePolicy);
        buttonBackgroundFFFF00->setStyleSheet(QString::fromUtf8("background-color: #FFFF00;\n"
"border: solid black;\n"
"border-width: 1px 2px 2px 1px;"));

        gridBackgroundColors->addWidget(buttonBackgroundFFFF00, 1, 3, 1, 1);


        gridLayout->addLayout(gridBackgroundColors, 0, 0, 1, 2);

        editBackgroundColor = new QLineEdit(groupBackgroundColor);
        editBackgroundColor->setObjectName(QString::fromUtf8("editBackgroundColor"));
        sizePolicy1.setHeightForWidth(editBackgroundColor->sizePolicy().hasHeightForWidth());
        editBackgroundColor->setSizePolicy(sizePolicy1);
        editBackgroundColor->setStyleSheet(QString::fromUtf8("QLineEdit {border-style: outset; border-width: 1px; border-color: black}"));
        editBackgroundColor->setFrame(false);

        gridLayout->addWidget(editBackgroundColor, 1, 0, 1, 1);

        buttonBackgroundColor = new QPushButton(groupBackgroundColor);
        buttonBackgroundColor->setObjectName(QString::fromUtf8("buttonBackgroundColor"));
        sizePolicy1.setHeightForWidth(buttonBackgroundColor->sizePolicy().hasHeightForWidth());
        buttonBackgroundColor->setSizePolicy(sizePolicy1);
        buttonBackgroundColor->setMinimumSize(QSize(30, 18));
        buttonBackgroundColor->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF; border : 2px solid black"));

        gridLayout->addWidget(buttonBackgroundColor, 1, 1, 1, 1);


        gridLayout_3->addWidget(groupBackgroundColor, 1, 1, 1, 1);

        exampleText = new QLabel(tabColors);
        exampleText->setObjectName(QString::fromUtf8("exampleText"));
        exampleText->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(exampleText, 2, 1, 1, 1);

        tabWidget->addTab(tabColors, QString());
        groupBackgroundColor->raise();
        groupColor->raise();
        groupProperties->raise();
        exampleText->raise();
        tabFont = new QWidget();
        tabFont->setObjectName(QString::fromUtf8("tabFont"));
        verticalLayout = new QVBoxLayout(tabFont);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        fontAbstractTablesLayout = new QHBoxLayout();
        fontAbstractTablesLayout->setSpacing(6);
        fontAbstractTablesLayout->setObjectName(QString::fromUtf8("fontAbstractTablesLayout"));
        labelFontAbstractTables = new QLabel(tabFont);
        labelFontAbstractTables->setObjectName(QString::fromUtf8("labelFontAbstractTables"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelFontAbstractTables->sizePolicy().hasHeightForWidth());
        labelFontAbstractTables->setSizePolicy(sizePolicy2);

        fontAbstractTablesLayout->addWidget(labelFontAbstractTables);

        fontAbstractTables = new QFontComboBox(tabFont);
        fontAbstractTables->setObjectName(QString::fromUtf8("fontAbstractTables"));
        sizePolicy2.setHeightForWidth(fontAbstractTables->sizePolicy().hasHeightForWidth());
        fontAbstractTables->setSizePolicy(sizePolicy2);
        fontAbstractTables->setEditable(false);
        fontAbstractTables->setFontFilters(QFontComboBox::MonospacedFonts);

        fontAbstractTablesLayout->addWidget(fontAbstractTables);

        fontAbstractTablesStyle = new QComboBox(tabFont);
        fontAbstractTablesStyle->addItem(QString());
        fontAbstractTablesStyle->addItem(QString());
        fontAbstractTablesStyle->addItem(QString());
        fontAbstractTablesStyle->addItem(QString());
        fontAbstractTablesStyle->setObjectName(QString::fromUtf8("fontAbstractTablesStyle"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(fontAbstractTablesStyle->sizePolicy().hasHeightForWidth());
        fontAbstractTablesStyle->setSizePolicy(sizePolicy3);

        fontAbstractTablesLayout->addWidget(fontAbstractTablesStyle);

        fontAbstractTablesSize = new QComboBox(tabFont);
        fontAbstractTablesSize->addItem(QString());
        fontAbstractTablesSize->addItem(QString());
        fontAbstractTablesSize->addItem(QString());
        fontAbstractTablesSize->addItem(QString());
        fontAbstractTablesSize->addItem(QString());
        fontAbstractTablesSize->addItem(QString());
        fontAbstractTablesSize->addItem(QString());
        fontAbstractTablesSize->addItem(QString());
        fontAbstractTablesSize->addItem(QString());
        fontAbstractTablesSize->addItem(QString());
        fontAbstractTablesSize->addItem(QString());
        fontAbstractTablesSize->addItem(QString());
        fontAbstractTablesSize->setObjectName(QString::fromUtf8("fontAbstractTablesSize"));
        sizePolicy3.setHeightForWidth(fontAbstractTablesSize->sizePolicy().hasHeightForWidth());
        fontAbstractTablesSize->setSizePolicy(sizePolicy3);
        fontAbstractTablesSize->setMaxVisibleItems(12);
        fontAbstractTablesSize->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        fontAbstractTablesLayout->addWidget(fontAbstractTablesSize);


        verticalLayout->addLayout(fontAbstractTablesLayout);

        fontDisassemblyLayout = new QHBoxLayout();
        fontDisassemblyLayout->setSpacing(6);
        fontDisassemblyLayout->setObjectName(QString::fromUtf8("fontDisassemblyLayout"));
        labelFontDisassembly = new QLabel(tabFont);
        labelFontDisassembly->setObjectName(QString::fromUtf8("labelFontDisassembly"));
        sizePolicy2.setHeightForWidth(labelFontDisassembly->sizePolicy().hasHeightForWidth());
        labelFontDisassembly->setSizePolicy(sizePolicy2);

        fontDisassemblyLayout->addWidget(labelFontDisassembly);

        fontDisassembly = new QFontComboBox(tabFont);
        fontDisassembly->setObjectName(QString::fromUtf8("fontDisassembly"));
        sizePolicy2.setHeightForWidth(fontDisassembly->sizePolicy().hasHeightForWidth());
        fontDisassembly->setSizePolicy(sizePolicy2);
        fontDisassembly->setEditable(false);
        fontDisassembly->setFontFilters(QFontComboBox::MonospacedFonts);

        fontDisassemblyLayout->addWidget(fontDisassembly);

        fontDisassemblyStyle = new QComboBox(tabFont);
        fontDisassemblyStyle->addItem(QString());
        fontDisassemblyStyle->addItem(QString());
        fontDisassemblyStyle->addItem(QString());
        fontDisassemblyStyle->addItem(QString());
        fontDisassemblyStyle->setObjectName(QString::fromUtf8("fontDisassemblyStyle"));
        sizePolicy3.setHeightForWidth(fontDisassemblyStyle->sizePolicy().hasHeightForWidth());
        fontDisassemblyStyle->setSizePolicy(sizePolicy3);

        fontDisassemblyLayout->addWidget(fontDisassemblyStyle);

        fontDisassemblySize = new QComboBox(tabFont);
        fontDisassemblySize->addItem(QString());
        fontDisassemblySize->addItem(QString());
        fontDisassemblySize->addItem(QString());
        fontDisassemblySize->addItem(QString());
        fontDisassemblySize->addItem(QString());
        fontDisassemblySize->addItem(QString());
        fontDisassemblySize->addItem(QString());
        fontDisassemblySize->addItem(QString());
        fontDisassemblySize->addItem(QString());
        fontDisassemblySize->addItem(QString());
        fontDisassemblySize->addItem(QString());
        fontDisassemblySize->addItem(QString());
        fontDisassemblySize->setObjectName(QString::fromUtf8("fontDisassemblySize"));
        sizePolicy3.setHeightForWidth(fontDisassemblySize->sizePolicy().hasHeightForWidth());
        fontDisassemblySize->setSizePolicy(sizePolicy3);
        fontDisassemblySize->setMaxVisibleItems(12);
        fontDisassemblySize->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        fontDisassemblyLayout->addWidget(fontDisassemblySize);


        verticalLayout->addLayout(fontDisassemblyLayout);

        fontHexDumpLayout = new QHBoxLayout();
        fontHexDumpLayout->setSpacing(6);
        fontHexDumpLayout->setObjectName(QString::fromUtf8("fontHexDumpLayout"));
        labelFontHexDump = new QLabel(tabFont);
        labelFontHexDump->setObjectName(QString::fromUtf8("labelFontHexDump"));
        sizePolicy2.setHeightForWidth(labelFontHexDump->sizePolicy().hasHeightForWidth());
        labelFontHexDump->setSizePolicy(sizePolicy2);

        fontHexDumpLayout->addWidget(labelFontHexDump);

        fontHexDump = new QFontComboBox(tabFont);
        fontHexDump->setObjectName(QString::fromUtf8("fontHexDump"));
        sizePolicy2.setHeightForWidth(fontHexDump->sizePolicy().hasHeightForWidth());
        fontHexDump->setSizePolicy(sizePolicy2);
        fontHexDump->setEditable(false);
        fontHexDump->setFontFilters(QFontComboBox::MonospacedFonts);

        fontHexDumpLayout->addWidget(fontHexDump);

        fontHexDumpStyle = new QComboBox(tabFont);
        fontHexDumpStyle->addItem(QString());
        fontHexDumpStyle->addItem(QString());
        fontHexDumpStyle->addItem(QString());
        fontHexDumpStyle->addItem(QString());
        fontHexDumpStyle->setObjectName(QString::fromUtf8("fontHexDumpStyle"));
        sizePolicy3.setHeightForWidth(fontHexDumpStyle->sizePolicy().hasHeightForWidth());
        fontHexDumpStyle->setSizePolicy(sizePolicy3);

        fontHexDumpLayout->addWidget(fontHexDumpStyle);

        fontHexDumpSize = new QComboBox(tabFont);
        fontHexDumpSize->addItem(QString());
        fontHexDumpSize->addItem(QString());
        fontHexDumpSize->addItem(QString());
        fontHexDumpSize->addItem(QString());
        fontHexDumpSize->addItem(QString());
        fontHexDumpSize->addItem(QString());
        fontHexDumpSize->addItem(QString());
        fontHexDumpSize->addItem(QString());
        fontHexDumpSize->addItem(QString());
        fontHexDumpSize->addItem(QString());
        fontHexDumpSize->addItem(QString());
        fontHexDumpSize->addItem(QString());
        fontHexDumpSize->setObjectName(QString::fromUtf8("fontHexDumpSize"));
        sizePolicy3.setHeightForWidth(fontHexDumpSize->sizePolicy().hasHeightForWidth());
        fontHexDumpSize->setSizePolicy(sizePolicy3);
        fontHexDumpSize->setMaxVisibleItems(12);
        fontHexDumpSize->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        fontHexDumpLayout->addWidget(fontHexDumpSize);


        verticalLayout->addLayout(fontHexDumpLayout);

        fontStackLayout = new QHBoxLayout();
        fontStackLayout->setSpacing(6);
        fontStackLayout->setObjectName(QString::fromUtf8("fontStackLayout"));
        labelFontStack = new QLabel(tabFont);
        labelFontStack->setObjectName(QString::fromUtf8("labelFontStack"));
        sizePolicy2.setHeightForWidth(labelFontStack->sizePolicy().hasHeightForWidth());
        labelFontStack->setSizePolicy(sizePolicy2);

        fontStackLayout->addWidget(labelFontStack);

        fontStack = new QFontComboBox(tabFont);
        fontStack->setObjectName(QString::fromUtf8("fontStack"));
        sizePolicy2.setHeightForWidth(fontStack->sizePolicy().hasHeightForWidth());
        fontStack->setSizePolicy(sizePolicy2);
        fontStack->setEditable(false);
        fontStack->setFontFilters(QFontComboBox::MonospacedFonts);

        fontStackLayout->addWidget(fontStack);

        fontStackStyle = new QComboBox(tabFont);
        fontStackStyle->addItem(QString());
        fontStackStyle->addItem(QString());
        fontStackStyle->addItem(QString());
        fontStackStyle->addItem(QString());
        fontStackStyle->setObjectName(QString::fromUtf8("fontStackStyle"));
        sizePolicy3.setHeightForWidth(fontStackStyle->sizePolicy().hasHeightForWidth());
        fontStackStyle->setSizePolicy(sizePolicy3);

        fontStackLayout->addWidget(fontStackStyle);

        fontStackSize = new QComboBox(tabFont);
        fontStackSize->addItem(QString());
        fontStackSize->addItem(QString());
        fontStackSize->addItem(QString());
        fontStackSize->addItem(QString());
        fontStackSize->addItem(QString());
        fontStackSize->addItem(QString());
        fontStackSize->addItem(QString());
        fontStackSize->addItem(QString());
        fontStackSize->addItem(QString());
        fontStackSize->addItem(QString());
        fontStackSize->addItem(QString());
        fontStackSize->addItem(QString());
        fontStackSize->setObjectName(QString::fromUtf8("fontStackSize"));
        sizePolicy3.setHeightForWidth(fontStackSize->sizePolicy().hasHeightForWidth());
        fontStackSize->setSizePolicy(sizePolicy3);
        fontStackSize->setMaxVisibleItems(12);
        fontStackSize->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        fontStackLayout->addWidget(fontStackSize);


        verticalLayout->addLayout(fontStackLayout);

        fontRegistersLayout = new QHBoxLayout();
        fontRegistersLayout->setSpacing(6);
        fontRegistersLayout->setObjectName(QString::fromUtf8("fontRegistersLayout"));
        labelFontRegisters = new QLabel(tabFont);
        labelFontRegisters->setObjectName(QString::fromUtf8("labelFontRegisters"));
        sizePolicy2.setHeightForWidth(labelFontRegisters->sizePolicy().hasHeightForWidth());
        labelFontRegisters->setSizePolicy(sizePolicy2);

        fontRegistersLayout->addWidget(labelFontRegisters);

        fontRegisters = new QFontComboBox(tabFont);
        fontRegisters->setObjectName(QString::fromUtf8("fontRegisters"));
        sizePolicy2.setHeightForWidth(fontRegisters->sizePolicy().hasHeightForWidth());
        fontRegisters->setSizePolicy(sizePolicy2);
        fontRegisters->setEditable(false);
        fontRegisters->setFontFilters(QFontComboBox::MonospacedFonts);

        fontRegistersLayout->addWidget(fontRegisters);

        fontRegistersStyle = new QComboBox(tabFont);
        fontRegistersStyle->addItem(QString());
        fontRegistersStyle->addItem(QString());
        fontRegistersStyle->addItem(QString());
        fontRegistersStyle->addItem(QString());
        fontRegistersStyle->setObjectName(QString::fromUtf8("fontRegistersStyle"));
        sizePolicy3.setHeightForWidth(fontRegistersStyle->sizePolicy().hasHeightForWidth());
        fontRegistersStyle->setSizePolicy(sizePolicy3);

        fontRegistersLayout->addWidget(fontRegistersStyle);

        fontRegistersSize = new QComboBox(tabFont);
        fontRegistersSize->addItem(QString());
        fontRegistersSize->addItem(QString());
        fontRegistersSize->addItem(QString());
        fontRegistersSize->addItem(QString());
        fontRegistersSize->addItem(QString());
        fontRegistersSize->addItem(QString());
        fontRegistersSize->addItem(QString());
        fontRegistersSize->addItem(QString());
        fontRegistersSize->addItem(QString());
        fontRegistersSize->addItem(QString());
        fontRegistersSize->addItem(QString());
        fontRegistersSize->addItem(QString());
        fontRegistersSize->setObjectName(QString::fromUtf8("fontRegistersSize"));
        sizePolicy3.setHeightForWidth(fontRegistersSize->sizePolicy().hasHeightForWidth());
        fontRegistersSize->setSizePolicy(sizePolicy3);
        fontRegistersSize->setMaxVisibleItems(12);
        fontRegistersSize->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        fontRegistersLayout->addWidget(fontRegistersSize);


        verticalLayout->addLayout(fontRegistersLayout);

        fontHexEditLayout = new QHBoxLayout();
        fontHexEditLayout->setSpacing(6);
        fontHexEditLayout->setObjectName(QString::fromUtf8("fontHexEditLayout"));
        labelFontHexEdit = new QLabel(tabFont);
        labelFontHexEdit->setObjectName(QString::fromUtf8("labelFontHexEdit"));
        sizePolicy2.setHeightForWidth(labelFontHexEdit->sizePolicy().hasHeightForWidth());
        labelFontHexEdit->setSizePolicy(sizePolicy2);

        fontHexEditLayout->addWidget(labelFontHexEdit);

        fontHexEdit = new QFontComboBox(tabFont);
        fontHexEdit->setObjectName(QString::fromUtf8("fontHexEdit"));
        sizePolicy2.setHeightForWidth(fontHexEdit->sizePolicy().hasHeightForWidth());
        fontHexEdit->setSizePolicy(sizePolicy2);
        fontHexEdit->setEditable(false);
        fontHexEdit->setFontFilters(QFontComboBox::MonospacedFonts);

        fontHexEditLayout->addWidget(fontHexEdit);

        fontHexEditStyle = new QComboBox(tabFont);
        fontHexEditStyle->addItem(QString());
        fontHexEditStyle->addItem(QString());
        fontHexEditStyle->addItem(QString());
        fontHexEditStyle->addItem(QString());
        fontHexEditStyle->setObjectName(QString::fromUtf8("fontHexEditStyle"));
        sizePolicy3.setHeightForWidth(fontHexEditStyle->sizePolicy().hasHeightForWidth());
        fontHexEditStyle->setSizePolicy(sizePolicy3);

        fontHexEditLayout->addWidget(fontHexEditStyle);

        fontHexEditSize = new QComboBox(tabFont);
        fontHexEditSize->addItem(QString());
        fontHexEditSize->addItem(QString());
        fontHexEditSize->addItem(QString());
        fontHexEditSize->addItem(QString());
        fontHexEditSize->addItem(QString());
        fontHexEditSize->addItem(QString());
        fontHexEditSize->addItem(QString());
        fontHexEditSize->addItem(QString());
        fontHexEditSize->addItem(QString());
        fontHexEditSize->addItem(QString());
        fontHexEditSize->addItem(QString());
        fontHexEditSize->addItem(QString());
        fontHexEditSize->setObjectName(QString::fromUtf8("fontHexEditSize"));
        sizePolicy3.setHeightForWidth(fontHexEditSize->sizePolicy().hasHeightForWidth());
        fontHexEditSize->setSizePolicy(sizePolicy3);
        fontHexEditSize->setMaxVisibleItems(12);
        fontHexEditSize->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        fontHexEditLayout->addWidget(fontHexEditSize);


        verticalLayout->addLayout(fontHexEditLayout);

        fontLogLayout = new QHBoxLayout();
        fontLogLayout->setSpacing(6);
        fontLogLayout->setObjectName(QString::fromUtf8("fontLogLayout"));
        labelFontLog = new QLabel(tabFont);
        labelFontLog->setObjectName(QString::fromUtf8("labelFontLog"));
        sizePolicy2.setHeightForWidth(labelFontLog->sizePolicy().hasHeightForWidth());
        labelFontLog->setSizePolicy(sizePolicy2);

        fontLogLayout->addWidget(labelFontLog);

        fontLog = new QFontComboBox(tabFont);
        fontLog->setObjectName(QString::fromUtf8("fontLog"));
        sizePolicy2.setHeightForWidth(fontLog->sizePolicy().hasHeightForWidth());
        fontLog->setSizePolicy(sizePolicy2);
        fontLog->setEditable(false);
        fontLog->setFontFilters(QFontComboBox::MonospacedFonts);

        fontLogLayout->addWidget(fontLog);

        fontLogStyle = new QComboBox(tabFont);
        fontLogStyle->addItem(QString());
        fontLogStyle->addItem(QString());
        fontLogStyle->addItem(QString());
        fontLogStyle->addItem(QString());
        fontLogStyle->setObjectName(QString::fromUtf8("fontLogStyle"));
        sizePolicy3.setHeightForWidth(fontLogStyle->sizePolicy().hasHeightForWidth());
        fontLogStyle->setSizePolicy(sizePolicy3);

        fontLogLayout->addWidget(fontLogStyle);

        fontLogSize = new QComboBox(tabFont);
        fontLogSize->addItem(QString());
        fontLogSize->addItem(QString());
        fontLogSize->addItem(QString());
        fontLogSize->addItem(QString());
        fontLogSize->addItem(QString());
        fontLogSize->addItem(QString());
        fontLogSize->addItem(QString());
        fontLogSize->addItem(QString());
        fontLogSize->addItem(QString());
        fontLogSize->addItem(QString());
        fontLogSize->addItem(QString());
        fontLogSize->addItem(QString());
        fontLogSize->setObjectName(QString::fromUtf8("fontLogSize"));
        sizePolicy3.setHeightForWidth(fontLogSize->sizePolicy().hasHeightForWidth());
        fontLogSize->setSizePolicy(sizePolicy3);
        fontLogSize->setMaxVisibleItems(12);
        fontLogSize->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        fontLogLayout->addWidget(fontLogSize);


        verticalLayout->addLayout(fontLogLayout);

        fontApplicationLayout = new QHBoxLayout();
        fontApplicationLayout->setSpacing(6);
        fontApplicationLayout->setObjectName(QString::fromUtf8("fontApplicationLayout"));
        buttonApplicationFont = new QPushButton(tabFont);
        buttonApplicationFont->setObjectName(QString::fromUtf8("buttonApplicationFont"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(buttonApplicationFont->sizePolicy().hasHeightForWidth());
        buttonApplicationFont->setSizePolicy(sizePolicy4);

        fontApplicationLayout->addWidget(buttonApplicationFont);

        labelApplicationFont = new QLabel(tabFont);
        labelApplicationFont->setObjectName(QString::fromUtf8("labelApplicationFont"));
        sizePolicy3.setHeightForWidth(labelApplicationFont->sizePolicy().hasHeightForWidth());
        labelApplicationFont->setSizePolicy(sizePolicy3);

        fontApplicationLayout->addWidget(labelApplicationFont);

        buttonFontDefaults = new QPushButton(tabFont);
        buttonFontDefaults->setObjectName(QString::fromUtf8("buttonFontDefaults"));
        sizePolicy3.setHeightForWidth(buttonFontDefaults->sizePolicy().hasHeightForWidth());
        buttonFontDefaults->setSizePolicy(sizePolicy3);

        fontApplicationLayout->addWidget(buttonFontDefaults);


        verticalLayout->addLayout(fontApplicationLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        fontRestartRequiredLayout = new QVBoxLayout();
        fontRestartRequiredLayout->setSpacing(6);
        fontRestartRequiredLayout->setObjectName(QString::fromUtf8("fontRestartRequiredLayout"));
        fontRestartRequiredLayout->setSizeConstraint(QLayout::SetMinimumSize);
        labelFontRestartRequired = new QLabel(tabFont);
        labelFontRestartRequired->setObjectName(QString::fromUtf8("labelFontRestartRequired"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(labelFontRestartRequired->sizePolicy().hasHeightForWidth());
        labelFontRestartRequired->setSizePolicy(sizePolicy5);
        labelFontRestartRequired->setWordWrap(true);

        fontRestartRequiredLayout->addWidget(labelFontRestartRequired);


        verticalLayout->addLayout(fontRestartRequiredLayout);

        tabWidget->addTab(tabFont, QString());

        verticalLayout_3->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonSave = new QPushButton(AppearanceDialog);
        buttonSave->setObjectName(QString::fromUtf8("buttonSave"));

        horizontalLayout->addWidget(buttonSave);

        buttonCancel = new QPushButton(AppearanceDialog);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));

        horizontalLayout->addWidget(buttonCancel);


        verticalLayout_3->addLayout(horizontalLayout);

        QWidget::setTabOrder(tabWidget, listColorNames);
        QWidget::setTabOrder(listColorNames, button000000);
        QWidget::setTabOrder(button000000, button000080);
        QWidget::setTabOrder(button000080, button008000);
        QWidget::setTabOrder(button008000, button008080);
        QWidget::setTabOrder(button008080, button800000);
        QWidget::setTabOrder(button800000, button800080);
        QWidget::setTabOrder(button800080, button808000);
        QWidget::setTabOrder(button808000, buttonC0C0C0);
        QWidget::setTabOrder(buttonC0C0C0, button808080);
        QWidget::setTabOrder(button808080, button0000FF);
        QWidget::setTabOrder(button0000FF, button00FF00);
        QWidget::setTabOrder(button00FF00, button00FFFF);
        QWidget::setTabOrder(button00FFFF, buttonFF0000);
        QWidget::setTabOrder(buttonFF0000, buttonFF00FF);
        QWidget::setTabOrder(buttonFF00FF, buttonFFFF00);
        QWidget::setTabOrder(buttonFFFF00, buttonFFFFFF);
        QWidget::setTabOrder(buttonFFFFFF, editColor);
        QWidget::setTabOrder(editColor, buttonColor);
        QWidget::setTabOrder(buttonColor, buttonBackgroundNone);
        QWidget::setTabOrder(buttonBackgroundNone, buttonBackground000000);
        QWidget::setTabOrder(buttonBackground000000, buttonBackgroundC0C0C0);
        QWidget::setTabOrder(buttonBackgroundC0C0C0, buttonBackgroundFFFFFF);
        QWidget::setTabOrder(buttonBackgroundFFFFFF, buttonBackground00FFFF);
        QWidget::setTabOrder(buttonBackground00FFFF, buttonBackground00FF00);
        QWidget::setTabOrder(buttonBackground00FF00, buttonBackgroundFF0000);
        QWidget::setTabOrder(buttonBackgroundFF0000, buttonBackgroundFFFF00);
        QWidget::setTabOrder(buttonBackgroundFFFF00, editBackgroundColor);
        QWidget::setTabOrder(editBackgroundColor, buttonBackgroundColor);
        QWidget::setTabOrder(buttonBackgroundColor, fontAbstractTables);
        QWidget::setTabOrder(fontAbstractTables, fontAbstractTablesStyle);
        QWidget::setTabOrder(fontAbstractTablesStyle, fontAbstractTablesSize);
        QWidget::setTabOrder(fontAbstractTablesSize, fontDisassembly);
        QWidget::setTabOrder(fontDisassembly, fontDisassemblyStyle);
        QWidget::setTabOrder(fontDisassemblyStyle, fontDisassemblySize);
        QWidget::setTabOrder(fontDisassemblySize, fontHexDump);
        QWidget::setTabOrder(fontHexDump, fontHexDumpStyle);
        QWidget::setTabOrder(fontHexDumpStyle, fontHexDumpSize);
        QWidget::setTabOrder(fontHexDumpSize, fontStack);
        QWidget::setTabOrder(fontStack, fontStackStyle);
        QWidget::setTabOrder(fontStackStyle, fontStackSize);
        QWidget::setTabOrder(fontStackSize, fontRegisters);
        QWidget::setTabOrder(fontRegisters, fontRegistersStyle);
        QWidget::setTabOrder(fontRegistersStyle, fontRegistersSize);
        QWidget::setTabOrder(fontRegistersSize, fontHexEdit);
        QWidget::setTabOrder(fontHexEdit, fontHexEditStyle);
        QWidget::setTabOrder(fontHexEditStyle, fontHexEditSize);
        QWidget::setTabOrder(fontHexEditSize, fontLog);
        QWidget::setTabOrder(fontLog, fontLogStyle);
        QWidget::setTabOrder(fontLogStyle, fontLogSize);
        QWidget::setTabOrder(fontLogSize, buttonApplicationFont);
        QWidget::setTabOrder(buttonApplicationFont, buttonFontDefaults);

        retranslateUi(AppearanceDialog);
        QObject::connect(buttonCancel, SIGNAL(clicked()), AppearanceDialog, SLOT(close()));
        QObject::connect(buttonSave, SIGNAL(clicked(bool)), AppearanceDialog, SLOT(accept()));

        tabWidget->setCurrentIndex(0);
        buttonSave->setDefault(true);


        QMetaObject::connectSlotsByName(AppearanceDialog);
    } // setupUi

    void retranslateUi(QDialog *AppearanceDialog)
    {
        AppearanceDialog->setWindowTitle(QApplication::translate("AppearanceDialog", "Appearance", nullptr));
        groupProperties->setTitle(QApplication::translate("AppearanceDialog", "Properties", nullptr));
        groupColor->setTitle(QApplication::translate("AppearanceDialog", "Color", nullptr));
        button000000->setText(QString());
        button000080->setText(QString());
        button008000->setText(QString());
        button008080->setText(QString());
        button800000->setText(QString());
        button800080->setText(QString());
        button808000->setText(QString());
        buttonC0C0C0->setText(QString());
        button808080->setText(QString());
        button0000FF->setText(QString());
        button00FF00->setText(QString());
        button00FFFF->setText(QString());
        buttonFF0000->setText(QString());
        buttonFF00FF->setText(QString());
        buttonFFFF00->setText(QString());
        buttonFFFFFF->setText(QString());
        editColor->setText(QApplication::translate("AppearanceDialog", "#FFFFFF", nullptr));
#ifndef QT_NO_TOOLTIP
        buttonColor->setToolTip(QApplication::translate("AppearanceDialog", "Open color selector", nullptr));
#endif // QT_NO_TOOLTIP
        buttonColor->setText(QString());
        groupBackgroundColor->setTitle(QApplication::translate("AppearanceDialog", "Background Color", nullptr));
#ifndef QT_NO_TOOLTIP
        buttonBackgroundNone->setToolTip(QApplication::translate("AppearanceDialog", "Transparent", nullptr));
#endif // QT_NO_TOOLTIP
        buttonBackgroundNone->setText(QApplication::translate("AppearanceDialog", "X", nullptr));
        buttonBackground000000->setText(QString());
        buttonBackgroundC0C0C0->setText(QString());
        buttonBackgroundFFFFFF->setText(QString());
        buttonBackground00FFFF->setText(QString());
        buttonBackground00FF00->setText(QString());
        buttonBackgroundFF0000->setText(QString());
        buttonBackgroundFFFF00->setText(QString());
        editBackgroundColor->setText(QApplication::translate("AppearanceDialog", "#FFFFFF", nullptr));
#ifndef QT_NO_TOOLTIP
        buttonBackgroundColor->setToolTip(QApplication::translate("AppearanceDialog", "Open color selector", nullptr));
#endif // QT_NO_TOOLTIP
        buttonBackgroundColor->setText(QString());
        exampleText->setText(QApplication::translate("AppearanceDialog", "Example Text", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabColors), QApplication::translate("AppearanceDialog", "Colors", nullptr));
        labelFontAbstractTables->setText(QApplication::translate("AppearanceDialog", "General Tables:", nullptr));
        fontAbstractTablesStyle->setItemText(0, QApplication::translate("AppearanceDialog", "Normal", nullptr));
        fontAbstractTablesStyle->setItemText(1, QApplication::translate("AppearanceDialog", "Bold", nullptr));
        fontAbstractTablesStyle->setItemText(2, QApplication::translate("AppearanceDialog", "Italic", nullptr));
        fontAbstractTablesStyle->setItemText(3, QApplication::translate("AppearanceDialog", "Bold + Italic", nullptr));

        fontAbstractTablesSize->setItemText(0, QApplication::translate("AppearanceDialog", "6", nullptr));
        fontAbstractTablesSize->setItemText(1, QApplication::translate("AppearanceDialog", "7", nullptr));
        fontAbstractTablesSize->setItemText(2, QApplication::translate("AppearanceDialog", "8", nullptr));
        fontAbstractTablesSize->setItemText(3, QApplication::translate("AppearanceDialog", "9", nullptr));
        fontAbstractTablesSize->setItemText(4, QApplication::translate("AppearanceDialog", "10", nullptr));
        fontAbstractTablesSize->setItemText(5, QApplication::translate("AppearanceDialog", "11", nullptr));
        fontAbstractTablesSize->setItemText(6, QApplication::translate("AppearanceDialog", "12", nullptr));
        fontAbstractTablesSize->setItemText(7, QApplication::translate("AppearanceDialog", "14", nullptr));
        fontAbstractTablesSize->setItemText(8, QApplication::translate("AppearanceDialog", "16", nullptr));
        fontAbstractTablesSize->setItemText(9, QApplication::translate("AppearanceDialog", "18", nullptr));
        fontAbstractTablesSize->setItemText(10, QApplication::translate("AppearanceDialog", "20", nullptr));
        fontAbstractTablesSize->setItemText(11, QApplication::translate("AppearanceDialog", "22", nullptr));

        labelFontDisassembly->setText(QApplication::translate("AppearanceDialog", "Disassembly:", nullptr));
        fontDisassemblyStyle->setItemText(0, QApplication::translate("AppearanceDialog", "Normal", nullptr));
        fontDisassemblyStyle->setItemText(1, QApplication::translate("AppearanceDialog", "Bold", nullptr));
        fontDisassemblyStyle->setItemText(2, QApplication::translate("AppearanceDialog", "Italic", nullptr));
        fontDisassemblyStyle->setItemText(3, QApplication::translate("AppearanceDialog", "Bold + Italic", nullptr));

        fontDisassemblySize->setItemText(0, QApplication::translate("AppearanceDialog", "6", nullptr));
        fontDisassemblySize->setItemText(1, QApplication::translate("AppearanceDialog", "7", nullptr));
        fontDisassemblySize->setItemText(2, QApplication::translate("AppearanceDialog", "8", nullptr));
        fontDisassemblySize->setItemText(3, QApplication::translate("AppearanceDialog", "9", nullptr));
        fontDisassemblySize->setItemText(4, QApplication::translate("AppearanceDialog", "10", nullptr));
        fontDisassemblySize->setItemText(5, QApplication::translate("AppearanceDialog", "11", nullptr));
        fontDisassemblySize->setItemText(6, QApplication::translate("AppearanceDialog", "12", nullptr));
        fontDisassemblySize->setItemText(7, QApplication::translate("AppearanceDialog", "14", nullptr));
        fontDisassemblySize->setItemText(8, QApplication::translate("AppearanceDialog", "16", nullptr));
        fontDisassemblySize->setItemText(9, QApplication::translate("AppearanceDialog", "18", nullptr));
        fontDisassemblySize->setItemText(10, QApplication::translate("AppearanceDialog", "20", nullptr));
        fontDisassemblySize->setItemText(11, QApplication::translate("AppearanceDialog", "22", nullptr));

        labelFontHexDump->setText(QApplication::translate("AppearanceDialog", "HexDump:", nullptr));
        fontHexDumpStyle->setItemText(0, QApplication::translate("AppearanceDialog", "Normal", nullptr));
        fontHexDumpStyle->setItemText(1, QApplication::translate("AppearanceDialog", "Bold", nullptr));
        fontHexDumpStyle->setItemText(2, QApplication::translate("AppearanceDialog", "Italic", nullptr));
        fontHexDumpStyle->setItemText(3, QApplication::translate("AppearanceDialog", "Bold + Italic", nullptr));

        fontHexDumpSize->setItemText(0, QApplication::translate("AppearanceDialog", "6", nullptr));
        fontHexDumpSize->setItemText(1, QApplication::translate("AppearanceDialog", "7", nullptr));
        fontHexDumpSize->setItemText(2, QApplication::translate("AppearanceDialog", "8", nullptr));
        fontHexDumpSize->setItemText(3, QApplication::translate("AppearanceDialog", "9", nullptr));
        fontHexDumpSize->setItemText(4, QApplication::translate("AppearanceDialog", "10", nullptr));
        fontHexDumpSize->setItemText(5, QApplication::translate("AppearanceDialog", "11", nullptr));
        fontHexDumpSize->setItemText(6, QApplication::translate("AppearanceDialog", "12", nullptr));
        fontHexDumpSize->setItemText(7, QApplication::translate("AppearanceDialog", "14", nullptr));
        fontHexDumpSize->setItemText(8, QApplication::translate("AppearanceDialog", "16", nullptr));
        fontHexDumpSize->setItemText(9, QApplication::translate("AppearanceDialog", "18", nullptr));
        fontHexDumpSize->setItemText(10, QApplication::translate("AppearanceDialog", "20", nullptr));
        fontHexDumpSize->setItemText(11, QApplication::translate("AppearanceDialog", "22", nullptr));

        labelFontStack->setText(QApplication::translate("AppearanceDialog", "Stack:", nullptr));
        fontStackStyle->setItemText(0, QApplication::translate("AppearanceDialog", "Normal", nullptr));
        fontStackStyle->setItemText(1, QApplication::translate("AppearanceDialog", "Bold", nullptr));
        fontStackStyle->setItemText(2, QApplication::translate("AppearanceDialog", "Italic", nullptr));
        fontStackStyle->setItemText(3, QApplication::translate("AppearanceDialog", "Bold + Italic", nullptr));

        fontStackSize->setItemText(0, QApplication::translate("AppearanceDialog", "6", nullptr));
        fontStackSize->setItemText(1, QApplication::translate("AppearanceDialog", "7", nullptr));
        fontStackSize->setItemText(2, QApplication::translate("AppearanceDialog", "8", nullptr));
        fontStackSize->setItemText(3, QApplication::translate("AppearanceDialog", "9", nullptr));
        fontStackSize->setItemText(4, QApplication::translate("AppearanceDialog", "10", nullptr));
        fontStackSize->setItemText(5, QApplication::translate("AppearanceDialog", "11", nullptr));
        fontStackSize->setItemText(6, QApplication::translate("AppearanceDialog", "12", nullptr));
        fontStackSize->setItemText(7, QApplication::translate("AppearanceDialog", "14", nullptr));
        fontStackSize->setItemText(8, QApplication::translate("AppearanceDialog", "16", nullptr));
        fontStackSize->setItemText(9, QApplication::translate("AppearanceDialog", "18", nullptr));
        fontStackSize->setItemText(10, QApplication::translate("AppearanceDialog", "20", nullptr));
        fontStackSize->setItemText(11, QApplication::translate("AppearanceDialog", "22", nullptr));

        labelFontRegisters->setText(QApplication::translate("AppearanceDialog", "Registers:", nullptr));
        fontRegistersStyle->setItemText(0, QApplication::translate("AppearanceDialog", "Normal", nullptr));
        fontRegistersStyle->setItemText(1, QApplication::translate("AppearanceDialog", "Bold", nullptr));
        fontRegistersStyle->setItemText(2, QApplication::translate("AppearanceDialog", "Italic", nullptr));
        fontRegistersStyle->setItemText(3, QApplication::translate("AppearanceDialog", "Bold + Italic", nullptr));

        fontRegistersSize->setItemText(0, QApplication::translate("AppearanceDialog", "6", nullptr));
        fontRegistersSize->setItemText(1, QApplication::translate("AppearanceDialog", "7", nullptr));
        fontRegistersSize->setItemText(2, QApplication::translate("AppearanceDialog", "8", nullptr));
        fontRegistersSize->setItemText(3, QApplication::translate("AppearanceDialog", "9", nullptr));
        fontRegistersSize->setItemText(4, QApplication::translate("AppearanceDialog", "10", nullptr));
        fontRegistersSize->setItemText(5, QApplication::translate("AppearanceDialog", "11", nullptr));
        fontRegistersSize->setItemText(6, QApplication::translate("AppearanceDialog", "12", nullptr));
        fontRegistersSize->setItemText(7, QApplication::translate("AppearanceDialog", "14", nullptr));
        fontRegistersSize->setItemText(8, QApplication::translate("AppearanceDialog", "16", nullptr));
        fontRegistersSize->setItemText(9, QApplication::translate("AppearanceDialog", "18", nullptr));
        fontRegistersSize->setItemText(10, QApplication::translate("AppearanceDialog", "20", nullptr));
        fontRegistersSize->setItemText(11, QApplication::translate("AppearanceDialog", "22", nullptr));

        labelFontHexEdit->setText(QApplication::translate("AppearanceDialog", "HexEdit:", nullptr));
        fontHexEditStyle->setItemText(0, QApplication::translate("AppearanceDialog", "Normal", nullptr));
        fontHexEditStyle->setItemText(1, QApplication::translate("AppearanceDialog", "Bold", nullptr));
        fontHexEditStyle->setItemText(2, QApplication::translate("AppearanceDialog", "Italic", nullptr));
        fontHexEditStyle->setItemText(3, QApplication::translate("AppearanceDialog", "Bold + Italic", nullptr));

        fontHexEditSize->setItemText(0, QApplication::translate("AppearanceDialog", "6", nullptr));
        fontHexEditSize->setItemText(1, QApplication::translate("AppearanceDialog", "7", nullptr));
        fontHexEditSize->setItemText(2, QApplication::translate("AppearanceDialog", "8", nullptr));
        fontHexEditSize->setItemText(3, QApplication::translate("AppearanceDialog", "9", nullptr));
        fontHexEditSize->setItemText(4, QApplication::translate("AppearanceDialog", "10", nullptr));
        fontHexEditSize->setItemText(5, QApplication::translate("AppearanceDialog", "11", nullptr));
        fontHexEditSize->setItemText(6, QApplication::translate("AppearanceDialog", "12", nullptr));
        fontHexEditSize->setItemText(7, QApplication::translate("AppearanceDialog", "14", nullptr));
        fontHexEditSize->setItemText(8, QApplication::translate("AppearanceDialog", "16", nullptr));
        fontHexEditSize->setItemText(9, QApplication::translate("AppearanceDialog", "18", nullptr));
        fontHexEditSize->setItemText(10, QApplication::translate("AppearanceDialog", "20", nullptr));
        fontHexEditSize->setItemText(11, QApplication::translate("AppearanceDialog", "22", nullptr));

        labelFontLog->setText(QApplication::translate("AppearanceDialog", "Log:", nullptr));
        fontLogStyle->setItemText(0, QApplication::translate("AppearanceDialog", "Normal", nullptr));
        fontLogStyle->setItemText(1, QApplication::translate("AppearanceDialog", "Bold", nullptr));
        fontLogStyle->setItemText(2, QApplication::translate("AppearanceDialog", "Italic", nullptr));
        fontLogStyle->setItemText(3, QApplication::translate("AppearanceDialog", "Bold + Italic", nullptr));

        fontLogSize->setItemText(0, QApplication::translate("AppearanceDialog", "6", nullptr));
        fontLogSize->setItemText(1, QApplication::translate("AppearanceDialog", "7", nullptr));
        fontLogSize->setItemText(2, QApplication::translate("AppearanceDialog", "8", nullptr));
        fontLogSize->setItemText(3, QApplication::translate("AppearanceDialog", "9", nullptr));
        fontLogSize->setItemText(4, QApplication::translate("AppearanceDialog", "10", nullptr));
        fontLogSize->setItemText(5, QApplication::translate("AppearanceDialog", "11", nullptr));
        fontLogSize->setItemText(6, QApplication::translate("AppearanceDialog", "12", nullptr));
        fontLogSize->setItemText(7, QApplication::translate("AppearanceDialog", "14", nullptr));
        fontLogSize->setItemText(8, QApplication::translate("AppearanceDialog", "16", nullptr));
        fontLogSize->setItemText(9, QApplication::translate("AppearanceDialog", "18", nullptr));
        fontLogSize->setItemText(10, QApplication::translate("AppearanceDialog", "20", nullptr));
        fontLogSize->setItemText(11, QApplication::translate("AppearanceDialog", "22", nullptr));

        buttonApplicationFont->setText(QApplication::translate("AppearanceDialog", "&Application Font*", nullptr));
        labelApplicationFont->setText(QApplication::translate("AppearanceDialog", "Courier New", nullptr));
        buttonFontDefaults->setText(QApplication::translate("AppearanceDialog", "&Defaults", nullptr));
        labelFontRestartRequired->setText(QApplication::translate("AppearanceDialog", "*Setting requires restarting the application to take effect.", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabFont), QApplication::translate("AppearanceDialog", "Font", nullptr));
        buttonSave->setText(QApplication::translate("AppearanceDialog", "&Save", nullptr));
        buttonCancel->setText(QApplication::translate("AppearanceDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AppearanceDialog: public Ui_AppearanceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPEARANCEDIALOG_H
