/**
 *  Author  ����
 *  Date    2019/3/20 -ֱ������1.11����ļ�������-> 2019/3/22
 *  Version 2.0
 *  Function ��������֪��δ���ڼ����˿���
 */

 #include <iostream>

 using namespace std;

 int main()
 {
     int year;
     cout<<"����Ҫ֪��δ���ڼ�����˿ڣ�";
     cin>> year;

     long currentPopulation = 312032486;
     long oneYearSeconds = 365*24*60*60;

     int birth, death, immigrant;

     float oneYearPopChange = oneYearSeconds / 7.0 + oneYearSeconds / 45.0 - oneYearSeconds / 13.0;

     cout<<"δ��"<<year<<"����˿�����"<<endl;
     currentPopulation += oneYearPopChange * year;

     cout<<"��"<<year<<"����˿�Ϊ��"<<currentPopulation<<endl;

     return 0;
 }

