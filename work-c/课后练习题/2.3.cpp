/**
 *  Author      ����
 *  Date        2019/3/21
 *  Version     1.0
 *  Function    ȷ��һ��footȻ�������������
 */

 #include <iostream>

 using namespace std;

 int main()
 {
     double num;
     cout<<"Enter a value for feet: ";
     cin>>num;

     double foot = 0.305;

     double feet = num * foot;

     cout<<num<<" feet is "<<feet<<" meters"<<endl;

     return 0;
 }
