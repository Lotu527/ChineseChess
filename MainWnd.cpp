#include "MainWnd.h"
#include <QHBoxLayout>
#include "MultiGame.h"

MainWnd::MainWnd(QWidget *parent) : QWidget(parent)
{

    MultiGame* game = new MultiGame;
    CtrlPanel* panel = new CtrlPanel;

    QHBoxLayout* hLay = new QHBoxLayout(this);
    hLay->addWidget(game, 1);
    hLay->addWidget(panel);
    connect(panel, SIGNAL(sigBack()), game, SLOT(slotBack()));
}

MainWnd::~MainWnd()
{

}

