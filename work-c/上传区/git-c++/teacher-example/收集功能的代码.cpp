/*
 * function:    Integrated Function Demo Program
 * version:     1.0
 * author:      yyh
 * date:        2019-3-20
 * email:       feifanyyh@163.com
 * copyright reserved
 */
#include <iostream>

using namespace std;

int main()
{
    int choice;
    int number;
    int year;
    int month;
    int day;
    char ch;
    int Days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int count=0;
    int iWeek;

    cout << "Welcome to Using software tools" << endl;
    cout << "1 to judge ������\n";
    cout << "2 to judge leap year\n";
    cout << "3 to judge Date\n";
    cout << "4 to �����ж�����\n";
    cout << "0 to quit\n";
    cout << "please input your choice[0,1,2,3]:";
    cin >> choice;

    if(0==choice)
        cout << "you are tired, you will quit the program!";

    for(;choice;)
    {
        switch(choice)
        {
            case 0:
                cout << "you are tired, you will quit the program!";
                return 0;
            case 1:
                // ������
                cout << "����ʹ�û������ж�����\n";
                cout << "y to continue\n";
                cout << "n to quit\n";
                cout << "Input your choice:";
                cin >> ch;

                while(ch!='n')
                {
                    cout << "�����ж���ʼ...\n";
                    cout << "Input a number:" << endl;
                    cin >> number;

                    if(number/10000==number%10 && number%10000/1000==number%100/10)
                        cout << number << " is ������" << endl;
                    else
                        cout << number << " is not ������" << endl;
                    cout << "�����ж�����...\n";

                    cout << "y to continue\n";
                    cout << "n to quit\n";
                    cout << "Input your choice:";
                    cin >> ch;
                }
                break;

            case 2:
                // ����
                cout << "����ʹ�������ж�����\n";;
                cout << "y to continue\n";
                cout << "n to quit\n";
                cout << "Input your choice:";
                cin >> ch;

                while(ch!='n')
                {
                    cout << "�����ж���ʼ...\n";

                    cout << "Input a year:" << endl;
                    cin >> year;

                    if(year%400==0 || (year%4==0&&year%100!=0))
                        cout << year << "is leap year" << endl;
                    else
                        cout << year << "is not leap year" << endl;
                    cout << "�����ж�����...\n";

                    cout << "y to continue\n";
                    cout << "n to quit\n";
                    cout << "Input your choice:";
                    cin >> ch;
                }
                break;

            case 3:
                // �����ж�
                cout << "����ʹ�������ж�����\n";;
                cout << "y to continue\n";
                cout << "n to quit\n";
                cout << "Input your choice:";
                cin >> ch;

                while(ch!='n')
                {
                    cout << "�����ж���ʼ...\n";

                    cout << "Input a date (year month day):" << endl;
                    cin >> year >> month >> day;

                    if(year%400==0 || (year%4==0&&year%100!=0))
                        Days[month]++;

                    for(int i=1; i<month; i++)
                        count+=Days[i];
                    count+=day;
                    cout << "Today is the " << count << "th day int the year " << year << endl;

                    // �ж����ڼ�
                    if (month==1 || month==2)
                    {
                        month+=12;
                        year--;
                    }
                    //��ķ����ɭ���㹫ʽ
                    iWeek=(day+2*month+3*(month+1)/5+year+year/4-year/100+year/400)%7;

                    switch (iWeek)
                    {
                        case 0: cout << "����һ" << endl; break;
                        case 1: cout << "���ڶ�" << endl; break;
                        case 2: cout << "������" << endl; break;
                        case 3: cout << "������" << endl; break;
                        case 4: cout << "������" << endl; break;
                        case 5: cout << "������" << endl; break;
                        case 6: cout << "������" << endl; break;
                    }

                    cout << "�����ж�����...\n";

                    cout << "y to continue\n";
                    cout << "n to quit\n";
                    cout << "Input your choice:";
                    cin >> ch;
                }
                break;
            case 4:
                 // �����ж�����

                cout << "����ʹ�������ж�����\n";;
                cout << "y to continue\n";
                cout << "n to quit\n";
                cout << "Input your choice:";
                cin >> ch;

                while(ch!='n')
                {
                    cout << "�����ж���ʼ...\n";

                    // �����ж�����

                    cout << "�����ж�����...\n";

                    cout << "y to continue\n";
                    cout << "n to quit\n";
                    cout << "Input your choice:";
                    cin >> ch;
                }
                break;
            }

            cout << "Welcome to Using software tools" << endl;
            cout << "1 to judge ������\n";
            cout << "2 to judge leap year\n";
            cout << "3 to judge Date\n";
            cout << "4 to �����ж�����";
            cout << "0 to quit\n";
            cout << "please input your choice[0,1,2]:";
            cin >> choice;
        }

    return 0;
}
