#include <iostream>

using namespace std;

int main()
{
	int num;
	cin>>num;

	int n = num;
	int count = 1;
	while(n = n / 10)
	{
		count++;
	}

	cout<<count<<endl;//������ֵ�λ��

	int nums[count];//vs�����������������鳤��Ȼ���������ģʽ
	nums[0] = num % 10;
	for(int i = 1 ; i <= count; i++)
	{
		num /= 10;
		nums[i] = num % 10;
	}
	for(int j = 0 ; j < i ; j++)
	{
		cout<<nums[j]<<" "<<endl;
	}

	return 0;
}
		