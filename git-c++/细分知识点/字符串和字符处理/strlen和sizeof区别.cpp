/*
	strlen�Ǻ�����ֻ�����ַ�����Ϊ�����������Ǽ��㵽'\0'֮ǰ����
	sizeof �Ǳ����ʱ����Ѿ��������������ˣ�ָ����������ռ�ռ���ֽ���
*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	int a(12);
	cout<<"a="<<a<<endl;

/*	int b{12};
	cout<<"b="<<b<<endl;
*/
	char m[] = "opq";
	char n[] = {'o','p','q'};
	int s[] = {'o','p','q'};
	cout<<"size of m :"<<sizeof(m)<<endl;//4 ����������
	cout<<"size of n :"<<sizeof(n)<<endl;//3 ����
	cout<<"size of s :"<<sizeof(s)<<endl;//12 һ������4
	cout<<"len of m :"<<strlen(m)<<endl;//3 �ַ�������
	cout<<"len of n :"<<strlen(n)<<endl;//12 �����ֵ�ͱ������й�
	cout<<"change of s :"<<(int)sizeof(s)<<endl;//12 �����ڴ�����ռ�ĳ��ȣ�3*4

	return 0;
}
