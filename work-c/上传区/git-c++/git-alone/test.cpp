#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	int N,n;
	cin>>N>>n;

	int a[N], b[n];
	for(int i = 0; i < N; i++)
	{
		cin>>a[i];
	}

	srand(time(0));

	//����n��0~N�������
	for(int j = 0; j < n; j++)
	{
		b[j] = rand() % N;
		cout<<b[j]<<" ";
	}
    cout<<endl;
	for(int k = 0; k < n; k++)
		cout<<a[b[k]]<<endl;//b�����д洢���ǲ�����������

	return 0;
}

