#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidget>
#include <oauth.h>
#include <downloader.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    OAuth *oauth;
    Downloader *downloader;

    void showStartPage();

private slots:

    void afterSuccessOaouth();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:

    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H