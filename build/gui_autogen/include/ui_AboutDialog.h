/********************************************************************************
** Form generated from reading UI file 'AboutDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *lblLogoImage;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *lblWebsiteTitle;
    QLabel *lblWebsite;
    QVBoxLayout *verticalLayout_2;
    QLabel *lblVersionTitle;
    QLabel *lblVersion;
    QVBoxLayout *verticalLayout_3;
    QLabel *lblIconsTitle;
    QLabel *lblIcons;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer;
    QLabel *lblAbout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnCheckUpdates;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_6;
    QLabel *lblDonationTitle;
    QLabel *lblDonation;
    QLabel *lblQrImage;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->resize(321, 321);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("information");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8(":/Default/icons/information.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        AboutDialog->setWindowIcon(icon);
        verticalLayout_7 = new QVBoxLayout(AboutDialog);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        lblLogoImage = new QLabel(AboutDialog);
        lblLogoImage->setObjectName(QString::fromUtf8("lblLogoImage"));
        lblLogoImage->setMinimumSize(QSize(128, 128));
        lblLogoImage->setMaximumSize(QSize(128, 128));
        lblLogoImage->setPixmap(QPixmap(QString::fromUtf8(":/Default/icons/bug.png")));
        lblLogoImage->setScaledContents(true);
        lblLogoImage->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lblLogoImage);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 0, -1, -1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        lblWebsiteTitle = new QLabel(AboutDialog);
        lblWebsiteTitle->setObjectName(QString::fromUtf8("lblWebsiteTitle"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblWebsiteTitle->sizePolicy().hasHeightForWidth());
        lblWebsiteTitle->setSizePolicy(sizePolicy);
        lblWebsiteTitle->setStyleSheet(QString::fromUtf8(""));
        lblWebsiteTitle->setInputMethodHints(Qt::ImhUrlCharactersOnly);
        lblWebsiteTitle->setOpenExternalLinks(true);

        verticalLayout->addWidget(lblWebsiteTitle);

        lblWebsite = new QLabel(AboutDialog);
        lblWebsite->setObjectName(QString::fromUtf8("lblWebsite"));
        sizePolicy.setHeightForWidth(lblWebsite->sizePolicy().hasHeightForWidth());
        lblWebsite->setSizePolicy(sizePolicy);
        lblWebsite->setCursor(QCursor(Qt::PointingHandCursor));
        lblWebsite->setStyleSheet(QString::fromUtf8(""));
        lblWebsite->setInputMethodHints(Qt::ImhUrlCharactersOnly);
        lblWebsite->setTextFormat(Qt::RichText);
        lblWebsite->setOpenExternalLinks(true);
        lblWebsite->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        verticalLayout->addWidget(lblWebsite);


        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lblVersionTitle = new QLabel(AboutDialog);
        lblVersionTitle->setObjectName(QString::fromUtf8("lblVersionTitle"));
        sizePolicy.setHeightForWidth(lblVersionTitle->sizePolicy().hasHeightForWidth());
        lblVersionTitle->setSizePolicy(sizePolicy);
        lblVersionTitle->setStyleSheet(QString::fromUtf8(""));
        lblVersionTitle->setInputMethodHints(Qt::ImhUrlCharactersOnly);
        lblVersionTitle->setOpenExternalLinks(true);

        verticalLayout_2->addWidget(lblVersionTitle);

        lblVersion = new QLabel(AboutDialog);
        lblVersion->setObjectName(QString::fromUtf8("lblVersion"));
        sizePolicy.setHeightForWidth(lblVersion->sizePolicy().hasHeightForWidth());
        lblVersion->setSizePolicy(sizePolicy);
        lblVersion->setStyleSheet(QString::fromUtf8(""));
        lblVersion->setInputMethodHints(Qt::ImhUrlCharactersOnly);
        lblVersion->setOpenExternalLinks(true);
        lblVersion->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout_2->addWidget(lblVersion);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        lblIconsTitle = new QLabel(AboutDialog);
        lblIconsTitle->setObjectName(QString::fromUtf8("lblIconsTitle"));
        sizePolicy.setHeightForWidth(lblIconsTitle->sizePolicy().hasHeightForWidth());
        lblIconsTitle->setSizePolicy(sizePolicy);
        lblIconsTitle->setStyleSheet(QString::fromUtf8(""));
        lblIconsTitle->setInputMethodHints(Qt::ImhUrlCharactersOnly);
        lblIconsTitle->setOpenExternalLinks(true);

        verticalLayout_3->addWidget(lblIconsTitle);

        lblIcons = new QLabel(AboutDialog);
        lblIcons->setObjectName(QString::fromUtf8("lblIcons"));
        sizePolicy.setHeightForWidth(lblIcons->sizePolicy().hasHeightForWidth());
        lblIcons->setSizePolicy(sizePolicy);
        lblIcons->setCursor(QCursor(Qt::PointingHandCursor));
        lblIcons->setStyleSheet(QString::fromUtf8(""));
        lblIcons->setInputMethodHints(Qt::ImhUrlCharactersOnly);
        lblIcons->setTextFormat(Qt::RichText);
        lblIcons->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblIcons->setOpenExternalLinks(true);
        lblIcons->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        verticalLayout_3->addWidget(lblIcons);


        verticalLayout_4->addLayout(verticalLayout_3);


        horizontalLayout->addLayout(verticalLayout_4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout_7->addLayout(horizontalLayout);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(10);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        lblAbout = new QLabel(AboutDialog);
        lblAbout->setObjectName(QString::fromUtf8("lblAbout"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblAbout->sizePolicy().hasHeightForWidth());
        lblAbout->setSizePolicy(sizePolicy1);
        lblAbout->setStyleSheet(QString::fromUtf8(""));
        lblAbout->setInputMethodHints(Qt::ImhUrlCharactersOnly);
        lblAbout->setAlignment(Qt::AlignCenter);
        lblAbout->setOpenExternalLinks(true);

        verticalLayout_5->addWidget(lblAbout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnCheckUpdates = new QPushButton(AboutDialog);
        btnCheckUpdates->setObjectName(QString::fromUtf8("btnCheckUpdates"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnCheckUpdates->sizePolicy().hasHeightForWidth());
        btnCheckUpdates->setSizePolicy(sizePolicy2);
        btnCheckUpdates->setMinimumSize(QSize(121, 28));

        horizontalLayout_2->addWidget(btnCheckUpdates);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_5->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);


        verticalLayout_7->addLayout(verticalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout_6->setContentsMargins(-1, 7, -1, 7);
        lblDonationTitle = new QLabel(AboutDialog);
        lblDonationTitle->setObjectName(QString::fromUtf8("lblDonationTitle"));
        sizePolicy.setHeightForWidth(lblDonationTitle->sizePolicy().hasHeightForWidth());
        lblDonationTitle->setSizePolicy(sizePolicy);
        lblDonationTitle->setStyleSheet(QString::fromUtf8(""));
        lblDonationTitle->setInputMethodHints(Qt::ImhUrlCharactersOnly);
        lblDonationTitle->setOpenExternalLinks(true);

        verticalLayout_6->addWidget(lblDonationTitle);

        lblDonation = new QLabel(AboutDialog);
        lblDonation->setObjectName(QString::fromUtf8("lblDonation"));
        sizePolicy.setHeightForWidth(lblDonation->sizePolicy().hasHeightForWidth());
        lblDonation->setSizePolicy(sizePolicy);
        lblDonation->setStyleSheet(QString::fromUtf8(""));
        lblDonation->setInputMethodHints(Qt::ImhUrlCharactersOnly);
        lblDonation->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lblDonation->setWordWrap(true);
        lblDonation->setOpenExternalLinks(true);
        lblDonation->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        verticalLayout_6->addWidget(lblDonation);


        horizontalLayout_3->addLayout(verticalLayout_6);

        lblQrImage = new QLabel(AboutDialog);
        lblQrImage->setObjectName(QString::fromUtf8("lblQrImage"));
        sizePolicy1.setHeightForWidth(lblQrImage->sizePolicy().hasHeightForWidth());
        lblQrImage->setSizePolicy(sizePolicy1);
        lblQrImage->setMinimumSize(QSize(81, 81));
        lblQrImage->setMaximumSize(QSize(81, 81));
        lblQrImage->setCursor(QCursor(Qt::PointingHandCursor));
        lblQrImage->setTextFormat(Qt::RichText);
        lblQrImage->setPixmap(QPixmap(QString::fromUtf8(":/Default/icons/donation_qr.png")));
        lblQrImage->setScaledContents(true);
        lblQrImage->setWordWrap(false);

        horizontalLayout_3->addWidget(lblQrImage);


        verticalLayout_7->addLayout(horizontalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);


        retranslateUi(AboutDialog);

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "About WinScope", nullptr));
        lblLogoImage->setText(QString());
        lblWebsiteTitle->setText(QApplication::translate("AboutDialog", "Website:", nullptr));
        lblWebsite->setText(QApplication::translate("AboutDialog", "<a href=\"https://winscope.example\">https://winscope.example</a>", nullptr));
        lblVersionTitle->setText(QApplication::translate("AboutDialog", "Version:", nullptr));
        lblVersion->setText(QString());
        lblIconsTitle->setText(QApplication::translate("AboutDialog", "Icons:", nullptr));
        lblIcons->setText(QApplication::translate("AboutDialog", "<html><head/><body><p><a href=\"https://p.yusukekamiyamane.com\"><span style=\" text-decoration: underline;\">Yusuke Kamiyamane</span></a><br/><a href=\"https://github.com/mrfearless\"><span style=\" text-decoration: underline;\">mrfearless</span></a></p></body></html>", nullptr));
        lblAbout->setText(QApplication::translate("AboutDialog", "An open-source x64/x32 debugger for windows.", nullptr));
        btnCheckUpdates->setText(QApplication::translate("AboutDialog", "Check for Updates", nullptr));
        lblDonationTitle->setText(QApplication::translate("AboutDialog", "<h3>Donations</h3>", nullptr));
        lblDonation->setText(QApplication::translate("AboutDialog", "Please consider donating using the Bitcoin address on the right or by going to <a href=\"https://winscope.example/donate\">winscope.example/donate</a>.", nullptr));
        lblQrImage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
