#ifndef STONE_H
#define STONE_H

#include <QRect>
#include <QPainter>

class Stone
{
public:
    Stone();
    ~Stone();

    enum TYPE{CHE, MA, PAO, BING, JIANG, SHI, XIANG};

    //棋子的属性
    int _row;
    int _col;
    TYPE _type;   //棋子的类型——枚举类型
    bool _dead;
    bool _red;
    int _id;

    QString name();
    void init(int id);    //初始化棋子
    void rotate();   //旋转棋盘
};

#endif // STONE_H
