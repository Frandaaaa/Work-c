#include <iostream>

using namespace std;

int main()
{
	double n;
	cin>>n;

	int a = 0,
		b = 0;
	while(n!=0)
	{
		if(n>0)
			a++;
		else
			b++;

		cin>>n;
	}

	cout<<"����: "<<a<<ends<<"����: "<<b<<endl;

	return 0;
}