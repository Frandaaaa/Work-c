#include <iostream>
#include <windows.h>
#include <cstdio>
#include <ctime>

using namespace std;

int main()
{
	HWND windows;
	windows = FindWindow(NULL,"1.txt - ���±�");
	SendMessage(windows,WM_CLOSE,0,0);//�ر�
	return 0;
}
