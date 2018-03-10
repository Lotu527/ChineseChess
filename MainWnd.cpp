#include "MainWnd.h"
#include <QHBoxLayout>
#include "SingleGame.h"
#include "MultiGame.h"

MainWnd::MainWnd(int gameType, QWidget *parent) : QWidget(parent)
{
    _gameType = gameType;   //游戏类型

    if(_gameType == 0)      //人机对战
    {
        //SingleGame
        SingleGame* game = new SingleGame;  //游戏部分——棋盘
        CtrlPanel* panel = new CtrlPanel;   //控制部分——悔棋

        QHBoxLayout* hLay = new QHBoxLayout(this);
        hLay->addWidget(game, 1);
        hLay->addWidget(panel);

        connect(panel, SIGNAL(sigBack()), game, SLOT(slotBack()));
    }
    else if(_gameType == 1)  //双人游戏
    {
        //MultiGame
        MultiGame* game = new MultiGame;
        CtrlPanel* panel = new CtrlPanel;

        QHBoxLayout* hLay = new QHBoxLayout(this);
        hLay->addWidget(game, 1);
        hLay->addWidget(panel);
        connect(panel, SIGNAL(sigBack()), game, SLOT(slotBack()));
    }
}

MainWnd::~MainWnd()
{

}

