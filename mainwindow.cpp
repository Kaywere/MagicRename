#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QDir>
#include <QFileInfo>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Connect buttons to their respective slots
    connect(ui->browseVideoButton, &QPushButton::clicked, this, &MainWindow::browseVideoFolder);
    connect(ui->browseSubtitleButton, &QPushButton::clicked, this, &MainWindow::browseSubtitleFolder);
    connect(ui->renameButton, &QPushButton::clicked, this, &MainWindow::renameSubtitles);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::browseVideoFolder()
{
    videoFolderPath = QFileDialog::getExistingDirectory(this, tr("Select Video Folder"));
    if (!videoFolderPath.isEmpty()) {
        ui->videoFolderEdit->setText(videoFolderPath);  // Update the UI text field
    }
}

void MainWindow::browseSubtitleFolder()
{
    subtitleFolderPath = QFileDialog::getExistingDirectory(this, tr("Select Subtitle Folder"));
    if (!subtitleFolderPath.isEmpty()) {
        ui->subtitleFolderEdit->setText(subtitleFolderPath);  // Update the UI text field
    }
}

void MainWindow::renameSubtitles()
{
    if (videoFolderPath.isEmpty() || subtitleFolderPath.isEmpty()) {
        QMessageBox::warning(this, tr("Error"), tr("Please select both video and subtitle folders!"));
        return;
    }

    QDir videoDir(videoFolderPath);
    QDir subtitleDir(subtitleFolderPath);

    QStringList videoFilters;
    videoFilters << "*.mkv" << "*.mp4";  // Video extensions
    QStringList subtitleFilters;
    subtitleFilters << "*.srt" << "*.ass";  // Subtitle extensions

    QFileInfoList videoFiles = videoDir.entryInfoList(videoFilters, QDir::Files);
    QFileInfoList subtitleFiles = subtitleDir.entryInfoList(subtitleFilters, QDir::Files);

    if (videoFiles.size() != subtitleFiles.size()) {
        QMessageBox::warning(this, tr("Error"), tr("The number of video and subtitle files do not match!"));
        return;
    }

    for (int i = 0; i < videoFiles.size(); ++i) {
        QFileInfo videoFile = videoFiles.at(i);
        QFileInfo subtitleFile = subtitleFiles.at(i);

        QString videoName = videoFile.completeBaseName();  // Get video file name without extension
        QString subtitleExt = subtitleFile.suffix();  // Get the subtitle file extension
        QString newSubtitleName = videoName + "." + subtitleExt;  // New subtitle name

        QString newSubtitlePath = subtitleDir.filePath(newSubtitleName);
        QFile::rename(subtitleFile.filePath(), newSubtitlePath);
    }

    QMessageBox::information(this, tr("Success"), tr("Subtitles renamed successfully!"));
}
