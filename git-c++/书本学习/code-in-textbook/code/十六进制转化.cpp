#include <iostream>

using namespace std;

/**
 *  Preview ʹ��һ��static_cast<char>() �������棺 һ������ֵ + ��
 *      ��Ҫ���㿪ʼ��Ӧ
 *      ���� ��?ֱ�Ӽ�'0' �����������ֵ��ASCII���еĶ�Ӧ�������ַ�
 *                     'A'                                    ��д��ĸ�ַ�
 */

int main()
{
    cout<<"Enter a decimal number: ";
    int decimal;
    cin >> decimal;

    string hex = "";

    while(decimal != 0)//ԭ���뵱������
    {
        int hexValue = decimal % 16;//��ȡ����������

        //��Ŀ���ʽ���������������С��10 ����һ������������ַ����ͣ�������㣬���Ǿͼ�ȥ10���A
        char hexChar = (hexValue <= 9 && hexValue >= 0) ? static_cast<char>(hexValue + '0') : static_cast<char>(hexValue - 10 + 'A');

        hex = hexChar + hex;
        decimal = decimal / 16;
    }
    char a = static_cast<char>(0 + 'a');//���㿪ʼŶ

    cout<<"The hex number is " << hex << endl;
    cout<<a<<endl;

    return 0;
}
