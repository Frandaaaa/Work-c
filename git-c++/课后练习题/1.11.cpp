/**
 *  Author  ����
 *  Date    2019/3/20
 *  Version 1.0
 *  Funtion ������һ��������˿���
 */

 #include <iostream>

 using namespace std;

 int main()
 {
     int year;
     cout<<"����Ҫ֪��δ��������˿ڣ�";
     cin>> year;

     long currentPopulation = 312032486;
     long oneYearSeconds = 365*24*60*60;

     int birth, death, immigrant;

     float oneYearPopChange = oneYearSeconds / 7.0 + oneYearSeconds / 45.0 - oneYearSeconds / 13.0;

     cout<<"δ��"<<year<<"����˿�����"<<endl;
     for(int i = 0; i < year; i++)
     {
         currentPopulation += oneYearPopChange;
         cout<<"��"<<i<<"����˿�Ϊ��"<<currentPopulation<<endl;
     }

     return 0;
 }
