#include <iostream>
#include <string>
using namespace std;
int main()
{
	string ss;
	while(cin>>ss)
	{
		//ȱ���ǿո񱻵����ָ����
		cout<<ss<<endl;
		if(cin.get()=='\n')//ʹ��cin.get()�ж������ַ�
			break;
	}

	return 0;
}