#include <iostream>

using namespace std;

int main()
{
	int val1 = 9,
		val2 = 3;
	auto val = val1 + val2;

	//ϣ��ʹ��ĳһ�����ʽ�ĳ�ʼֵ���ǲ�ϣ���ǳ�ʼֵ����
	decltype(i) j = 3;//����3�ǳ�ʼֵint���ͣ�����j��������i����һ��