#include "replay.h"
#include "ui_replay.h"

replay::replay(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::replay)
{
    ui->setupUi(this);

}

replay::~replay()
{
    delete ui;
}

void replay::on_start_clicked()
{
    ui->label->loadReplayData(username, c_id); // 加载复盘数据

    qDebug() << c_id;
}


void replay::on_forward_clicked()
{
    ui->label->forward();
}

void replay::on_backward_clicked()
{
    ui->label->backward();
}

void replay::on_finish_clicked()
{
    this->close();
    ui->label->initialization(); // 复盘完成后初始化棋盘
    emit finish();
}

void replay::setCID(int c_id, QString username)
{
    this->c_id = c_id;
    this->username = username;
}

void replay::keyPressEvent(QKeyEvent *event)
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
