/**
 * Author��      ����
 * function:     ʵ������������������
 * version:      1.0
 * Date:         2019/3/11
 * thinking:     ����ȡ������̻�ȡ����λ��������
 */

 #include <iostream>

 using namespace std;

 int main()
 {
    int m,n;

    //����һ������m
    cin>>m;

    n = m%10;//�õ�m�ĸ�λ����Ϊ���λ

    while(m = m/10)//��m��λ����ʱ����ִ��
    {
        n = n*10 + m%10;//���������Ǹ�λ��ʮλ
    }

    cout<<n;

    return 0;
 }
