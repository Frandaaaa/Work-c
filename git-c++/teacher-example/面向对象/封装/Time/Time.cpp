// Time: Time.cpp
// Time ���Ա�Ķ���
#include <iostream>
#include <iomanip>
#include "Time.h" // ����Time�Ķ���

using namespace std;

/*****************���캯��**********************************/
// Time���캯����˽�г�Ա��ʼ��Ϊ0����֤���󴴽���һ��״̬
Time::Time( ) 
{ 
   setTime( 0, 0, 0 ); // validate and set time
} // end Time constructor

// Time���캯����˽�г�Ա��ʼ��Ϊ0����֤���󴴽���һ��״̬
Time::Time(int h) 
{ 
   setTime( h, 0, 0 ); // validate and set time
} // end Time constructor

// Time���캯����˽�г�Ա��ʼ��Ϊ0����֤���󴴽���һ��״̬
Time::Time(int h, int m) 
{ 
   setTime( h, m, 0 ); // validate and set time
} // end Time constructor

// Time���캯����˽�г�Ա��ʼ��Ϊ0����֤���󴴽���һ��״̬
Time::Time( int h, int m, int s ) 
{ 
   setTime( h, m, s ); // validate and set time
} // end Time constructor


/*****************��������**********************************/
Time::~Time() 
{ 
   
} // end Time destructor

/*****************set ����**********************************/
// set ��������ʱ��ֵ�����ṩ��Ч����֤
void Time::setTime( int h, int m, int s )
{
   setHour( h ); // set private field hour
   setMinute( m ); // set private field minute
   setSecond( s ); // set private field second
} // end function setTime

// set hour value
void Time::setHour( int h )
{
    // thisָ��
	this->hour = ( h >= 0 && h < 24 ) ? h : 0; // validate hour
} // end function setHour

// set minute value
void Time::setMinute( int m )
{
   this->minute = ( m >= 0 && m < 60 ) ? m : 0; // validate minute
} // end function setMinute

// set second value
void Time::setSecond( int s )
{
   second = ( s >= 0 && s < 60 ) ? s : 0; // validate second
} // end function setSecond


/*****************get ����**********************************/
// return hour value
int Time::getHour()  const
{
   return hour;
} // end function getHour

// return minute value
int Time::getMinute()  const
{
   return minute;
} // end function getMinute

// return second value
int Time::getSecond()  const
{
   return second;
} // end function getSecond

/*****************���ʺ���**********************************/
void Time::Print_Universal()
{
	printUniversal();
}
void Time::Print_Standard()
{
	printStandard();
}

/*****************���ߺ���**********************************/
// print Time in universal-time format (HH:MM:SS)
void Time::printUniversal()
{
   cout << setfill( '0' ) << setw( 2 ) << getHour() << ":"
      << setw( 2 ) << getMinute() << ":" << setw( 2 ) << getSecond();
} // end function printUniversal

// print Time in standard-time format (HH:MM:SS AM or PM)
void Time::printStandard()
{
   cout << ( ( getHour() == 0 || getHour() == 12 ) ? 12 : getHour() % 12 )
      << ":" << setfill( '0' ) << setw( 2 ) << getMinute()
      << ":" << setw( 2 ) << getSecond() << ( hour < 12 ? " AM" : " PM" );
} // end function printStandard
