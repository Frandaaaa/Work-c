#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main(){
    //c============================================
    char *s = "0123456789012345678901234567890";
    char *p,*q;
    unsigned char tmp;
    p = strchr(s, '5');
    printf("ԭ�����ַ���:%s\n", s);
    printf("5֮����ַ���:%s\n", p);

	//c++=========================================
	string str = "abcdeddcbc";
    int idx = str.find("cf");
    if(idx==string::npos)//û���ҵ�
        cout<<"don't have"<<endl;
	else
		cout<<idx<<endl;

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
