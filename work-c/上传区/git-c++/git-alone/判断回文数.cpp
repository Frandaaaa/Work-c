/**
 *  function:   �жϻ�����
 *  file_name:  work1.cpp
 *  Author:     ����
 *  data:       2019.03.01
 *  version:    1.0
 *  email:      1297571059@qq.com
 *  thinking:   ��ȡ��������Ҫ���ã�����ȡ�಻���������룬ֻ��ֱ�ӷ���ֵ
 */

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"������λ�����ж��ǲ��ǻ�����";
    cin>>num;

    int a,b,c,d;

    a = num / 10000;//����Ϊ��λ��
    b = num % 10000 / 1000;//�������Ϊ������λ��ǧ������ȡ������Ϊǧλ
    c = num % 100 / 10;
    d = num % 10;

    if(a == d && b == c)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;

    return 0;
}
