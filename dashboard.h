#ifndef DASHBOARD_H
#define DASHBOARD_H

#include "goboard.h"
#include "rule.h"
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
    rule *r = NULL;

public slots:
    void on_start_clicked();
    void comeBackToPrev();
    void setUserID(int id, QString name);

signals:
    void sendCID(int id, QString name);  // Signal to send the user ID
    void initializeBoard();

private slots:
    void on_show_clicked();

    void on_notice_clicked();

private:
    Ui::dashboard *ui;

    int user_id;
    QString username;
    int c_id;
    QSqlDatabase db;

};

#endif // DASHBOARD_H
