#include <iostream>
using namespace std;

int main()
{
	int m, n;
	cin>>m>>n;

	int k, temp, sub;
	if(n>m)
	{
		temp = n;
		n = m;
		m = temp;	
	}
	sub = n * m;
	while(n!=0)
	{
		k = m % n;//����
		m = n;
		n = k;//������Ϊ����������
	}
	cout<<m<<endl;//���Լ��
	cout<<sub/m<<endl;//��С���������˻��������Լ��

	return 0;
}
