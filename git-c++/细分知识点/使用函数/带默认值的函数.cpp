#include <iostream>

using namespace std;

//��Ĭ�ϲ������βα��������β��б�����ұߣ���ϵĴ����Ǵ�������
//���ܼ��Ū

//������ǰ���ڶ��庯����ʱ�����Ĭ��ֵ��ԭ��������ǰ����ԭ��������ʱ�����Ĭ��ֵ

int addition(int x = 1, int y = 2);
int main()
{
	int a = 2,
		b = 6;

	cout<<addition(a, b)<<endl;
	cout<<addition(a)<<endl;
	cout<<addition(b)<<endl;
	cout<<addition()<<endl;
	
	return 0;
}

int addition(int x, int y)
{
	return x+y;
}