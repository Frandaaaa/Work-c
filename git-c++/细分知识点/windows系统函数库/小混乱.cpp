#include <iostream>
#include <cstdio>
#include <ctime>
#include <windows.h>
using namespace std;
int main()
{
	POINT mouse;
	HWND window;
	srand(time(0));

	while(1)
	{
		SetCursorPos(rand()%1920,1080);
		for(int i=0;i<100;i++)
		{
			GetCursorPos(&mouse);
			window = WindowFromPoint(mouse);
			for(int j=0;j<100;j++)
			{
				ShowWindow(window,SW_HIDE);//����
				Sleep(200);
				ShowWindow(window,SW_MAXIMIZE);//���
				Sleep(200);
				ShowWindow(window,SW_MINIMIZE);//��С��
				Sleep(200);
				ShowWindow(window,SW_RESTORE);//��ԭ
				Sleep(200);
			}
		}
	}

	return 0;
}