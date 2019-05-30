/**
 * Author:  ����
 * Data:    2019/3/20
 * Version: 1.2
 * Function:�������
 */
#include <iostream>
#include <ctime>        //time
#include <cstdlib>      //srand rand

using namespace std;

int main()
{
    int correctCount = 0;//��Ե���Ŀ����
    int errorCount = 0;//������Ŀ����
    double correctRate ;//������ȷ��
    int count = 0;//����Ŀ
    long startTime = time(0);
    int answer = 0;
    const int NUMBER_OF_QUESTIONS = 10;

    srand(time(0));

    while(count < NUMBER_OF_QUESTIONS)
    {
        //�����������
        int number1 = rand() % 10;
        int number2 = rand() % 10;
        int temp = 0;

        if(number2 > number1)
        {
            temp = number1;
            number1 = number2;
            number2 = temp;
        }

        cout<<"����һ��"<<number1<<"��"<<number2<<"�ĳ˻�"<<endl;
        cout<<"��Ĵ�:";
        cin>>answer;

        if(number1 * number2 == answer)
        {
            cout<<"correct"<<endl;
            correctCount++;
        }
        else
        {
            cout<<"error"<<endl;
            errorCount++;
            cout<<"��Ӧ����:"<<(number1*number2)<<endl;
        }

        count++;
    }

    long endTime = time(0);
    long testTime = endTime - startTime;//����ִ�г���������ʱ��

    if(testTime>5)
    {
        cout<<"̫����"<<"��һ������"<<testTime<<"s"<<endl;
    }

    correctRate = correctCount / count;

    cout<<"��ȷ�ĸ�����"<<correctCount<<"��ȷ���ǣ�"<<correctRate<<endl;

    return 0;
}
