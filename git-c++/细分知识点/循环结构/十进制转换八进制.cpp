#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin>>n;

	//content
	int num[10];
    num[0] = n % 8;
	int count = 0;
	int i = 1;
	while(n>8)
	{
		//��Ĵ���Ӱ����λ����ת��
		//������Ҫ��������ȡ��
		n = n / 8;
		num[i] = n % 8;
		i++;
	}
	count = i;

	int m = 0;
	for(int j = 0; j < count ; j++)
		m += num[j] * pow(10, j);

	cout<<m<<endl;
	return 0;
}