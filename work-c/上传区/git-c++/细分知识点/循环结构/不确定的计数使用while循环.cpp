#include <iostream>

using namespace std;

int main()
{
	int score;
	int sum = 0;
	int number = 0;

	cin>>score;

	while(-1!=score)//ʹ��ָ�������ж�ѭ��
	{
		sum += score;
		number++;

		cin>>score;
	}

	cout<<sum;

	return 0;
}