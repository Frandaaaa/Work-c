#include <iostream>

using namespace std;

int main()
{
	char c;
	while(cin.get(c))//Ҳ���Ƕ�cin���Ľ�����
	{
		cout<<c<<endl;
	}
	cout<<"end"<<endl;
	char a, b;
	a = cin.get();
	cin.get(b);
	cout<<a<<b<<endl;

	system("pause");

	return 0;
}