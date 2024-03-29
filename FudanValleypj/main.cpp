﻿#include "StartMenu.h"
#include "Farm.h"
#include "Window.h"
#include <QDesktopWidget>
#include <QApplication>
#include <QTextCodec>


int main(int argc, char *argv[])
{
    QTextCodec::setCodecForLocale(QTextCodec::codecForLocale());

    QApplication a(argc, argv);
    //一般如果建立在栈上不能运行，建立在堆上就能运行时，出现问题的原因是：变量没有初始化或者出现访问越界的情况
    Window s;
    s.move((a.desktop()->width() - s.width()) / 2, (a.desktop()->height() - 702) / 2);//移动窗口到屏幕中央
    s.show();
    return a.exec();
}
