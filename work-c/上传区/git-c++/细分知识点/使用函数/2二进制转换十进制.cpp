#include <iostream>

using namespace std;

double pow(double, int);

int main()
{
	int value = 0;
	int ns;
	cout<<"Enter binary number's length: ";
	cin>>ns;
	cout<<"Enter binary number: ";
	//����ķ���
	for(int i = ns-1; i >= 0; i--)
	{
		char ch;
		cin>>ch;
		if(ch == '1')
			value += static_cast<int>(pow(2,i));//����ֵ������double , �����ʹ��ǿ��ת��
	}

	cout<<value<<endl;
	
	return 0;
}

double pow(double num, int n)
{
	double val = 1.0;
	while(n--)
		val *= num;
	return val;
}