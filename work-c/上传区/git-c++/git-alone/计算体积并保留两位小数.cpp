/**
 *  function:   ����Բ�����
 *  ����С���ķ�����
 *  ��һ��д��
 * 	cout<<setiosflags(ios::fixed)<<setprecision(2);
 *
 *
 *  �ڶ���д��
 *	cout.setf(ios::fixed);
 *	cout<<setprecision(2);
 *
 *	������д��
 *	cout<<fixed<<setprecision(2);
 *
 *
 *  #include <iomanip>��Ҫͷ�ļ�
 */

#include <iostream>

using namespace std;
int main()
{
    double r;
    double V;
    double PI;
    int V_lastNum;
    cin>>r;

    PI = 3.1415926;

    V = (4.0/3.0)*PI*r*r*r+0.005;
    V_lastNum = V * 1000 ;//����ֱ�Ӳ�������
    V_lastNum = V_lastNum % 10;
    V = V - 0.001 * V_lastNum;

    cout<<V<<endl;
 }
