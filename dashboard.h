#ifndef DASHBOARD_H
#define DASHBOARD_H

#include "goboard.h"
#include "sqlcommond.h"

#include <QWidget>
#include <QtSql>

class goBoard;

namespace Ui {
class dashboard;
}

class dashboard : public QWidget
{
    Q_OBJECT

public:
    explicit dashboard(QWidget *parent = nullptr);
    ~dashboard();
    goBoard *b = NULL;

public slots:
    void on_start_clicked();
    void comeBackToPrev();
    void setUserID(int id, QString name);

signals:
    void sendCID(int id, QString name);  // Signal to send the user ID

private slots:
    void on_show_clicked();

private:
    Ui::dashboard *ui;

    int user_id;
    QString username;
    int c_id;
    QSqlDatabase db;

};

#endif // DASHBOARD_H
