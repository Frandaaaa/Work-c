
/**
 *  @Author:    ����
 *  @Date:      2019/3/15
 *  @Version:   1.0
 *  @Funtion:   �����С�����������Լ��
 *  @Thinkng:   1.�������(δʵ��)
 *              2.�˻�ȡ����(δʵ��)
 *              3.շת���
 */

#include <iostream>

using namespace std;

int main()
{

    int num1,num2;
    cout<<"������������������";
    cin>>num1>>num2;

        int maxNum = 0;
        int tmp1,tmp2;

        if(num1<num2)
        {
            tmp1 = num1;
            num1 = num2;
            num2 = tmp1;
        }

        int minNum = num1 * num2;

        while(num2!=0)
        {
            tmp2 = num1 % num2 ;
            num1 = num2;
            num2 = tmp2;
        }
        maxNum = num1;//�����״�ľ���������Լ��������������������ʱ�����Ǳ�������һ����ֵ�ˡ�
        minNum = minNum / maxNum;//��С�������ǳ˻������Լ���ĳ���

    cout<<"���Լ����"<<maxNum<<"\n��С��������"<<minNum<<endl;

    return 0;
}
