#include <iostream>

using namespace std;

int main()
{
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	cout << "+++      Welcome to using Leap Year Judgement app     ++" << endl; 
	cout << "+++      ������λ�����ϴ�ѧ���������Ϣ����ѧԺ       ++" << endl;
	cout << "+++      �汾��1.0							           ++" << endl;
	cout << "+++      ��Ȩ���У�����ؾ�						   ++" << endl;
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	int year;
	int count=10;

	char ch;
	// while(1)  // while����������ԶΪ�棬����ı�
	cout << "������������ж�ĳ���Ƿ������꣬������y��������˳���������n" << endl;
	cin >> ch;
	// ����ط���Ҫ���ε����з�y��n���ַ�
	while('y'!=ch && 'n'!=ch)
	{
		cout << "��������ַ��Ƿ�������������,y to go n to end" << endl;
		cin >> ch;

	}

		while('y'==ch) // while������������countֵ�ĸı䣬��ĳһ��ʱ�̷����ı�
		{ 
			cout << "Input a year: " << endl;
			cin >> year;

			if( ( 0==year%400 ) || ( 0==year%4 && 0!=year%100 ) )
			{
				cout << year << "  is a leap year! " << endl;	
			}
			else
			{
				cout << year << "  is not a leap year! " << endl; 
			}
			
			cout << "������������ж�ĳ���Ƿ������꣬������y��������˳���������n" << endl;
			cin >> ch;
			while('y'!=ch && 'n'!=ch)
			{
				cout << "��������ַ��Ƿ�������������,y to go n to end" << endl;
				cin >> ch;

			}
		}	

	
		

	return 0;
}