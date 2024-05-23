#ifndef SQLCOMMOND_H
#define SQLCOMMOND_H

#include <QtSql>

bool connectToSQL(QSqlDatabase &db);
bool createTable_u(QSqlDatabase &db);
bool createTable_c(QString s, QSqlDatabase &db);
bool createTable_r(QString s, QSqlDatabase &db);
bool insertIntoTable(int x, int y, int stoneColor, int c_id, int isLife, QString tableName, QSqlDatabase &db);
bool updateWinner(int c_id, QString winner, QString username, QSqlDatabase &db);

#endif // SQLCOMMOND_H
