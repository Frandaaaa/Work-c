#include <iostream>

using namespace std;

//
class Clock{
public:
	Clock(int newH, int newM,int newS);
	Clock();
private:
	int hour, minute,second;
};

//ʹ��ί�й��캯��
Clock(int newH,int newM, int newS):
hour(newH),minute(newM),second(newS){}

Clock():Clock(0,0,0){}//ί��ͬ���޸� 

int main()
{
	return 0;
}
