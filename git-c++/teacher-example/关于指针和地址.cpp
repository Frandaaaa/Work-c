//���������Ĵ��ݷ�ʽ

#include <iostream>

using namespace std;

//void swap(int, int);
void swap(int &, int &b);
void swap(int *, int *);

int main()
{
	int numa, numb;
	cin >> numa >> numb;
	cout << "before funtion call" << endl;
	cout << "numa=" << numa << " numb=" << numb << endl;
	//swap(numa, numb);
	swap(&numa, &numb);
	cout << "after funtion call" << endl;
	cout << "numa=" << numa << " numb=" << numb << endl;

	return 0;
}
// ��ָ�봫�ݣ��������β���ָ��ʵ�εĵ�ַ���������Ϊint *a=&numa; aָ��numa��a�����ֵ��ʵ�εĵ�ַ��
void swap(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}


// �����ô��ݣ�������ʵ�����βεı������������Ϊint &a=numa; a �� numa����ͬһ���ڴ�ռ�
void swap(int &a, int &b)
{
	int temp=a;
	a=b;
	b=temp;
}

/*
// ��ֵ���ݣ�������ֵ�ĸ��ƣ��������Ϊint a=numa; a �� numa������ͬ���ڴ�ռ�
void swap(int a, int b)
{
	int temp=a;
	a=b;
	b=temp;
}
*/