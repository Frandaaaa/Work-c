#include <iostream>

using namespace std;

//���ݴ���Ĳ���������ʹ�ö�Ӧ�ĺ���
//�����÷���ֵ�����ֱ���void �� int
//��Ҫ�㲻ͬ���ܵ�����
//����ʵ����ͬ�������ƵĹ���

int sumOfSquare(int a, int b)
{
	return a*a + b*b;
}
double sumOfSquare(double a, double b)
{
	return a*a + b*b;
}
int main()
{
	double a = 1.4,
		b = 3.3;
	int c = 2,
		d = 4;

	cout<<sumOfSquare(a, b)<<endl;
	cout<<sumOfSquare(c, d)<<endl;

	return 0;
}