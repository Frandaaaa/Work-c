#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main(){
	string str = "abcdeddcbc";
	string need = "a";
    cout<<str<<" find "<<need<<endl;
    if(str.find(need)!=string::npos)//�ҵ�
		cout<<"index: "<<str.find(need)<<endl;
	else
        cout<<"don't have"<<endl;

	//���ַ����в���,���ҷ�������ֵ
	int index;
	index = str.rfind("b");
	//Ϊ�����Ч�ʣ������������ķ�Χ��rfind(str,str_befound,range_int)
	//ͬʱ�����û�У��������ǰ��:���ܷ�������
	cout<<index<<endl;

	//add function
	//first
	int index2;
	index2 = str.find_first_of("b");
	cout<<index2<<endl;

	//last
	int index3;
	index3 = str.find_last_of("cb");//���ص���b��������ֵ
	cout<<index3<<endl;

    return 0;
}
