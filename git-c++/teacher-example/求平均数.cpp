// ��һ���༶��ƽ���ɼ�

#include <iostream>

using namespace std;

// function:Ϊ��ģ�黯�����룬���ĸ�ʽΪ
// ��������������  ������(����������Ϊ��){������}
//��������Ĳ���a��b��Ϊ��ʽ����
int max(int a, int b); // �������������������max(int a, int b)��������ǩ��

int main()
{
#if 0 // ȷ�������İ༶ƽ���ɼ�
    int score;
    int sum=0; //ȫ��ɼ����ۼӺͣ���Ҫ��ʼ��Ϊ0
    int number=10;

    for(int i=0; i<number; i++)
    { //�ظ�ִ�еĶ��������ǣ�����һ���ɼ����ѳɼ��ӵ��ۼӺ�
        cout << "Input a score: ";
        cin >> score;
        sum+=score;
    }

    cout << "Average Score of this class is: " << sum/10 << endl;




    // ��ȷ�������İ༶ƽ���ɼ�


    int score;
    int sum=0; //ȫ��ɼ����ۼӺͣ���Ҫ��ʼ��Ϊ0
    int number=0; // ����������

    cout << "Input a score: ";
    cin >> score;

    while(-1!=score) //��ǣ���ǿ��Ƶ�ѭ��
    { //�ظ�ִ�еĶ��������ǣ�����һ���ɼ����ѳɼ��ӵ��ۼӺ�

        sum+=score;
        number++;

        cout << "Input a score: ";
        cin >> score;
    }
    if(0!=number)
        cout << "Average Score of this class(" << number << " persons )is: " << (float)sum/number << endl;
    else
        cout << "No Input score!" << endl;

#endif

    int a, b;
    cout << "Input two integers: " << endl;
    cin >> a >> b;

    //�˴����ֵ�max(a,b)�����������ã����е�a��b����ʵ�ʲ�������������ʽ������������
    cout << "the maximum value of these two integers is: " << max(a, b) << endl;

    return 0;
}


int max(int a, int b)
{
    //return (a>=b?a:b);
    if(a>=b)
        return a;
    else
        return b;
}
