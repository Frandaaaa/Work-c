#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	ifstream input("F:\\files\\work-c\\ϸ��֪ʶ��\\�ļ����������\\test.txt");

	if(input.fail())//ȷ���Ƿ�����ļ�����׳����
	{
		cout<<"File doesn't exist"<<endl;
		cout<<"Exit program"<<endl;
		return 0;
	}

	string firstName;
	char mi;
	string content;
	while(input>>content)//��ȡȫ��
	{
		cout<<content<<" ";
	}

	input.close();
	cout<<"Done"<<endl;
	return 0;
}