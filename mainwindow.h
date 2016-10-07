#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <mainapplication.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void setController(MainApplication *mApp);
    ~MainWindow();

private slots:
    void on_startButton_toggled(bool checked);
    void closeEvent (QCloseEvent *);

private:
    bool running;
    Ui::MainWindow *ui;
    MainApplication * controller;
    void closeMainForm();
};

#endif // MAINWINDOW_H
