
// 1970 1 1 Unix Ԫ��   2019 3 20   N days%7

#include <iostream>

using namespace std;

int main()
{

    // ѭ����������������ѭ���������������������ʱ���ظ�ִ��һ���������У�
    /* forѭ��:  for(expression1; expression2; expression3)
                 {
                     actions;
                 }
                 ������ṹ���棬for�ǹؼ��֣�����forѭ���������С����Ҫ������
                 for��Ҳ�����ڶ���֮�����ո�����Ʊ��tab����С���Ŵ���forѭ����
                 ��ʼ״̬��ѭ�����������Լ�ѭ�������ĵ������ߵݼ���
                 С�������ܹ����������ʽ��expression1��ʾѭ�������ĳ�ʼ������
                 expression2�������Ǹ��������ʽ����ʾ�Ƿ����ִ��ѭ����
                 expression3��ʾѭ���������޸ģ��������ߵݼ���
                 ������{}����forѭ����ѭ���塣

                 forѭ��ִ�е��߼�˳�����£�
                 ����expression1��ִ�У�Ȼ��ִ��expression2�����expression2�Ľ��
                 Ϊ�棬��ִ��ѭ���壬��������ѭ���ṹ������ѭ����ִ����ϣ���ִ��
                 expression3��������ִ��expression2���������Ϊ�棬ִ��ѭ���壻����
                 ѭ��������Ȼ��ִ��expression3���Դ����ơ�


     */
     for(int i=1; i<=10; i++)
        cout << i << "  ";
     cout << endl;

     // Compute the sum of 1 to 100
     int sum=0;
     for(int i=1;i<=100; i++)
        sum=sum+i; // sum+=i;
     cout << "sum = " << sum << endl;

     int array[10]; // array[0]->array[9]
     for(int i=0; i<10; i++)
     {
        array[i]=i;
        cout << array[i]+1 << " ";
     }

    cout << endl;
    cout << "for change begins+++++++++++++++++++++\n";
    //  forѭ���ı���
    for(int i=1; i<=10; i++)
        cout << i << "  ";
    cout << endl;

    // ѭ������Ҫ�أ��κ�ѭ���ṹ����߱���Ҫ�أ���ֵ��ѭ��������
    // ѭ���壻ѭ���������޸�
    int i=1;
    for( ; i<=10; i++)
        cout << i << "  ";
    cout << endl;

    for(i=1; ; i++) // ��Ϊexpression2��ʡ���ˣ�����������������棬
    {
       // ѭ���������Է���ѭ������
        cout << i << "  ";
        if(i==10)
            break;
    }
    cout << endl;

    for(int i=0; i++<10; )
    {
        cout << i << "  ";
        //i++;
    }
    cout << endl;
    i=1;
    for( ; ; )
    {
        cout << i << "  ";
        if(i==10)
            break;
        i++;
    }

    cout << endl;

    return 0;
}
