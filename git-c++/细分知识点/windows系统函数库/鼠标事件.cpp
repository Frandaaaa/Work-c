#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <windows.h>
#include <ctime>

using namespace std;
int main()
{
	srand(time(0));
	POINT mouse;
	HWND window;

	int fi = 100;
	while(fi--)
	{
		int x = rand()%1920;
		int y = rand()%1080;
		SetCursorPos(x,y);
		Sleep(1);
		break;
	}

	GetCursorPos(&mouse);
	window = WindowFromPoint(mouse);
	int i = 0;
	while(true)
	{
		i++;
		ShowWindow(window,SW_HIDE);//����
		Sleep(200);
		ShowWindow(window,SW_MAXIMIZE);//���
		Sleep(200);
		ShowWindow(window,SW_MINIMIZE);//��С��
		Sleep(200);
		ShowWindow(window,SW_RESTORE);//��ԭ
		Sleep(200);
		if(i==2)
			break;
	}

	ShowWindow(window,SW_HIDE);//����
	Sleep(10);
	ShowWindow(window,SW_MINIMIZE);//��С��
	i=0;

	while(true)
	{
		i++;
		int x = rand()%1920;
		int y = rand()%1080;
		SetCursorPos(x,y);
		Sleep(1);
		cout<<"I love you for "<<i<<" times"<<endl;
		if(i==3000)
			break;
	}

	i=0;
	while(true)
	{
		i++;
		ShowWindow(window,SW_HIDE);//����
		Sleep(200);
		ShowWindow(window,SW_MAXIMIZE);//���
		Sleep(200);
		ShowWindow(window,SW_MINIMIZE);//��С��
		Sleep(200);
		ShowWindow(window,SW_RESTORE);//��ԭ
		Sleep(200);
		if(i==2)
			break;
	}

	cout<<"but ... I need nothing"<<endl;

	return 0;
}
