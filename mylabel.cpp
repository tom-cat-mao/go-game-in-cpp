#include "mylabel.h"

myLabel::myLabel(QWidget* perant): QLabel(perant),judge(0)
{
    // 设置 MyLabel 控件自动调整大小
    setScaledContents(true);
    for(int i = 0; i  <19; i++)
    {
        for(int j = 0; j < 19; j++)
        {
            board[i][j] = 0;
        }
    }

}

myLabel::~myLabel()
{}

void myLabel::mousePressEvent(QMouseEvent *event)
{
    int x = event->x();
    int y = event->y();

    qDebug() << x << y;

    s_col = qRound(x / static_cast<qreal>(gridSize));
    s_row = qRound(y / static_cast<qreal>(gridSize));

    qDebug() << "Grid position: " << s_row << ", " << s_col;

    if(board[s_row][s_col] == 0)
    {
        if(judge == 0)
        {
            board[s_row][s_col] = 1;
            judge = 1;
        }
        else
        {
            board[s_row][s_col] = -1;
            judge = 0;
        }
        clicked = true;
    }

    update();
}

void myLabel::resizeEvent(QResizeEvent *event)
{
    QLabel::resizeEvent(event);

}

void myLabel::paintEvent(QPaintEvent *event)
{
    QLabel::paintEvent(event); // 调用基类的 paintEvent 函数

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing); // 抗锯齿

    int width = this->width();
    int height = this->height();

    painter.fillRect(rect(), QColorConstants::Svg::burlywood);

    QPen pen(Qt::black); // 创建一个黑色画笔
    pen.setWidth(2); // 设置画笔宽度为2像素
    painter.setPen(pen); // 应用画笔设置
    painter.drawRect(rect());

    // 绘制水平线
    for (int i = 0; i <= rows; i++)
    {
        painter.drawLine(0, i * gridSize, width, i * gridSize);
    }

    // 绘制垂直线
    for (int j = 0; j <= cols; j++)
    {
        painter.drawLine(j * gridSize, 0, j * gridSize, height);
    }

    // 绘制星位
    painter.setBrush(Qt::black); // 设置画刷颜色为黑色
    drawStarPoint(painter, 3, 3, gridSize); // 左上角
    drawStarPoint(painter, 9, 3, gridSize); // 上边中间
    drawStarPoint(painter, 15, 3, gridSize); // 右上角
    drawStarPoint(painter, 3, 9, gridSize); // 左边中间
    drawStarPoint(painter, 9, 9, gridSize); // 中心
    drawStarPoint(painter, 15, 9, gridSize); // 右边中间
    drawStarPoint(painter, 3, 15, gridSize); // 左下角
    drawStarPoint(painter, 9, 15, gridSize); // 下边中间
    drawStarPoint(painter, 15, 15, gridSize); // 右下角

    if(clicked)
    {
        drawStones(s_row, s_col);
        clicked = false;
    }

    // 根据棋盘状态绘制已下棋子
    for (int i = 0; i < 19; ++i)
    {
        for (int j = 0; j < 19; ++j)
        {
            if (board[i][j] != 0)
            { // 绘制黑子
                drawStones(i, j);
            }
        }
    }
}

void myLabel::drawStarPoint(QPainter &painter, int row, int col, int gridSize)
{
    int x = col * gridSize;
    int y = row * gridSize;
    int radius = gridSize / 15; // 星位的半径
    painter.drawEllipse(QPoint(x, y), radius, radius);
}

void myLabel::drawStones(int row, int col)
{

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing); // 抗锯齿

    if(board[row][col] == 1)
    {
        painter.setBrush(Qt::black);
    }
    else
    {
        painter.setBrush(Qt::white);
    }

    int x = col * gridSize;
    int y = row * gridSize;
    int radius = gridSize / 2.5; // 棋子的半径
    painter.drawEllipse(QPoint(x, y), radius, radius);
}
