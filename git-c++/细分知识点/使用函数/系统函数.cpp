#include <iostream>
//ʹ��ʱ����Ҫ����ͷ�ļ�

using namespace std;

class Clock{
	public://���г�Ա
		void setTime(int newH = 0
			,int newM = 0
			,int newS = 0);
		void showTime();
	private://˽�г�Ա
		int hour = 0,
			minute = 0,
			second = 0;
};

int main()
{
	Clock myClock;
	myClock.setTime(8,30,30);
	myClock.showTime();
	return 0;
	//ʵ�ֳ�Ա����

}
void Clock::setTime(int newH, int newM, int newS)
{
	hour = newH;
	minute = newM;
	second = newS;
}
void Clock::showTime()
{
	cout<<hour<<":"<<minute<<":"<<second;
}