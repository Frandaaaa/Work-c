#include <iostream>

using namespace std;


class Clock{
public :
	//���캯��������ϵ������
	//������ʼ���㷨��ͯ���ǳ�ʼʱ
	//���ܶ��巵��ֵ����
	//���ܽ�һ��û�в����Ĺ��캯�����еķ���һ������

	//ϣ����������Ĭ�Ϲ��캯��
	//Clock() = default;
	Clock(int newH,int newM, int newS);//�����в���������Ϊ��;
	Clock();
	void setTime(int newH = 0, int newM = 0, int newS = 0);
	void showTime();

private:
	int hour,minute,second;
};
inline void Clock::showTime(){
	cout<<hour<<":"<<minute<<":"<<second<<endl;
}

Clock::Clock(int newH,int newM, int newS):hour(newH),minute(newM),second(newS)//��ʼ���б��β�ֱֵ�Ӹ�ֵ����Ա����
{}

void Clock::setTime(int newH, int newM, int newS){
	hour = newH;
	minute = newM;
	second = newS;
}

int main()
{
	Clock c(10,20,60);//�������

	c.showTime();
	return 0;
}


