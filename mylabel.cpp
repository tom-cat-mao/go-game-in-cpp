#include "mylabel.h"
#include <vector>
#include <stack>
#include <utility>

myLabel::myLabel(QWidget* perant): QLabel(perant),judge(1)
{
    // 设置 MyLabel 控件自动调整大小
    setScaledContents(true);

}

myLabel::~myLabel()
{}

void myLabel::mousePressEvent(QMouseEvent *event)
{
    if(!connectToSQL(db))
    {
        return;
    }

    if(!createTable_r(username, db))
    {
        return;
    }

    int x = event->x() - 45;
    int y = event->y() - 45;

    qDebug() << x << y;

    if(edgecheck(x, y))
    {
        s_col = qRound(x / static_cast<qreal>(gridSize));
        s_row = qRound(y / static_cast<qreal>(gridSize));

        qDebug() << "Grid position: " << s_row << ", " << s_col;

        if(board[s_row][s_col] == 0)
        {
            if(judge == 1)
            {
                board[s_row][s_col] = blackstone;

                isCaptured(s_row, s_col);
                if(!isSafe(s_row, s_col))
                {
                    board[s_row][s_col] = 0;
                    qDebug() << "you can't place there";
                    return;
                }

                judge = -1;
            }
            else
            {
                board[s_row][s_col] = whitestone;

                isCaptured(s_row, s_col);
                if(!isSafe(s_row, s_col))
                {
                    board[s_row][s_col] = 0;
                    qDebug() << "you can't place there";
                    return;
                }

                judge = 1;
            }
            clicked = true;

            insertIntoTable(s_row, s_col, board[s_row][s_col], c_id, 1, username, db);
        }

        update();
    }
    else
    {
        qDebug() << "out of edge!";
    }

}

void myLabel::resizeEvent(QResizeEvent *event)
{
    QLabel::resizeEvent(event);

}

//画棋盘
void myLabel::paintEvent(QPaintEvent *event)
{
    QLabel::paintEvent(event); // 调用基类的 paintEvent 函数

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing); // 抗锯齿

    int width = this->width() - space;
    int height = this->height() - space;

    painter.fillRect(rect(), QColorConstants::Svg::burlywood);

    QPen pen(Qt::black); // 创建一个黑色画笔
    pen.setWidth(2); // 设置画笔宽度为2像素
    painter.setPen(pen); // 应用画笔设置
    painter.drawRect(rect());

    // 绘制水平线
    for (int i = 0; i <= rows; i++)
    {
        painter.drawLine(space, i * gridSize, width, i * gridSize);
    }

    // 绘制垂直线
    for (int j = 0; j <= cols; j++)
    {
        painter.drawLine(j * gridSize, space, j * gridSize, height);
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

//画星位
void myLabel::drawStarPoint(QPainter &painter, int row, int col, int gridSize)
{
    int x = col * gridSize + space;
    int y = row * gridSize + space;
    int radius = gridSize / 15; // 星位的半径
    painter.drawEllipse(QPoint(x, y), radius, radius);
}

//画棋子
void myLabel::drawStones(int row, int col)
{

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing); // 抗锯齿

    if(board[row][col] == blackstone)
    {
        painter.setBrush(Qt::black);
    }
    else
    {
        painter.setBrush(Qt::white);
    }

    int x = col * gridSize + 45;
    int y = row * gridSize + 45;
    int radius = gridSize / 2.5; // 棋子的半径
    painter.drawEllipse(QPoint(x, y), radius, radius);
}

//边缘检查
bool myLabel::edgecheck(int x, int y)
{
    int w = this->width() - 1.5 * space;
    int h = this->height() - 1.5 * space;

    if(x >= -space/2 && x <= w && y >= -space/2 && y <= h)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void myLabel::setUserID(int id, QString name)
{
    c_id = id;
    username = name;
    qDebug() << c_id << " " << username;
}

void myLabel::setPass()
{
    judge = -judge;
}

bool myLabel::isValid(int x, int y)
{
    return x >= 0 && x < 19 && y >= 0 && y < 19;
}

int myLabel::countLiberty(int x, int y, std::vector<std::vector<bool>>& visited)
{
    std::vector<std::pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    std::stack<std::pair<int, int>> s;
    s.push({x, y});
    int liberties = 0;
    int stoneColor = board[x][y];
    std::vector<std::pair<int, int>> connected;

    while (!s.empty())
    {
        auto [cx, cy] = s.top();
        s.pop();
        if (!isValid(cx, cy) || visited[cx][cy])
        {
            continue;
        }
        visited[cx][cy] = true;
        connected.push_back({cx, cy});

        for (auto [dx, dy] : directions)
        {
            int nx = cx + dx;
            int ny = cy + dy;
            if (isValid(nx, ny))
            {
                if (board[nx][ny] == 0)
                {
                    liberties++;
                }
                else if (board[nx][ny] == stoneColor && !visited[nx][ny])
                {
                    s.push({nx, ny});
                }
            }
        }
    }

    // 如果没有气，则标记为死子
    if (liberties == 0)
    {
        for (auto [cx, cy] : connected)
        {
            board[cx][cy] = 0;

            insertIntoTable(s_row, s_col, board[s_row][s_col], c_id, 0, username, db);
        }
    }

    return liberties;
}

bool myLabel::countLiberty_s(int x, int y, std::vector<std::vector<bool>>& visited)
{
    std::vector<std::pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    std::stack<std::pair<int, int>> s;
    s.push({x, y});

    int stoneColor = board[x][y];
    std::vector<std::pair<int, int>> connected;

    while (!s.empty())
    {
        auto [cx, cy] = s.top();
        s.pop();
        if (!isValid(cx, cy) || visited[cx][cy])
        {
            continue;
        }
        visited[cx][cy] = true;
        connected.push_back({cx, cy});

        for (auto [dx, dy] : directions)
        {
            int nx = cx + dx;
            int ny = cy + dy;
            if (isValid(nx, ny))
            {
                if (board[nx][ny] == 0)
                {
                    return true;
                }
                else if (board[nx][ny] == stoneColor && !visited[nx][ny])
                {
                    s.push({nx, ny});
                }
            }
        }
    }

    return false;
}

void myLabel::isCaptured(int x, int y)
{
    std::vector<std::pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    std::vector<std::vector<bool>> visited(19, std::vector<bool>(19, false));

    for( auto [dx, dy] : directions)
    {
        int nx = x + dx;
        int ny = y + dy;
        if (board[nx][ny] != 0 && isValid(nx, ny) && !visited[nx][ny] && board[nx][ny] != board[x][y])
        {
            countLiberty(nx, ny, visited);
        }
    }
}

bool myLabel::isSafe(int x, int y)
{
    std::vector<std::vector<bool>> visited(19, std::vector<bool>(19, false));

    if(!countLiberty_s(x, y, visited))
    {
        return false;
    }

    return true;
}

void myLabel::initialization()
{
    for(int i = 0; i  <19; i++)
    {
        for(int j = 0; j < 19; j++)
        {
            board[i][j] = 0;
        }
    }

    judge = 1;

    update();
}

void myLabel::setRegret()
{
    if(board[s_row][s_col] != 0)
    {
        board[s_row][s_col] = 0;
        judge = -judge;
        insertIntoTable(s_row, s_col, board[s_row][s_col], c_id, 0, username, db);
    }
    update();
}
