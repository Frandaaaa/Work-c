/**
 *  Author  ����
 *  Date    2019/3/21
 *  Version 1.0
 *  Function�¶�ת������
 */

 #include <iostream>

 using namespace std;

 int main()
 {
     double Celsius;
     cout<<"Enter a degree in Celsius: ";
     cin>>Celsius;

     double fahrenheit;

     fahrenheit = (9.0 / 5) * Celsius + 32;

     cout<<Celsius<<" Celsius is "<<fahrenheit<<" Fahrenheit"<<endl;

     return 0;
 }
