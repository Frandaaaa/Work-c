// union ������:�����ڽ�ʡ�ڴ档���磺Ƕ��ʽϵͳ��̣����ƿ��䡢MP3����������������Ҳ�����ڲ���ϵͳ���ݽṹ��Ӳ�����ݽṹ��
/* ��ͬ����һ�����ݸ�ʽ�����ܹ��洢��ͬ���������ͣ���ֻ��ͬʱ�洢���е�һ�����͡�Ҳ����˵���ṹ����ͬʱ�洢int��long��double��
    ������ֻ�ܴ洢int��long����double��
 */
#include <iostream>
#include <cstring>

using namespace std;

union udemo
{
    int int_val;
    long long_val;
    double double_val;
};

#if 0
struct widget
{
    char brand[20];
    int type;
    union id
    {
        long id_num;
        char id_char[20];
    }id_val;
};
#endif

#if 1
// ����������
struct widget
{
    char brand[20];
    int type;
    union // ���������壬û�����ƣ����Ա����Ϊλ����ͬ��ַ���ı�������Ȼ��ÿ��ֻ��һ����Ա�ǵ�ǰ�ṹ��ĳ�Ա
    {
        long id_num;
        char id_char[20];
    };
};
#endif

int main()
{
    cout << "��ͬ��udemo�Ĵ洢�ռ���: " << sizeof (udemo) << "=sizeof(double) = " << sizeof (double) << endl;

    udemo ud;
    ud.int_val=15;
    cout << "ud: " << ud.int_val << endl;
    ud.double_val=1.38;
    cout << "ud: " << ud.double_val << endl;

    // ����������
#if 0
    widget prize;
    strcpy(prize.brand, "addidas");
    cout << "Select the value for id_num, 1 to integer, othters for character!\n";
    cin >> prize.type;
    if(1==prize.type)
    {
        cout << "type=" << prize.type << endl;
        cout << "Input integer value to id_num" << endl;
        cin >> prize.id_val.id_num;
    }
    else
    {
        cout << "type!=" << prize.type << endl;
        cout << "Input character value to id_num" << endl;
        cin >> prize.id_val.id_char;
    }

    cout << "widget: " << prize.brand << endl;
    cout << prize.type << endl;
    if(1==prize.type)
        cout << prize.id_val.id_num << endl;
    else
        cout << prize.id_val.id_char << endl;

#endif
     // ����������
#if 1
    widget prize;
    strcpy(prize.brand, "addidas");
    cout << "Select the value for id_num, 1 to integer, othters for character!\n";
    cin >> prize.type;
    if(1==prize.type)
    {
        cout << "type=" << prize.type << endl;
        cout << "Input integer value to id_num" << endl;
        cin >> prize.id_num;
    }
    else
    {
        cout << "type!=" << prize.type << endl;
        cout << "Input character value to id_num" << endl;
        cin >> prize.id_char;
    }

    cout << "widget: " << prize.brand << endl;
    cout << prize.type << endl;
    if(1==prize.type)
        cout << prize.id_num << endl;
    else
        cout << prize.id_char << endl;
#endif

    return 0;
}
