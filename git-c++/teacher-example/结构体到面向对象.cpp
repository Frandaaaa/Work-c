#include <iostream>
#include <stack>

using namespace std;

// �ṹ�������
class 
struct Time
{
 // Ĭ�ϣ����е����ݳ�Ա�ͳ�Ա�����ķ��ʷ�ʽ��Ϊpublic 
private:
	int day;
	 int month;
	 int year;

public:
	 Time() // ���캯��
	 {
		year=2019;
		month=6;
		day=12;
	 }

	 Time(int y, int m, int d)
	 {
		SetDate(y, m, d);
	 }

	 // get������Java��get������
	 int getYear()
	 {
		return year;
	 }
	 int getMonth()
	 {
		return month;
	 }
	 int getDay()
	 {
		return day;
	 }
	
	 // set������Java��set������
	 void setYear(int y)
	 {
		year=y;
	 }
	 void setMonth(int m)
	 {
		month=m;
	 }
	 void setDay(int d)
	 {
		day=d;
	 }
	 
	 void SetDate(int y, int m, int d)
	 {// software reuse ������ã��������ά���Ĵ���
		setYear(y);
		setMonth(m);
		setDay(d);
	 }

#if 0
	 Time~() // ��������
	 {
		
	 }
#endif
};


int main()
{
	Time t;
	cout << t.getYear() << " " << t.getMonth() << " " << t.getDay() << endl;
	//t.year=2019;
	//t.month=6;
	//t.day=12;
	Time t1(1981, 11, 1);
	cout << t1.getYear() << " " << t1.getMonth() << " " << t1.getDay() << endl;

	t1.setYear(2000);
	cout << t1.getYear() << " " << t1.getMonth() << " " << t1.getDay() << endl;
	cout << "t1.month: " << t1.getMonth() << endl;
	t1.setMonth(10);
	cout << "t1.month: " << t1.getMonth() << endl;
	
	
	return 0;
}
