#ifndef MAINWND_H
#define MAINWND_H

#include <QWidget>
#include "Board.h"
#include "CtrlPanel.h"
class MainWnd : public QWidget
{
    Q_OBJECT
public:
    explicit MainWnd(QWidget *parent = 0);
    ~MainWnd();


signals:

public slots:
};

#endif // MAINWND_H
