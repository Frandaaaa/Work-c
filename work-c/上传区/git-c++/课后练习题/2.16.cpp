/**
 *  Author      ����
 *  Date        2019/3/25
 *  Version     1.0
 *  Function    ���������ε����
 */

 #include <iostream>
 #include <math.h>

 using namespace std;

 int main()
 {
     float side;
     cout<<"Enter the side : ";
     cin>>side;

     double c = 1.5 * pow(3,0.5);

     double area = c * side * side;

     cout<<"The area of the hexagon is "<<area;

     return 0;
 }
