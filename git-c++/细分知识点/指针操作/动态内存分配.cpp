#include <iostream>
using namespace std;
int main()
{
	//ƥ��ʹ�õ��﷨��malloc / free �� new / delete �� new[]/ delete[] 
	int* i = new int;//����4
	int* m = new int(3);//����4 ��ʼ��3
	int* n = new int[3];//����12 3*4

//�Ӷ���������������~() �������������ģ���delete����������ռ�ĺ���





	delete i;//����
	delete m;
	delete[] n;

	return 0;
}