#include <iostream>

using namespace std;

//ʹ��ģ������
template <typename T>
T add(T a, T b)
{
	return a + b;
}

int main()
{
	//���������������صģ���������ͱ���һ��
	double num1, num2, sum;//���ͬʱ��������
	cin>>num1>>num2;
	sum = add(num1, num2);

	cout<<sum<<endl;

	return 0;
}

