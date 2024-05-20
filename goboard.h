#ifndef GOBOARD_H
#define GOBOARD_H

#include <QWidget>
#include <QKeyEvent>
#include "mylabel.h"

namespace Ui {
class goBoard;
}

class goBoard : public QWidget
{
    Q_OBJECT

public:
    int c_id;
    QString username;
    Ui::goBoard *ui;

    goBoard(QWidget *parent = nullptr);
    ~goBoard();
    void keyPressEvent(QKeyEvent *event);

signals:
    void back();
    void pass();
    void regret();
    void sendCID(int id, QString name);  // Signal to send the user ID


public slots:
    void on_finish_clicked();
    void setUserID(int id, QString name);


private slots:
    void on_start_clicked();

    void on_pass_clicked();

    void on_regret_clicked();

private:


};

#endif // GOBOARD_H
