#include <iostream>
using namespace std;
template <typename T>
void print(T n)
{
	cout<<n<<endl;
}

int main()
{
	cout<<"A��10��B��11��C��10��D��10��E��10"<<endl;
	char c;
	cin>>c;

	//ԭ�����õ���ASCII��Ĳ�ֵ����
	//��ĸת��������
	int a = 10 + c - 'A';

	print(a);

	char cn;
	cout<<"Your number is : ";
	cin>>cn;
	//�����ַ�ת�������֣���
	int b = cn - '0';

	print(b);

	return 0;
}
