#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(){
    char str[256] = { 0 };
    int data = 1024;
    //��dataת��Ϊ�ַ���
    sprintf(str,"%d",data);
    //��ȡdata��ʮ������
    sprintf(str,"0x%X",data);
    //��ȡdata�İ˽���
    sprintf(str,"0%o",data);
    const char *s1 = "Hello";
    const char *s2 = "World";
    //�����ַ���s1��s2
    sprintf(str,"%s %s",s1,s2);*/
    cout<<str<<endl; 
    return 0;
} 