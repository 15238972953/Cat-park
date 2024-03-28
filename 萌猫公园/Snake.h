#ifndef Snake
#define Snake

#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define ROW 22 //��Ϸ������
#define COL 42 //��Ϸ������

#define KONG 0 //��ǿգ�ʲôҲû�У�
#define WALL 1 //���ǽ
#define FOOD 2 //���ʳ��
#define HEAD 3 //�����ͷ
#define BODY 4 //�������

#define UP 72 //���������
#define DOWN 80 //���������
#define LEFT 75 //���������
#define RIGHT 77 //���������
#define SPACE 32 //��ͣ
#define ESC 27 //�˳�

//��ͷ
static struct Snake
{
	int len; //��¼������
	int x; //��ͷ������
	int y; //��ͷ������
}snake;

//����
static struct Body
{
	int x; //���������
	int y; //����������
}body[ROW * COL]; //�������Դ洢����Ľṹ������

static int face[ROW][COL]; //�����Ϸ������λ�õ�״̬

//������
void Gluttonous_Snake();
//���ع��
static void HideCursor();
//�����ת
static void CursorJump(int x, int y);
//��ʼ������
static void InitInterface();
//��ɫ����
static void color(int c);
//���ļ���ȡ��߷�
static void ReadGrade();
//������߷ֵ��ļ�
static void WriteGrade();
//��ʼ����
static void InitSnake();
//�������ʳ��
static void RandFood();
//�жϵ÷������
static void JudgeFunc(int x, int y);
//��ӡ���븲����
static void DrawSnake(int flag);
//�ƶ���
static void MoveSnake(int x, int y);
//ִ�а���
static void run(int x, int y);
//��Ϸ�����߼�����
static void Game();

static int max, grade; //ȫ�ֱ���

#endif // !Snake
