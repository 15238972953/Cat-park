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

const int Windows_Lines = 35; //����߶�
const int Windows_Cols = 100; //������

//��ʾ��ʼ����
void ShowInterface();
//�����ת
static void CursorJump(int x, int y);
//��ʾ��Ϸ˵��
static void ShowExplain();
int number;

#endif // !initial
