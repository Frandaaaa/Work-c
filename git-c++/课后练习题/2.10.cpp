/**
 *  Author      ����
 *  Date        2019/3/22
 *  Version     1.0
 *  Function    ����ˮ����������ʼ�¶Ⱥ�ĩ�¶ȼ���������̵������仯
 */

 #include <iostream>

 using namespace std;

 int main()
 {
    float kilograms, initialT, finalT;
    cout<<"Enter the amount of water in kilograms: ";
    cin>>kilograms;
    cout<<"Enter the initial temperature: ";
    cin>>initialT;
    cout<<"Enter the final temperature: ";
    cin>>finalT;

    float Q;
    Q = kilograms * (initialT - finalT) * 4184;

    if(Q<0)
    {
        Q = -Q;
    }

    cout<<"The energy needed is "<<Q;

    return 0;
 }
