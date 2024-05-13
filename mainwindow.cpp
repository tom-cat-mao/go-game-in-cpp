#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    showFullScreen();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    // 如果按下的是 Esc 键，退出全屏模式
    if (event->key() == Qt::Key_Escape)
    {
        showMaximized();
    }
    if (event->key() == Qt::Key_F11)
    {
        showFullScreen();
    }
}
