#include <iostream>
using namespace std;
int main()
{
	int a[100],b[100],i,m,n,j=0,k=0;
	cout<<"��������";
	cin>>n;
	cout<<"�������";
	cin>>m;

	//�������
	for(i=0;i<n;i++)
		a[i]=i+1;

	//while + for = fantasty
	while(j!=n)
	{
		for(i=0;i<n;i++)
		{
			if(a[i]==0)
				continue;
			k++;
			if(k!=m)
				continue;
			k=0;
			b[j++]=a[i];
			a[i]=0;
		}
	}

	cout<<"���ѡ�е�����"<<b[n-1]<<endl;

	return 0;
}
	