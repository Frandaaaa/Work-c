/**
 *  @Authour:   ����
 *  @Date:      2019/3/13
 *  @Function:  �����������ڵ���ĵڼ����Լ���Ӧ����
 *  @Thinking:  1.��ݶ�Ӧ��������
 *              2.�·ݶ�Ӧ��ͬ������
 *                  1 31 2 28/29 3 31 4 30 5 31 6 30 7 31 8 31 9 30 10 31 11 30 12 31
 *              3.������������֪��Ĳ�����Ļ�����и��˶������꣺2019-2015=4  * 1
 *               2019 - 2008 = 11/4 = 2 .. 3 2019-2013 6 1...2 2019-2016 3 ...3
 *               ��������������̼�1
 *              4.2015 3 22 ��һ������ ����(4 - 1) 3-�������y2=��ͨ��y1  y1*365+y2*366 + �������������� / 7
 *                2016 3 22 һ��        ����(3 - 1)
 *                2020     һ��(2020-2019)
 *                2021      ����(2021-2019) ...2
 *                  ��ǰ�����ݣ����������2+1
 *                2025      6       2����(6/4=1...2)
 *              5.S=(year-1)+[(x-1)/4]-[(x-1)/100]+[(x-1)/400]+C
 *  @More:      �Ƿ��ַ����� 2019/1/1 ���ڶ�
 */

#include <iostream>

using namespace std;

int main()
{
    int year,month, day;
    int m;//��
    int n;//����
    int s;//�����
    int allDay0,allDay1;//�������
    int left;//����
    int week;//����
    int sum1;
    int Year[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

    //����̳в���
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
label:
    cout<<"�����������գ�";
    cin>>year>>month>>day;

    if(year >= 0 && (month<=12 && month>=1))//����ȫ������
    {
        if((0 == year % 400)||( 0 == year % 4 && 0!= year % 100))
        {
            Year[2] = 29;
        }
        if(day < 1 || day > Year[month])//����һ�ֳ������Ƿ�����
        {
            cout<<"�������ڸ�ʽ����ȷ"<<endl;
            goto label;
        }
    }
    else
    {
        cout<<"��������²���ȷ"<<endl;
        goto label;
    }

    int sum0 = 0;//��������г�ʼ���ͻ�ʹ��ϵͳ�ĳ�ʼֵ
    //first: judge from the year
    if((0 == year % 400)||( 0 == year % 4 && 0!= year % 100))
    {
        //leap year
        //second: month
        Year[2] = 29;
        for(int i = 0; i < month; i++)
        {
            sum0 = sum0 + Year[i];
        }
        sum1 = sum0 + day;
        cout<<year<<"��"<<month<<"��"<<day<<"��"<<"��"<<year<<"�ĵ�"<<sum1<<"��";

        //week
        //�ж���֮ǰ֮��
    }
    else
    {
        //simple year
        Year[2] = 28;
        for(int i = 0; i < month; i++)
        {
            sum0 = sum0 + Year[i];
        }
        sum1 = sum0 + day;
        cout<<year<<"��"<<month<<"��"<<day<<"��"<<"��"<<year<<"�ĵ�"<<sum1<<"��";
    }

        if(year < 2018)
        {
            s = 2018 - year;
            m = s / 4;
            n = s % 4;
            if(3 == n)
            {
                m += 1;
                left = s - m;
                allDay0 = 365 * left + 366 * m;
                allDay1 = allDay0 + (365-sum1);//��õļ������
            }
            else
            {
                left = s - m;
                allDay0 = 365 * left + 366 * m;
                allDay1 = allDay0 + (365-sum1);
            }
            week = allDay1 % 7;
            switch(week)
            {
            case 0:
                cout<<",����һ"<<endl;
                break;
            case 1:
                cout<<",������"<<endl;
                break;
            case 2:
                cout<<",������"<<endl;
                break;
            case 3:
                cout<<",������"<<endl;
                break;
            case 4:
                cout<<",������"<<endl;
                break;
            case 5:
                cout<<",������"<<endl;
                break;
            case 6:
                cout<<",���ڶ�"<<endl;
                break;
            }
        }
        else if(year > 2019)
        {
            s = year - 2019;
            m = s / 4;
            n = s % 4;
            if(2 == n)
            {
                m += 1;
                left = s - m;
                allDay0 = 365 * left + 366 * m;
                allDay1 = allDay0 + sum1;//��õļ������
            }
            else
            {
                left = s - m;
                allDay0 = 365 * left + 366 * m;
                allDay1 = allDay0 + sum1;
            }
            week = allDay1 % 7;
            switch(week)
            {
            case 0:
                cout<<",����һ"<<endl;
                break;
            case 1:
                cout<<",���ڶ�"<<endl;
                break;
            case 2:
                cout<<",������"<<endl;
                break;
            case 3:
                cout<<",������"<<endl;
                break;
            case 4:
                cout<<",������"<<endl;
                break;
            case 5:
                cout<<",������"<<endl;
                break;
            case 6:
                cout<<",������"<<endl;
                break;
            }

        }
        else if(2018 == year)
        {
            week = (365 - sum1) % 7;//-1
            switch(week)
            {
            case 0:
                cout<<",����һ"<<endl;
                break;
            case 1:
                cout<<",������"<<endl;
                break;
            case 2:
                cout<<",������"<<endl;
                break;
            case 3:
                cout<<",������"<<endl;
                break;
            case 4:
                cout<<",������"<<endl;
                break;
            case 5:
                cout<<",������"<<endl;
                break;
            case 6:
                cout<<",���ڶ�"<<endl;
                break;
            }
        }
        else if(2019 == year)
        {
            week = (sum1-1) % 7;
            switch(week)
            {
            case 0:
                cout<<",���ڶ�"<<endl;
                break;
            case 1:
                cout<<",������"<<endl;
                break;
            case 2:
                cout<<",������"<<endl;
                break;
            case 3:
                cout<<",������"<<endl;
                break;
            case 4:
                cout<<",������"<<endl;
                break;
            case 5:
                cout<<",������"<<endl;
                break;
            case 6:
                cout<<",����һ"<<endl;
                break;
            }
        }
        cout<<"��������˳�������n����������y"<<endl;
        cin>>ch;

        while('y'!=ch && 'n'!=ch)
        {
            cout<<"������Ĳ���y����n"<<endl;
            cin >>ch;
        }
}

    return 0;
}
