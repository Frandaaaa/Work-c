#include <iostream>
#include <iomanip>

using namespace std;

/**
 *  setprecision(n)     ������λС��
 *  fixed
 *  showpoint           û��С������ʾС��
 *  setw(width)         ��ʽ�����
 *      ����      left
 *                right
 */

int main()
{
    double d = 12.2165;

    cout<<fixed<<setprecision(3)<<d;

    return 0;
}
