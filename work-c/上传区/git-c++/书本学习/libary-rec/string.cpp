#include <iostream>
#include <string>

using namespace std;

/**
 *  length()    �����ַ����ĳ���
 *  size()      ��length() һëһ��
 *  at(index)   ��������ַ���������ֵindex�����ַ�
 *
 *  getline(cin, variable, '\n') �����Щ��Ҫ�ո���ַ������涨�˽����ķ�����ע������ֵĬ���ǻس�
 */

int main()
{
    //string city1, city2;
    //cin>> city1 >> city2;

    //cout<<city1 << city2 << endl;//���Զ�ȥ���ո񣬰ѿո񵱳�������

    //need
    string a, b;
    cout<<"a: ";
    getline(cin, a);
    cout<<"b: ";
    getline(cin, b);

    cout<<a<<" "<<b;


    return 0;
}
