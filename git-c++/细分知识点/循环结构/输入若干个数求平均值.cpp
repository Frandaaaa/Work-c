#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int num;
	cin>>num;
	
	int sum = 0;
	int max = num;//���Խ����ֵһ��ʼ������
	int count = 0;//һ��Ҫ��ʼ���Ժ����Ͷ�������
	while(-999!=num)
	{
		sum = num + sum;
		if(max<num)
			max = num;
		count++;
		cin>>num;
	}

	cout<<sum<<endl;
	cout<<fixed<<setprecision(2)<<(float)sum/count<<endl;

	return 0;
}

