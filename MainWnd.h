#ifndef MAINWND_H
#define MAINWND_H

#include <QWidget>
#include "Board.h"
#include "CtrlPanel.h"
//此类为游戏主界面，根据选择游戏模式的不同初始化不同的游戏模式类
class MainWnd : public QWidget
{
    Q_OBJECT
public:
    explicit MainWnd(int gameType, QWidget *parent = 0);
    ~MainWnd();

    int _gameType;//游戏模式

signals:

public slots:
};

#endif // MAINWND_H
