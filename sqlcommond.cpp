#include "sqlcommond.h"

bool connectToSQL(QSqlDatabase &db)
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("test.db");

    if(!db.open())
    {
        qDebug() << "Error: Unable to open database" << db.lastError().text();
        return false;
    }

    return true;
}

bool createTable_u(QSqlDatabase &db)
{
    QSqlQuery query(db);

    QString create = "CREATE TABLE IF NOT EXISTS users("
                     "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                     "username TEXT UNIQUE NOT NULL,"
                     "password TEXT NOT NULL,"
                     "phone TEXT NOT NULL)";

    if (!query.exec(create))
    {
        qDebug() << "Error: Could not create table.";
        qDebug() << query.lastError();
        return false;
    }

    return true;
}

bool createTable_c(QString s, QSqlDatabase &db)
{
    QSqlQuery query(db);

    QString tableName = s + "_c";
    QString createTableQuery = "CREATE TABLE IF NOT EXISTS " + tableName + " ("
                                "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                                "user_id INTEGER,"
                                "winner TEXT,"
                                "c_time DATETIME DEFAULT CURRENT_TIMESTAMP,"
                                "FOREIGN KEY (user_id) REFERENCES users(id)"
                                ")";

    if (!query.exec(createTableQuery))
    {
        qDebug() << "Error: Could not create table.";
        qDebug() << query.lastError();
        return false;
    }

    return true;
}

bool createTable_r(QString s, QSqlDatabase &db)
{
    QSqlQuery query(db);

    QString tableName = s;
    QString createTableQuery = "CREATE TABLE IF NOT EXISTS " + tableName + " ("
                                "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                                "c_id INTEGER,"
                                "x INTEGER NOT NULL,"
                                "y INTEGER NOT NULL,"
                                "color INTEGER NOT NULL,"
                                "alive INTEGER NOT NULL DEFAULT 1,"
                                "event_t DATETIME DEFAULT CURRENT_TIMESTAMP,"
                                "FOREIGN KEY (c_id) REFERENCES compete(id)"
                                ")";

    if (!query.exec(createTableQuery))
    {
        qDebug() << "Error: Could not create table.";
        qDebug() << query.lastError();
        return false;
    }

    return true;
}

bool insertIntoTable(int x, int y, int stoneColor, int c_id, int isLife, QString tableName, QSqlDatabase &db)
{
    QSqlQuery query(db);

    // Prepare the SQL query with placeholders
    query.prepare("INSERT INTO " + tableName + " (c_id, x, y, color, alive) VALUES (:c_id, :x, :y, :color, :alive)");

    // Bind values to the placeholders
    query.bindValue(":c_id", c_id);
    query.bindValue(":x", x);
    query.bindValue(":y", y);
    query.bindValue(":color", stoneColor);
    query.bindValue(":alive", isLife);

    // Execute the query
    if (!query.exec())
    {
        qDebug() << "Error inserting into table: " << query.lastError();
        return false;
    }

    return true;

}

bool updateWinner(int c_id, QString winner, QString username, QSqlDatabase &db)
{
    QSqlQuery query(db);

    QString tableName = username + "_c";

    query.prepare("UPDATE " + tableName + " SET winner = :winner WHERE id = :id");
    query.bindValue(":winner", winner);
    query.bindValue(":id", c_id);

    // 执行查询并返回结果
    if (!query.exec())
    {
        qDebug() << "Update failed:" << query.lastError();
        return false;
    }

    return true;
}
