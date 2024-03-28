#ifndef Snake
#define Snake

#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define ROW 22 //游戏区行数
#define COL 42 //游戏区列数

#define KONG 0 //标记空（什么也没有）
#define WALL 1 //标记墙
#define FOOD 2 //标记食物
#define HEAD 3 //标记蛇头
#define BODY 4 //标记蛇身

#define UP 72 //方向键：上
#define DOWN 80 //方向键：下
#define LEFT 75 //方向键：左
#define RIGHT 77 //方向键：右
#define SPACE 32 //暂停
#define ESC 27 //退出

//蛇头
static struct Snake
{
	int len; //记录蛇身长度
	int x; //蛇头横坐标
	int y; //蛇头纵坐标
}snake;

//蛇身
static struct Body
{
	int x; //蛇身横坐标
	int y; //蛇身纵坐标
}body[ROW * COL]; //开辟足以存储蛇身的结构体数组

static int face[ROW][COL]; //标记游戏区各个位置的状态

//主函数
void Gluttonous_Snake();
//隐藏光标
static void HideCursor();
//光标跳转
static void CursorJump(int x, int y);
//初始化界面
static void InitInterface();
//颜色设置
static void color(int c);
//从文件读取最高分
static void ReadGrade();
//更新最高分到文件
static void WriteGrade();
//初始化蛇
static void InitSnake();
//随机生成食物
static void RandFood();
//判断得分与结束
static void JudgeFunc(int x, int y);
//打印蛇与覆盖蛇
static void DrawSnake(int flag);
//移动蛇
static void MoveSnake(int x, int y);
//执行按键
static void run(int x, int y);
//游戏主体逻辑函数
static void Game();

static int max, grade; //全局变量

#endif // !Snake
