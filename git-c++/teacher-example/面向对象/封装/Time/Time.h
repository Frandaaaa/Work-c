// Time: Time.h
// Time �����������͵�����
// Time���Ա�Ķ�����Time.cpp�У���������Ϊ��ʵ�ֽӿ���ʵ�ֵķ���.

// ��װ�������ݺͶ����ݵĲ�����װ��һ�����һ���µ��������͡�

// ��ֹͷ�ļ��ظ�����
#ifndef TIME_H
#define TIME_H

// Time �����������͵�����
class Time 
{
public:
	// ���캯�������������ʱ�Զ����ã���Ҫ��ɶ��󴴽�ʱ�йصĳ�ʼ������
	Time(); //�޲ι��캯����ֻҪ�ṩ�κ�һ�����캯�����������������ṩĬ�ϵ��޲ι��캯��
	Time(int h); //һ�ι��캯��
	Time(int h, int m); //���ι��캯��
	Time(int h, int m, int s); //���ι��캯��
	//Time( int = 0, int = 0, int = 0 ); // ȱʡ���캯��

	// ����������������ʱ�����������Զ����ã����������ͷŶ���ռ�õ��ڴ�ռ䣬��ֻ����ϵͳ���ն����
	// �ڴ�ռ�֮ǰִ��ɨβ�����������ڴ�����������ڱ����µĶ������û�ж����������������������ṩһ
	// �����յġ������������޲������޷���ֵ��
	~Time();

	// set ��������Ҫ������Ŀͻ�����˽�г�Ա����Ҫ�ṩ���ݵ���Ч����֤
	void setTime( int, int, int ); // set hour, minute, second
	void setHour( int ); // set hour (after validation)
	void setMinute( int ); // set minute (after validation)
	void setSecond( int ); // set second (after validation)

	// get ��������Ҫ������Ŀͻ�����˽�г�Ա��Ҳ�з��ʺ���
	int getHour() const; // return hour
	int getMinute() const; // return minute
	int getSecond() const; // return second
	
	// ���ʺ���
	void Print_Universal(); // output time in universal-time format
	void Print_Standard(); // output time in standard-time format
private:
	int hour; // 0 - 23 (24-hour clock format)
	int minute; // 0 - 59
	int second; // 0 - 59
	
	// ���ߺ�������ҪΪ������Ա�����ṩ����
	void printUniversal(); // output time in universal-time format
	void printStandard();  // output time in standard-time format

}; // end class Time

#endif
