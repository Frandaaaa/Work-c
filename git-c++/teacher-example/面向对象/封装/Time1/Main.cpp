// Time1: Main.cpp 
// Time1 �Ŀͻ�����

#include <iostream>
#include "Time1.h" // include definition of class Time1 from Time1.h
using namespace std;

int main()
{
   //���������
   Time1 t1; // �޲�
   Time1 t2( 2 ); // һ��
   Time1 t3( 21, 34 ); // ����
   Time1 t4( 12, 25, 42 ); // ����
   Time1 t5( 27, 74, 99 ); // ���Σ��Ƿ�ֵ
	
   Time1 & rt4 = t4;
   Time1 * pt5 = &t5;
	
   // ͨ���������������Ա
   cout << "Constructed with:\n\nt1: all arguments defaulted\n  ";
   t1.Print_Universal(); // 00:00:00
   cout << "\n  ";
   t1.Print_Standard(); // 12:00:00 AM

   cout << "\n\nt2: hour specified; minute and second defaulted\n  ";
   t2.Print_Universal(); // 02:00:00
   cout << "\n  ";
   t2.Print_Standard(); // 2:00:00 AM

   cout << "\n\nt3: hour and minute specified; second defaulted\n  ";
   t3.Print_Universal(); // 21:34:00
   cout << "\n  ";
   t3.Print_Standard(); // 9:34:00 PM

   // ͨ����������÷������Ա
   cout << "\n\nt4: hour, minute and second specified\n  ";
   rt4.Print_Universal(); // 12:25:42
   cout << "\n  ";
   rt4.Print_Standard(); // 12:25:42 PM

   // ͨ�������ָ��������Ա
   cout << "\n\nt5: all invalid values specified\n  ";
   pt5->Print_Universal(); // 00:00:00
   cout << "\n  ";
   pt5->Print_Standard(); // 12:00:00 AM
   cout << endl;

   return 0;
} // end main

