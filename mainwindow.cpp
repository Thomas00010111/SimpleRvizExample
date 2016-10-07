#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

void MainWindow::setController(MainApplication * mApp)
{
    controller = mApp;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_startButton_toggled(bool checked)
{
    running = true;
    ros::Rate r(10);
    while (ros::ok() && running)
    {
        controller->sendTransform();
        controller->sendMarker();
        QCoreApplication::processEvents();
        r.sleep();
    }
    ros::shutdown();
}

void MainWindow::closeEvent (QCloseEvent *event)
{
    running = false;
    std::cout << "closeEvent: " << event << std::endl;
    closeMainForm();
}

void MainWindow::closeMainForm()
{
    close();
    QApplication::quit();
}
