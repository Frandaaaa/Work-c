#include <iostream>
#include <string>

using namespace std;

int main()
{
	//����ֱ��ȡ���ַ�����ָ��λ���ַ�
	string a = "abc";
	cout<<a[1]<<endl;//b

	//�����ֵ�Ƚ�

	//��ȡ�ַ�������
	cout<<a.length()<<endl;  

	//���������ַ������������Ƿָ����
	string city;
	getline(cin,city,',');
	cout<<"city: "<<city<<endl;

	return 0;
}