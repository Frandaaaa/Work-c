#include <iostream>

using namespace std;

void swap(int, int);
void swap1(int &, int &);
void swap2(int *, int *);
int main()
{
	int a = 1,
		b = 2,
		c = 1,
		d = 2;
	int *p, *q;
	p = &c;
	q = &d;

	swap(a, b);//���ֲ��ܸı�ԭ����ֵ
	cout<<a<<" "<<b<<endl;
	swap1(a, b);//ֵ���ý���ֵ
	cout<<a<<" "<<b<<endl;
	swap2(p,q);//����ָ��洢��ַ����ֵ
	cout<<c<<" "<<d<<endl;

	return 0;
}

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

void swap1(int &c, int &d)
{
	int temp = c;
	c = d;
	d = temp;
}

void swap2(int *e, int *f)
{
	int temp = *e;
	*e = *f;
	*f = temp;
}
