/**
 *  @Author     ����
 *  @Date       2019/3/27
 *  @Version    1.0
 *  @Function   ������λΪ��
 */

 #include <iostream>

 using namespace std;

 int main()
 {
     int cents;
     cin>>cents;

     int cent, dollars;
     cent = cents % 100;
     dollars = cents /100;


     cout<<dollars<<" dolloars "<<cent<<" cents"<<endl;

    return 0;
 }
