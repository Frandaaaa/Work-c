#include <iostream>
#include <string>

using namespace std;

int main()
{
	//ʹ�ö�������c��û��string������Ҫʹ��string���еķ�����string����ת����c�ܴ����char
	char c[20];
	string a = "1234";
	strcpy(c, a.c_str());//����c_str()��������������ʱ��ָ�룬���ܶ�����в���������ʹ��strcpy����copy

	for(int i = 0; i <a.length(); i++)
		cout<<c[i]<<endl;

	return 0;
}