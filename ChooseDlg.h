#ifndef ChooseDlg_H
#define ChooseDlg_H

#include <QDialog>
#include <QPushButton>
//这个类是初始的游戏模式选择界面
class ChooseDlg : public QDialog
{
    Q_OBJECT
public:
    explicit ChooseDlg(QWidget *parent = 0);
    ~ChooseDlg();

    QPushButton* _buttons[2];//游戏模式按钮数组
    int _selected;//选择的游戏模式
signals:

public slots:
    void slotClicked();//按钮点击时触发
};

#endif // ChooseDlg_H
