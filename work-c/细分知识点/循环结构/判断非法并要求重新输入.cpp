#include <iostream>

using namespace std;

int main()
{
	//ֻ������y ���� n
	char y;
	cin>>y;

	while(y!='y'&&y!='n')//����ļȲ���yҲ����n����ô��������
	{
		cin>>y;
	}

	while(y=='y')
	{
		cout<<"ok"<<endl;

		cin>>y;
		while(y!='y'&&y!='n')
		{
			cin>>y;
		}
	}
}