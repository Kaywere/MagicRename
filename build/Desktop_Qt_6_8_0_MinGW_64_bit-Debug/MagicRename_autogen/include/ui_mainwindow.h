/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *centralwidget_2;
    QGridLayout *gridLayout;
    QLineEdit *subtitleFolderEdit;
    QLabel *labelSubtitle;
    QVBoxLayout *verticalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *renameButton;
    QLabel *labelVideo;
    QPushButton *browseVideoButton;
    QPushButton *browseSubtitleButton;
    QLineEdit *videoFolderEdit;
    QSpacerItem *verticalSpacer;
    QStatusBar *statusbar_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(293, 222);
        MainWindow->setBaseSize(QSize(1920, 1080));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget_2 = new QWidget(centralwidget);
        centralwidget_2->setObjectName("centralwidget_2");
        centralwidget_2->setGeometry(QRect(10, 10, 271, 181));
        gridLayout = new QGridLayout(centralwidget_2);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        subtitleFolderEdit = new QLineEdit(centralwidget_2);
        subtitleFolderEdit->setObjectName("subtitleFolderEdit");

        gridLayout->addWidget(subtitleFolderEdit, 4, 1, 1, 1);

        labelSubtitle = new QLabel(centralwidget_2);
        labelSubtitle->setObjectName("labelSubtitle");

        gridLayout->addWidget(labelSubtitle, 4, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout->addItem(horizontalSpacer);

        renameButton = new QPushButton(centralwidget_2);
        renameButton->setObjectName("renameButton");
        renameButton->setEnabled(true);

        verticalLayout->addWidget(renameButton);


        gridLayout->addLayout(verticalLayout, 6, 0, 1, 2);

        labelVideo = new QLabel(centralwidget_2);
        labelVideo->setObjectName("labelVideo");

        gridLayout->addWidget(labelVideo, 1, 0, 1, 1);

        browseVideoButton = new QPushButton(centralwidget_2);
        browseVideoButton->setObjectName("browseVideoButton");

        gridLayout->addWidget(browseVideoButton, 2, 1, 1, 1);

        browseSubtitleButton = new QPushButton(centralwidget_2);
        browseSubtitleButton->setObjectName("browseSubtitleButton");

        gridLayout->addWidget(browseSubtitleButton, 5, 1, 1, 1);

        videoFolderEdit = new QLineEdit(centralwidget_2);
        videoFolderEdit->setObjectName("videoFolderEdit");

        gridLayout->addWidget(videoFolderEdit, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 0, 1, 2);

        statusbar_2 = new QStatusBar(centralwidget);
        statusbar_2->setObjectName("statusbar_2");
        statusbar_2->setGeometry(QRect(10, 60, 3, 22));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MagicRename", nullptr));
        subtitleFolderEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Select subtitle folder...", nullptr));
        labelSubtitle->setText(QCoreApplication::translate("MainWindow", "Subtitle Folder Path:", nullptr));
        renameButton->setText(QCoreApplication::translate("MainWindow", "Rename", nullptr));
        labelVideo->setText(QCoreApplication::translate("MainWindow", "Video Folder Path:", nullptr));
        browseVideoButton->setText(QCoreApplication::translate("MainWindow", "Browse Video", nullptr));
        browseSubtitleButton->setText(QCoreApplication::translate("MainWindow", "Browse Subtitle", nullptr));
        videoFolderEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Select video folder...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
