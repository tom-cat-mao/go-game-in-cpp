#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    this->d = new dashboard;
    this->r = new toRegister;

    connect(this->r,SIGNAL(back()),this,SLOT(comeBackToPrev()));
    connect(this, &MainWindow::sendUserID, d, &dashboard::setUserID);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_login_clicked()
{
    if(!connectToSQL(db))
    {
        return;
    }

    if(!createTable_u(db))
    {
        return;
    }

    QSqlQuery query(db);

    QString username = ui->username->text();
    QString password = ui->password->text();
    qDebug() << username << password;

    if(username == "")
    {
        QMessageBox::information(this,"warning","please enter your username");
        ui->username->setFocus();
    }
    else
    {
        if(password == "")
        {
            QMessageBox::information(this,"warning","please enter your password");
            ui->password->setFocus();
        }
        else
        {

            QString command_1 = "SELECT username FROM users WHERE username = '"+ username +"'";
            if(query.exec(command_1))
            {
                if(query.next())
                {
                    QString command_2 = "SELECT * FROM users WHERE username = '" + username + "' AND password = '" + password + "'";
                    if (query.exec(command_2))
                    {
                        if (query.next()) // 移动到结果集中的第一行
                        {
                            QString username = query.value("username").toString();
                            QString password = query.value("password").toString();
                            int id = query.value("id").toInt();
                            emit sendUserID(id, username);

                            qDebug() <<"id:"<< id << "Username:" << username << ", Password:" << password;

                            //QMessageBox::information(this, "Login success.", "You have successfully logged in!");
                            db.close();

                            this->close();
                            d->show();
                        }
                        else
                        {
                            QMessageBox::information(this, "Login failed.", "Login failed. Wrong password");
                        }
                    }
                    else
                    {
                        qDebug() << "Error executing query:" << query.lastError().text();
                        return; // or handle the error appropriately
                    }

                }
                else
                {
                    QMessageBox::information(this, "Login failed.", "Wrong username");
                }
            }
            else
            {
                qDebug() << "Error executing query:" << query.lastError().text();
                return; // or handle the error appropriately
            }
        }
    }

    db.close();

}


void MainWindow::on_register_2_clicked()
{
    this->close();
    r->show();
}

void MainWindow::comeBackToPrev()
{
    this->r->close();
    this->show();
}
