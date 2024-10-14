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
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *centralwidget_2;
    QGridLayout *gridLayout;
    QLabel *labelVideo;
    QLineEdit *videoFolderEdit;
    QPushButton *browseVideoButton;
    QLabel *labelSubtitle;
    QLineEdit *subtitleFolderEdit;
    QPushButton *browseSubtitleButton;
    QPushButton *renameButton;
    QMenuBar *menubar_2;
    QStatusBar *statusbar_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget_2 = new QWidget(centralwidget);
        centralwidget_2->setObjectName("centralwidget_2");
        centralwidget_2->setGeometry(QRect(170, 110, 272, 77));
        gridLayout = new QGridLayout(centralwidget_2);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        labelVideo = new QLabel(centralwidget_2);
        labelVideo->setObjectName("labelVideo");

        gridLayout->addWidget(labelVideo, 0, 0, 1, 1);

        videoFolderEdit = new QLineEdit(centralwidget_2);
        videoFolderEdit->setObjectName("videoFolderEdit");

        gridLayout->addWidget(videoFolderEdit, 0, 1, 1, 1);

        browseVideoButton = new QPushButton(centralwidget_2);
        browseVideoButton->setObjectName("browseVideoButton");

        gridLayout->addWidget(browseVideoButton, 0, 2, 1, 1);

        labelSubtitle = new QLabel(centralwidget_2);
        labelSubtitle->setObjectName("labelSubtitle");

        gridLayout->addWidget(labelSubtitle, 1, 0, 1, 1);

        subtitleFolderEdit = new QLineEdit(centralwidget_2);
        subtitleFolderEdit->setObjectName("subtitleFolderEdit");

        gridLayout->addWidget(subtitleFolderEdit, 1, 1, 1, 1);

        browseSubtitleButton = new QPushButton(centralwidget_2);
        browseSubtitleButton->setObjectName("browseSubtitleButton");

        gridLayout->addWidget(browseSubtitleButton, 1, 2, 1, 1);

        renameButton = new QPushButton(centralwidget_2);
        renameButton->setObjectName("renameButton");

        gridLayout->addWidget(renameButton, 2, 1, 1, 1);

        menubar_2 = new QMenuBar(centralwidget);
        menubar_2->setObjectName("menubar_2");
        menubar_2->setGeometry(QRect(190, 140, 800, 19));
        statusbar_2 = new QStatusBar(centralwidget);
        statusbar_2->setObjectName("statusbar_2");
        statusbar_2->setGeometry(QRect(190, 140, 3, 22));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 19));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        labelVideo->setText(QCoreApplication::translate("MainWindow", "Video Folder Path:", nullptr));
        videoFolderEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Select video folder...", nullptr));
        browseVideoButton->setText(QCoreApplication::translate("MainWindow", "Browse Video", nullptr));
        labelSubtitle->setText(QCoreApplication::translate("MainWindow", "Subtitle Folder Path:", nullptr));
        subtitleFolderEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Select subtitle folder...", nullptr));
        browseSubtitleButton->setText(QCoreApplication::translate("MainWindow", "Browse Subtitle", nullptr));
        renameButton->setText(QCoreApplication::translate("MainWindow", "Rename Subtitles", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
