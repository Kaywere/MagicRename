#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void browseVideoFolder();
    void browseSubtitleFolder();
    void renameSubtitles();

private:
    Ui::MainWindow *ui;
    QString videoFolderPath;
    QString subtitleFolderPath;
};

#endif // MAINWINDOW_H
