/**
 * function:    �ж��Ƿ�������
 * Author:      ����
 * Date:        20190306
 * version:     1.0
 * thinking:
 * #�ж�����        �ܱ�4����ͬʱ����100�������ܱ�400����
 * #�жϷǷ��ַ�    ������ʱ������whileѭ��ȷ�������ַ��Ƿ����Ҫ��
 *                   �������������ʱ���ж��Ƿ�Ϊ�Ϸ����������ͣ�cin.good():����һ�µ����ͷ���true
 *                      ͬʱ����Ҫ���cin��������ֵ����ֹ��ѭ��
 */

#include <iostream>

using namespace std;

int main()
{
    int int_year ;
    char ch;
    cout<<"�������ʹ�����app�Ĺ���������y����������n"<<endl;
    cin>>ch;

    while('y'!=ch && 'n'!=ch)
    {
        cout<<"������Ĳ���y����n"<<endl;
        cin >>ch;
    }

    while('y' == ch)
    {
        cout<<"������һ�����"<<endl;
        cin>>int_year;

        while(cin.good()!=1)
		{
			cout << "���������������������0������ " << endl;
			//ͨ��cin.clear,������ȷ�������ڲ���ʶ��,�������������ܣ���������.����������������������cin.sync()
			cin.clear();
			cin.sync();
			cin >> int_year;
		}

        if( (0 == int_year % 400)||( 0 == int_year % 4 && 0!= int_year % 100))
        {
            cout<<"��������������"<<endl;
        }
        else
        {
            cout<<"����Ĳ�������"<<endl;
        }

        cout<<"��������˳�������y����������n"<<endl;
        cin>>ch;

        while('y'!=ch && 'n'!=ch)
        {
            cout<<"������Ĳ���y����n"<<endl;
            cin >>ch;
        }

    }

    return 0;
}
