#include"initial.h"

void ShowInterface() {
#pragma warning (disable:4996) //��������
	system("title ��ʼ����"); //����cmd���ڵ�����
	string str = "mode con lines =" + to_string(Windows_Lines) + " cols=" + to_string(Windows_Cols);
	system(str.c_str()); //����cmd���ڵĴ�С
	ShowExplain();
	CursorJump(Windows_Lines/4, Windows_Cols/4);
	printf("��������Ϸ������");
	scanf("%d", &number);
	printf("����������Ϸ...");
}

//�����ת
static void CursorJump(int x, int y)
{
	COORD pos; //������λ�õĽṹ�����
	pos.X = x; //����������
	pos.Y = y; //����������
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE); //��ȡ����̨���
	SetConsoleCursorPosition(handle, pos); //���ù��λ��
}

static void ShowExplain() {
	CursorJump(Windows_Lines / 4, Windows_Cols / 4);
	printf("��Ϸ˵��\n");
	printf("  ����Ϸ�ɶ���Ҳ�ɵ����棬��ѡ����Ϸ������Ȼ�󼴿ɽ�����Ϸ��\n");
	printf("��Enter��������һ����");
	cin.get(); //���س���������һ��
	system("cls"); //�����Ļ
}