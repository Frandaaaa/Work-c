/**
 * Author:  ����
 * Data:    2019.3.20
 * Version: 1.0
 * Thinking: ���������Ȼ���ö����ж�
 */
 #include <iostream>
 #include <cstdlib>
 #include <ctime>

 using namespace std;

 int main()
 {

     //����̳в���
    char ch;
    cout<<"�������ʹ�����app�Ĺ���������y����������n"<<endl;
    cin>>ch;

    while('y'!=ch && 'n'!=ch)
    {
        cout<<"������Ĳ���y����n"<<endl;
        cin >>ch;
    }

while('y'==ch)
{
     //����������
     //��ʼ��ʱ��
     srand(time(0));
     int num_1 = rand()%10;//���0~10�������
     int num_2 = rand()%10;
     int answer;

     //���򲿷�
     int temp = 0;
     if(num_2>num_1)
     {
         temp = num_1;
         num_1 = num_2;
         num_2 = temp;
     }

     //��ʾ����
     cout<<num_1<<"��"<<num_2<<"�ĺ��Ƕ��٣�";
     cin>>answer;

     if(num_1 + num_2 != answer)
     {
         cout<<"������Ĵ𰸴���"<<endl;
     }
     else
     {
         cout<<"��ϲ��������"<<endl;
     }

     cout<<"�����������������⣬������y���������n�˳���"<<endl;
    cin>>ch;

    while('y'!=ch && 'n'!=ch)
    {
        cout<<"������Ĳ���y����n"<<endl;
        cin >>ch;
    }
}

     return 0;
 }

