#include <iostream>

using namespace std;

int main()
{
	int list[6] = {0,1,2,3,4,5};
	int* p = list;//ָ��洢������ĵ�ַ
	//�������Ѿ�����������ĵ�ַ
	//�ȼ���int* p = &list[0];

	cout<<list<<endl;
	//�������Ѿ������������ָ��
	cout<<list[1]<<endl;

	cout<<*(list)<<endl;
	cout<<*(p)<<endl;
	cout<<p[2]<<endl;

	//ֱ�ӰѺ�����ַ������ַ���������
	char* const pCity = "Dallas";
	cout<<pCity<<endl;
	cout<<*pCity<<endl;
	cout<<*(pCity+1)<<endl;

	char* city = "Dallas";
	cout<<city[0]<<endl;
	
	char* cities[]={"Dallas","Atlanta","Houston"};
	cout<<cities[0]<<endl;
	cout<<cities[0][0]<<endl;

	return 0;
}