/**
 *  Author      ����
 *  Date        2019/3/27
 *  Version     1.0
 *  Function    �������������ʵĻ���
 */

 #include <iostream>
 #include <math.h>

 using namespace std;

 int main()
 {
     double amount, annualRate, years;
     cout<<"Enter investment amount: ";
     cin>>amount;
     cout<<"Enter annual interest rate in percentage:";
     cin>>annualRate;
     cout<<"Enter number of years:";
     cin>>years;

     double rate = 1 + annualRate / 1200;
     double funtureV = amount * pow(rate, years * 12);

     cout<<"Accumulated value is $"<<funtureV;

     return 0;
 }
