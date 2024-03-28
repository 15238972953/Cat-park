#pragma once
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define ROW 29 //��Ϸ������
#define COL 20 //��Ϸ������

#define DOWN 80 //���������
#define LEFT 75 //���������
#define RIGHT 77 //���������

#define SPACE 32 //�ո��
#define ESC 27 //Esc��

static struct Face
{
	int data[ROW][COL + 10]; //���ڱ��ָ��λ���Ƿ��з��飨1Ϊ�У�0Ϊ�ޣ�
	int color[ROW][COL + 10]; //���ڼ�¼ָ��λ�õķ�����ɫ����
}face;

static struct Block
{
	int space[4][4];
}block[7][4]; //���ڴ洢7�ֻ�����״����ĸ��Ե�4����̬����Ϣ����28��

//���ع��
static void HideCursor();
//�����ת
static void CursorJump(int x, int y);
//��ʼ������
static void InitInterface(int number);
//��ʼ��������Ϣ
static void InitBlockInfo();
//��ɫ����
static void color(int num);
//��������
static void DrawBlock(int shape, int form, int x, int y);
//�ո񸲸�
static void DrawSpace(int shape, int form, int x, int y);
//�Ϸ����ж�
static int IsLegal(int shape, int form, int x, int y);
//�жϵ÷������
static int JudeFunc();
//��Ϸ�����߼�����
static void StartGame();
//���ļ���ȡ��߷�
static void ReadGrade();
//������߷ֵ��ļ�
static void WriteGrade();
//������
void Tetris(int number);
static int max, grade; //ȫ�ֱ���