#include <iostream>

using namespace std;
#define N 10

int main()
{
	int numbers[N];
	for(int i = 0; i<N; i++)
	{
		cin>>numbers[i];
	}

	//����ֱ��ʹ�ø�ֵ������������ȣ�ֻ��һһ��ֵ

	int newArray[N];
	for(int a = 0; a < N; a++)
	{
		newArray[a] = numbers[a];
	}

	for(int m = 0; m < N; m++)
	{
		for(int n = m + 1; n < N ; n++)
		{
			if(newArray[m]<newArray[n])
			{
				int temp;
				temp = newArray[m];
				newArray[m] = newArray[n];
				newArray[n] = temp;
			}
		}//�Ӵ�С����
	}

	cout<<"max = " << newArray[0]<<endl;
	cout<<"min = " << newArray[N-1]<<endl;

	return 0;
}
