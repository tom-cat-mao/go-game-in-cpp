#ifndef MYLABEL_H
#define MYLABEL_H

#define whitestone -1
#define blackstone 1

#include <QLabel>
#include <QMouseEvent>
#include <QPainter>

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

private:
    int gridSize = 50; // 棋盘格子大小
    int rows = 19;
    int cols = 19;
    bool clicked = false;
    int s_row;
    int s_col;
    int board[19][19];
    int judge;

};

#endif // MYLABEL_H
