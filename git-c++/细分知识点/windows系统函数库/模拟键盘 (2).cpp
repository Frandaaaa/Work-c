#include <iostream>
#include <windows.h>
#include <cstdio>
#include <ctime>
using namespace std;
int main()
{
	POINT mouse;//��ȡ����λ��
	HWND window;
	while(1)
	{
		GetCursorPos(&mouse);//��ȡ����λ��
		window = WindowFromPoint(mouse);//��ȡ���λ�õľ��
		SendMessage(window,WM_CHAR,WPARAM('a'),0);//ģ�����
		Sleep(200);
	}
	return 0;
}