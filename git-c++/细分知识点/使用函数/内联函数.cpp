#include <iostream>

using namespace std;

inline double s(double r)//���ٿ����Ӷ�����inline�ؼ���
{
	double PI = 3.1415;
	return PI*r*r;
}

int main()
{
	//
	//ʵ�ֵĶ��ǱȽϼ򵥵ĺ�����ͬʱ��ʱ������������Զ���ĳЩ�����Զ�����������������������ѭ������switch���
	//���������Ķ���������������������һ�α�����֮ǰ
	//�������������ܽ����쳣�ӿ�����
	double r;
	cin>>r;

	double area = s(r);
	
	cout<<area<<endl;
	
	return 0;
}
