#ifndef MULTIGAME_H
#define MULTIGAME_H

#include "Board.h"
//此类为双人对战类
class MultiGame : public Board
{
    Q_OBJECT
public:
    explicit MultiGame(QWidget *parent = 0);
    ~MultiGame();

signals:

public slots:
};

#endif // MULTIGAME_H
