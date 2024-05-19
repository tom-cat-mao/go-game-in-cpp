#ifndef MYLABEL_H
#define MYLABEL_H

#define whitestone -1
#define blackstone 1

#include <QLabel>
#include <QMouseEvent>
#include <QPainter>

#include <QtSql>

#include "sqlcommond.h"

class myLabel:public QLabel
{
    Q_OBJECT
public:
    myLabel(QWidget* perant = NULL);
    ~myLabel();
    void resizeEvent(QResizeEvent *event);

protected:
    void mousePressEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);
    void drawStarPoint(QPainter &painter, int row, int col, int gridSize);
    void drawStones(int row, int col);
    bool edgecheck(int x, int y);
    int countLiberty(int x, int y, std::vector<std::vector<bool>>& visited);
    int countLiberty_s(int x, int y, std::vector<std::vector<bool>>& visited);
    bool isValid(int x, int y);
    void isCaptured(int x, int y);
    bool isSafe(int x, int y);
    void writeIntoSQL(int x, int y, int color, int alive);

public slots:
    void setUserID(int id, QString name);
    void setPass();
    void initialization();


private:
    int gridSize = 45; // 棋盘格子大小
    int space = 45;
    int rows = 19;
    int cols = 19;
    bool clicked = false;
    int s_row;
    int s_col;
    int board[19][19];
    int judge;

    int c_id;
    QString username;

    QSqlDatabase db;

};

#endif // MYLABEL_H
