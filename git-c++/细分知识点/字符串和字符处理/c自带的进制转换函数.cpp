#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
	//ʮ����ת���ɸ�λ��������
	cout<<"����ʮ������: ";
	int n;
	cin>>n;
	char hex[100],bin[100],ox[100];
	//ʮ������
	itoa(n,hex,16);
	//�˽���
	itoa(n,ox,8);
	//������
	itoa(n,bin,2);

	//˹������
	cout<<"(ʮ��)"<<hex<<" "<<"(��)"<<ox<<" "<<"(��)"<<bin<<endl;

	return 0;
}
