// һά���飬��ν���������һ�����ļ��ϣ�

#include <iostream>

using namespace std;

int main()
{
	// array����������������ط�������һ������10������Ԫ�ص�����array
	// �����{}��������Ԫ�صĳ�ʼ����
	// array�����[10]��ʾ����Ԫ�صĸ���Ϊ10��
	//����Ԫ�صı�Ŵ�0��ʼ�����Ϊ����Ԫ�ظ���-1���ڴˣ���������Ԫ�ر��Ϊ9��
	//����Ԫ�ص�����ͨ�����������±�����������ָʾԪ�أ�����array[0]��ʾ����ĵ�һ��Ԫ��
	// array[i]��ʾ������ĵ�i+i��Ԫ�ء�
#if 0
	int array[10]={1,2,3,4,5,6,7,8,9,10};

	//����Ԫ�صĳ�ʼ��
	int array1[10]={1}; // �����ʼ���б���ֻ��һ��Ԫ��0����ô�����Ԫ��Ĭ�ϳ�ʼ��Ϊ0


	for(int i=0; i<10; i++)
		cout << array1[i] << endl;
#endif

	int Days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int year, month, day;
	int months=1;
	int counts=0;

label:
	cout << "Inpu a Date: " << endl;
	cin >> year >> month >> day ;
	
	if(year>=0 && (month>=1 && month<=12))
	{
		if(0==year%400||0==year%4&&0!=year%100)			
			Days[2]+=1;
		if(day<=0 || day>Days[month])
		{
			cout << "Date�Ƿ�,reput again!" << endl;
			goto label;
		}

	}
	else
	{
		cout << "Date�Ƿ�,reput again!" << endl;
		goto label;
	}

	if(0==year%400||0==year%4&&0!=year%100)			
		Days[2]+=1;	

	for(months=1; months<month; months++)
		counts+=Days[months];
	counts+=day;
	cout << "Date: " << year << "-" << month << "-" << day << " is the " << counts 
		<< "th day in the year " << year << endl;
	
	return 0;
}

