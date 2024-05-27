#ifndef MYLABEL_H
#define MYLABEL_H

#define whitestone -1
#define blackstone 1

#include <QLabel>
#include <QMouseEvent>
#include <QPainter>
#include <QMessageBox>
#include <QtSql>
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QSoundEffect>
#include <QFile>
#include <QDebug>

#include "sqlcommond.h"

class myLabel:public QLabel
{
    Q_OBJECT
public:
    myLabel(QWidget* perant = NULL);
    ~myLabel();
    void resizeEvent(QResizeEvent *event);

    void mousePressEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);
    void drawStarPoint(QPainter &painter, int row, int col, int gridSize);
    void drawStones(int row, int col);
    bool edgecheck(int x, int y);
    int countLiberty(int x, int y, std::vector<std::vector<bool>>& visited);
    bool countLiberty_s(int x, int y, std::vector<std::vector<bool>>& visited);
    bool isValid(int x, int y);
    void isCaptured(int x, int y);
    bool isSafe(int x, int y);
    void countTerritory(int &black_t, int &white_t);
    void writeIntoSQL(int x, int y, int color, int alive);
    void loadReplayData(const QString &tableName, int c_id);
    void updateBoardToStep(int step);

public slots:
    void setUserID(int id, QString name);
    void setPass();
    void initialization();
    void setRegret();
    void setFinish();
    void forward();
    void backward();
    void setReplayData(const QVector<QVector<int>> &data);
    void playSound();

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
    QVector<QVector<int>> replayData; // 用于存储棋盘复盘数据
    int currentStep; // 当前步数

    QSoundEffect *player;

};

#endif // MYLABEL_H
