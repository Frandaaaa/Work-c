#include <iostream>

using namespace std;
int judge(int k);

int main()
{
	for(int i = 2; i <= 1000; i++)
	{
		if(judge(i))
			cout<<i<<" ";
	}

	return 0;
}

int judge(int k)
{
	int s = 0;
	for(int j = 1; j <= k/2 ; j++)//ʵ���ϴ�2��ʼ�㣬��1Ҳ������
	{
		if(k%j == 0)//��˼�룺��1������һ��ö�ٳ�ֵ�ж�
			s= s + j;
	}
	if(s==k)
		return 1;
	else
		return 0;
}