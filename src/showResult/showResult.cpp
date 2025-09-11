#include    "showResult.h"
#include    <easyx.h>
#include <graphics.h>

void ShowResult::drawResult()
{
    initgraph(800, 600); // 初始化绘图窗口，宽800，高600
    setbkcolor(WHITE); // 设置背景色为白色
    cleardevice(); // 清除绘图设备

    // 画一个红色的圆
    setlinecolor(RED); // 设置线条颜色为红色
    circle(400, 300, 100); // 画一个圆，圆心在(400,300)，半径为100

    // 画一个蓝色的矩形
    setlinecolor(BLUE); // 设置线条颜色为蓝色
    rectangle(300, 200, 500, 400); // 画一个矩形，左上角在(300,200)，右下角在(500,400)

    // 显示文本
    settextcolor(BLACK); // 设置文本颜色为黑色
    outtextxy(350, 550, "Hello EasyX!"); // 在(350,550)位置显示文本
    
    system("pause");
    closegraph();
    // getch(); // 等待用户按键
    // closegraph(); // 关闭绘图窗口
};