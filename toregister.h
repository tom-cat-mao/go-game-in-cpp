#ifndef TOREGISTER_H
#define TOREGISTER_H

#include "qsqldatabase.h"
#include <QWidget>
#include<QMessageBox>
#include<QtSql>

namespace Ui {
class toRegister;
}

class toRegister : public QWidget
{
    Q_OBJECT

public:
    explicit toRegister(QWidget *parent = nullptr);
    ~toRegister();

signals:
    void back();

private slots:
    void on_register_1_clicked();

    void on_return_2_clicked();

private:
    Ui::toRegister *ui;

    QSqlDatabase db;

};

#endif // TOREGISTER_H
