#include <iostream>
using namespace std;
union test 
{
	int a;
	long b;
	double c;
};
//��ռһ��
int main()
{
	test a;
	a.b = 1.054;
	cout<<a.a<<endl;

	return 0;
}
