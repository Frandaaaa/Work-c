#include <iostream>

using namespace std;

unsigned fac(unsigned n);
unsigned fuc(unsigned m);
int main()
{
	int num;
	cin>>num;

	cout<<fac(num)<<endl;
	cout<<"��һ�ַ�������֤: "<<fuc(num);

	return 0;
}

unsigned fac(unsigned n)
{
	unsigned f;
	if(n==0)
		f = 1;
	else
		f = fac(n - 1) * n;//�͵ݹ麯������
	return f;
}

unsigned fuc(unsigned m)
{
	unsigned fa = 1;
	for(int i = 1; i <= m; i++)//ֱ��ʹ��forѭ��
	{
		fa *= i;
	}
	return fa;
}
