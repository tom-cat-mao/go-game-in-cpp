#ifndef REPLAY_H
#define REPLAY_H

#include <QWidget>

namespace Ui {
class replay;
}

class replay : public QWidget
{
    Q_OBJECT

public:
    explicit replay(QWidget *parent = nullptr);
    ~replay();
    void keyPressEvent(QKeyEvent *event);

    Ui::replay *ui;

signals:
    void sendCID(int c_id, QString username);
    void finish();  // 新增复盘完成信号

public slots:
    void setCID(int c_id, QString username);

private slots:
    void on_start_clicked();
    void on_forward_clicked(); // 前进一步按钮槽函数
    void on_backward_clicked(); // 后退一步按钮槽函数
    void on_finish_clicked(); // 新增复盘完成按钮槽函数

private:

    int c_id;
    QString username;
};

#endif // REPLAY_H
