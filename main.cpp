#include <QApplication>
#include "MainWnd.h"
#include <QTime>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    MainWnd wnd;
    wnd.show();

    return app.exec(); //进入消息循环，等待用户输入
}
