#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int main() {
	string s1 = "sdafas";
	string s2 = "cuiqin";

	//erase(index_int,len_int)ɾ��
	s1.erase(2,3);
	cout<<s1<<endl;
	//sds
	//��ͬ��cout<<s1.erase(2,3)<<endl;

	//insert(index_int,str_string)����
	s1.insert(0,s2);
	cout<<s1<<endl;
	//cuiqinsds
	//append(str_string)β������
	s1.append("baba");
	cout<<s1<<endl;
	//push_back(char)β������һ���ַ�:vc��֧�֣�G++֧��
	//s1.push_back('f');
	//cout<<s1<<endl;
	
	//replace(index_int,len_int,str)�滻
	s1.replace(0,6,"cuixiaoqin");
	cout<<s1<<endl;

	//substr(index_int,len_int)���ָ��λ���ַ�
	//ע��������Ҫ�����µı�������õ����ַ�
	cout<<s1.substr(0,5)<<endl;

	//swap()ʹ�õڶ����ַ��������һ���ַ���

	s1.swap(s2);
	cout<<s1<<endl;

	return 0;
}

