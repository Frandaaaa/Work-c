#include <windows.h>
#include <iostream>
#include <cstdio>
#include <ctime>

using namespace std;
int main()
{
	HWND window;
	window = FindWindow(NULL,"Debug");
	int i = 10;
	while(i--)
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

	return 0;
}