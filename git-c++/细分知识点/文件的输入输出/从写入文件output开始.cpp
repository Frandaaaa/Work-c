#include <iostream>
#include <fstream>//
using namespace std;
int main()
{
	ofstream output;
	//ע��·���еķ����ַ�������
	output.open("E:\\files\\work-c\\ϸ��֪ʶ��\\�ļ����������\\test.txt");

	output<<"Derek is more better!!"<<endl;
	output<<"give me your hand"<<endl;

	//����
	output.close();
	cout<<"Done"<<endl;

	return 0;
}
	