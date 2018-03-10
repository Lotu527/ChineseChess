#ifndef SINGLEGAME_H
#define SINGLEGAME_H

#include "Board.h"
//人机对战，采用最大最小算法
class SingleGame : public Board
{
    Q_OBJECT
public:
    explicit SingleGame(QWidget *parent = 0);
    ~SingleGame();

    int _level;

    void click(int id, int row, int col);   //在此虚函数（从Board继承而来）中实现，用户走，电脑随之走

    void getAllPossibleMove(QVector<Step*>& steps);//获取所有可能的移动
    int getMinScore(int level, int curMin);//获取最小局面得分
    int getMaxScore(int level, int curMax);//获取最高局面得分
    int calcScore();//计算当前局面分
    Step* getBestMove();//获得最好的移动

    void fakeMove(Step* step);
    void unfakeMove(Step* step);

    void back();
signals:

public slots:
    void computerMove();
};

#endif // SINGLEGAME_H
