#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	string filename;
	cout<<"tell the file's name: ";
	cin>>filename;

	//ʹ����c�е��и��ַ�������
	ifstream input(filename.c_str());

	if(input.fail())
		cout<<"don't exist"<<endl;
	else
		cout<<"exist"<<endl;

	return 0;
}
