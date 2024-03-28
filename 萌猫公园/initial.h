#ifndef initial
#define initial

#include <iostream>
#include <string>
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
using namespace std;

const int Windows_Lines = 35; //界面高度
const int Windows_Cols = 100; //界面宽度

//显示初始界面
void ShowInterface();
//光标跳转
static void CursorJump(int x, int y);
//显示游戏说明
static void ShowExplain();
int number;

#endif // !initial
