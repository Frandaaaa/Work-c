#include <iostream>

using namespace std;

int main()
{
	char s[100];//����һ��������
	cin.getline(s,20);//����ָ�����ȵ��ַ�����Ĵ浽������ȥ�����һλĬ��Ϊ\0����
	int i = 0,
		count = 0;
	while(s[i]!='\0')//�ж��Ƿ����
	{
		if(s[i]>='a'&& s[i] <= 'z')
			count++;
		i++;
	}
	cout<<count<<endl;

	return 0;
}