#include "goboard.h"
#include "ui_goboard.h"

goBoard::goBoard(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::goBoard)
{
    ui->setupUi(this);


    connect(this, &goBoard::sendCID, ui->label, &myLabel::setUserID);
    connect(this, &goBoard::pass, ui->label, &myLabel::setPass);

}

goBoard::~goBoard()
{
    delete ui;
}

void goBoard::keyPressEvent(QKeyEvent *event)
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

void goBoard::on_finish_clicked()
{
    emit this->back();
}

void goBoard::setUserID(int id, QString name)
{
    c_id = id;
    username = name;

    qDebug() << c_id << " " << username;
}

void goBoard::on_start_clicked()
{
    emit sendCID(c_id, username);
}


void goBoard::on_pass_clicked()
{
    emit pass();
}

