/**
 *  Author      ����
 *  Date        2019/3/22
 *  Version     1.0
 *  Function    �������ĩ�ٶȺ�ʱ�������ٶ�
 */

 #include <iostream>

 using namespace std;

 int main()
 {
    double V0, V1, t;
    cout<<"Enter V0 V1, and t: ";
    cin>>V0>>V1>>t;

    double a;
    a = (V1 - V0) / t;

    cout<<"The average acceleration is "<<a;

    return 0;
 }
