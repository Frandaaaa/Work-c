#include <cstring>
#include <iostream>
#include <cstdio>
using namespace std;
int main() {
	//���ֵ����⣺�ַ������������:�����ǳ����˳���Ҳ�Ǳ����䵽������ڴ���
	char str1[11] = "Hello ";
    char str2[11] = "World";
    char str3[11];
    int  len ;
	//strcpy �����ַ���
	strcpy( str3, str1); //����Ī��'\0'
	//memcpy(str3, str1);//��
	cout<<str3<<endl;

	//strcat �����ַ���
    strcat( str1, str2);
	cout<<str1<<endl;

	//strlen �����ַ�������
	len = strlen(str1);
	cout<<len<<endl;

	//strcmp �ж��ַ���
	char str4[11] = "Hello";
    char str5[11] = "World";
	cout<<strcmp(str3,str4)<<endl;//str1>str2:-1,str=str2:0,(str1<str2||str1!=str2):1

	//strchr ����ָ��ָ����һ�γ��ֲ�ѯ��λ��
	char* p = strchr(str4,'l');//ָ��洢��ָ����Ǻ�����ַ�
	cout<<p<<endl;

	//strstr �������չ��ֻ�����ǲ�ѯ�ַ���
	char str6[] = "or";
	char *q = strstr(str5,str6);
	cout<<q<<endl;
	
	return 0;
}