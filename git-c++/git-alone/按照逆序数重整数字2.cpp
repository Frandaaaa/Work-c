/**
 *  Author:     ����
 *  Date:       2019/3/11
 *  Version:    1.1
 *  Thinking:   ʹ������ֱ�洢�ϰ벿�ֺ��°벿�֣����ƴ��
 */
#include <iostream>
#include <string>

using namespace std;

const int LENGTH=10;

int main()
{
	int a=0;

	string s,t,u;
    cin>>s;

    t = s;
    u = s;

    for(int i=0; i<s.length()/2; i++)
	{
		t[i]=s[(s.length()-1)-i];
	}

    for(int i=0; i<s.length()/2; i++)
	{
		u[(u.length()-1)-i]=s[i];
	}

	for(int i=0; i<s.length()/2; i++)
	{
		u[i]=t[(s.length()-1)-i];
	}

	cout<<u<<endl;
	return 0;
}
