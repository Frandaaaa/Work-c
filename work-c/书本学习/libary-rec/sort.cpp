#include <iostream>

using namespace std;


int main()
{
    int src[10] = {11,12,47,24,49,69,90,89,18,39};//һά�����а���10������
    //�Ӵ�С����
    for(int i = 0; i < 10; i++)
    {
        for(int j = i+1; j < 10; j++)
        {
            if(src[i]<src[j])    //���ǰһ��Ԫ��С�ں�һ��Ԫ��
            {
                int temp;        //��ʱ����
                temp = src[i];
                src[i] = src[j]; //���Ԫ�ص�ǰһ��λ��
                src[j] = temp;   //С��Ԫ�ص���һ��λ��
            }
        }
    }
   // �����Ԫ��
    for(int k = 0; k < 10; k++)
        cout<<src[k]<<endl;

    return 0;
}
