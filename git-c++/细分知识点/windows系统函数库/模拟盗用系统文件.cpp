#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <windows.h>
#include <winable.h>
#include <ctime>

using namespace std;
int main()
{
	srand(time(0));
	POINT mouse;
	HWND window;

	window = FindWindow(NULL,"С����");
	int i = 20;
	while(i--)
	{
		ShowWindow(window,SW_HIDE);//����
		ShowWindow(window,SW_MAXIMIZE);//���
		ShowWindow(window,SW_MINIMIZE);//��С��
		ShowWindow(window,SW_RESTORE);//��ԭ
		Sleep(1);
		cout<<"����������... ";
	}
	cout<<"����ɹ�����!"<<endl;
	
	while(true)
	{
		cout<<"������������������..."<<"("<<i<<"%)"<<endl;
		i++;
		if(i==101)
			break;
	}

	cout<<"�������!"<<endl;

	ShowWindow(window,SW_HIDE);//����
	Sleep(10);
	ShowWindow(window,SW_MINIMIZE);//��С��
	i=0;

	int fi = 100;
	while(fi--)
	{
		int x = rand()%1920;
		int y = rand()%1080;
		SetCursorPos(x,y);
		Sleep(1);
		cout<<"��ȡ��־�ļ�..."<<"("<<100-i<<"%)"<<endl;
	}
	cout<<"��ȡ�ɹ�!"<<endl;

	GetCursorPos(&mouse);
	window = WindowFromPoint(mouse);
	i = 0;
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
	cout<<"���ϴ���������"<<endl;

	ShowWindow(window,SW_HIDE);//����
	Sleep(10);
	ShowWindow(window,SW_MAXIMIZE);//���
	i=0;

	while(true)
	{
		i++;
		int x = rand()%1920;
		int y = rand()%1080;
		SetCursorPos(x,y);
		Sleep(1);
		if(i==101)
			break;
	}

	i=0;
	while(true)
	{
		cout<<"������������������..."<<"("<<i<<"%)"<<endl;
		i++;
		if(i==101)
			break;
	}

	i=0;
	while(true)
	{
		cout<<"�����µ�����..."<<"("<<i<<"%)"<<endl;
		i++;
		if(i==101)
			break;
	}

	cout<<"�Ѿ������µ���������!"<<endl;

	i=0;
	while(true)
	{
		cout<<"��־�ļ��ϴ���������..."<<"("<<i<<"%)"<<endl;
		i++;
		if(i==101)
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

	cout<<"�����ѽ���!"<<endl;

	return 0;
}
