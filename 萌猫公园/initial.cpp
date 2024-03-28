#include"initial.h"

void ShowInterface() {
#pragma warning (disable:4996) //消除警告
	system("title 初始界面"); //设置cmd窗口的名字
	string str = "mode con lines =" + to_string(Windows_Lines) + " cols=" + to_string(Windows_Cols);
	system(str.c_str()); //设置cmd窗口的大小
	ShowExplain();
	CursorJump(Windows_Lines/4, Windows_Cols/4);
	printf("请输入游戏人数：");
	scanf("%d", &number);
	printf("即将进入游戏...");
}

//光标跳转
static void CursorJump(int x, int y)
{
	COORD pos; //定义光标位置的结构体变量
	pos.X = x; //横坐标设置
	pos.Y = y; //纵坐标设置
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE); //获取控制台句柄
	SetConsoleCursorPosition(handle, pos); //设置光标位置
}

static void ShowExplain() {
	CursorJump(Windows_Lines / 4, Windows_Cols / 4);
	printf("游戏说明\n");
	printf("  本游戏可多人也可单人玩，先选择游戏人数，然后即可进入游戏。\n");
	printf("按Enter键进行下一步。");
	cin.get(); //按回车键进入下一步
	system("cls"); //清空屏幕
}