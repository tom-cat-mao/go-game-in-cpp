#include "toregister.h"
#include "ui_toregister.h"

toRegister::toRegister(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::toRegister)
{
    ui->setupUi(this);

}

toRegister::~toRegister()
{
    delete ui;
}

void toRegister::on_register_1_clicked()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("test.db");

    if(!db.open())
    {
        qDebug() << "Error: Unable to open database" << db.lastError().text();
        return;
    }

    QString username = ui->username->text().trimmed();
    QString password = ui->password->text();
    QString phone = ui->phone->text().trimmed();

    if (username.isEmpty() || password.isEmpty() || phone.isEmpty())
    {
        QMessageBox::information(this, "Register failed.", "Please fill in all fields.");
        return;
    }

    // Check if username already exists
    QSqlQuery query(db);
    query.prepare("SELECT * FROM users WHERE username = ?");
    query.addBindValue(username);
    if (!query.exec())
    {
        qDebug() << "Error executing query:" << query.lastError().text();
        QMessageBox::critical(this, "Error", "Error executing query.");
        db.close();
        return;
    }

    if (query.next())
    {
        QMessageBox::information(this, "Register failed.", "Username already exists.");
        db.close();
        return;
    }

    // Insert new user
    query.prepare("INSERT INTO users (username, password, phone) VALUES (?, ?, ?)");
    query.addBindValue(username);
    query.addBindValue(password);
    query.addBindValue(phone);
    if (!query.exec())
    {
        qDebug() << "Error executing query:" << query.lastError().text();
        QMessageBox::critical(this, "Error", "Error registering user.");
        db.close();
        return;
    }

    // User registration successful
    db.close();
    emit this->back();
    qDebug() << "User added successfully!";

}

