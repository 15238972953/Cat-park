#pragma once
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define ROW 29 //游戏区行数
#define COL 20 //游戏区列数

#define DOWN 80 //方向键：下
#define LEFT 75 //方向键：左
#define RIGHT 77 //方向键：右

#define SPACE 32 //空格键
#define ESC 27 //Esc键

static struct Face
{
	int data[ROW][COL + 10]; //用于标记指定位置是否有方块（1为有，0为无）
	int color[ROW][COL + 10]; //用于记录指定位置的方块颜色编码
}face;

static struct Block
{
	int space[4][4];
}block[7][4]; //用于存储7种基本形状方块的各自的4种形态的信息，共28种

//隐藏光标
static void HideCursor();
//光标跳转
static void CursorJump(int x, int y);
//初始化界面
static void InitInterface(int number);
//初始化方块信息
static void InitBlockInfo();
//颜色设置
static void color(int num);
//画出方块
static void DrawBlock(int shape, int form, int x, int y);
//空格覆盖
static void DrawSpace(int shape, int form, int x, int y);
//合法性判断
static int IsLegal(int shape, int form, int x, int y);
//判断得分与结束
static int JudeFunc();
//游戏主体逻辑函数
static void StartGame();
//从文件读取最高分
static void ReadGrade();
//更新最高分到文件
static void WriteGrade();
//主函数
void Tetris(int number);
static int max, grade; //全局变量