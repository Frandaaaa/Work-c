#include <string>
#include <stdio.h>
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
	//ָ�����������ֵ�����з�ת
    int a[10]={10,11,12,13,14,15};
    reverse(a,a+4);
    for(int i=0;i<6;i++){
        printf("%d ",a[i]);
    }

	//ʹ������ĵ�����,������ķ�ת
	string str = "dsafsad";
	reverse(str.begin(), str.end());
	cout<<str<<endl;

    return 0;
}
