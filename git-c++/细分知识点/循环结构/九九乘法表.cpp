#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	for(int i = 1; i < 10; i++)
	{
		for(int j = 1; j <= i;j++)
		{
			cout<<j<<"*"<<i<<setw(2)<<"="<<i*j<<" ";
		}
		cout<<endl;//ֻҪ�������˳��Ϳ��Դ�ӡ����Ҫ��ͼ��
	}

	return 0;
}