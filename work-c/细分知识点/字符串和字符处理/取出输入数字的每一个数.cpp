#include <iostream>

using namespace std;
const int N = 10;
int main()
{
	int a;
	int b[N];
	cin>>a;

	int i = 1;
	//���ڲ�֪���������ֵľ��峤��
	b[0] = a % 10;
	while(a=a/10)//���ڽ����һ��ѭ��ʱ�Ѿ������˲�������ֻ����ѭ�������ȡ��λ
	{
		b[i] = a % 10;
		i++;
	}

	for(int j = 0; j < N ; j++)
	{
		cout<<b[j]<<" ";
	}

	return 0;
}