/**
 *  Author  ����
 *  Date    2019/3/20
 *  Version 1.0
 *  Function��λ����+����ƽ���ٶ�
 */

 #include <iostream>

 using namespace std;

 double changeTime(int minutes, int seconds)
 {
     double hours = 0;

     hours += minutes/60.0 + seconds/3600.0;

     return hours;
 }

 double changeMile(int kilometers)
 {
     double miles;

     miles = kilometers / 1.6;

     return miles;
 }

 int main()
 {
     double averageV ;

     averageV = changeMile(14) / changeTime(45,30);

     cout<<"ƽ���ٶ�Ϊ��"<<averageV<<"mile/h"<<endl;

     return 0;
 }
