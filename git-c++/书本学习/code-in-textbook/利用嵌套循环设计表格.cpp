#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout<<"     Multiplication Table\n";

    cout<<"n| ";
    for(int j = 1; j <= 9; j++)
        cout<<setw(3)<<j;
    //��ͷ������

    cout<<"\n";
    cout<<"-------------------------------\n";

    //�µĲ��ֽ��л��Ʊ���
    for(int i = 1; i <= 9; i++)
    {
        cout<<i<<" | ";//��ͷ
        for(int j = 1; j <= 9; j++)
        {
            cout<<setw(3)<<i * j;
        }
        cout<<"\n";
    }

    return 0;
}

