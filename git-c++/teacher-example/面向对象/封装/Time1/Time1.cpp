// Time1: Time1.cpp
// Time1 ���Ա�Ķ���
#include <iostream>
#include <iomanip>
#include "Time1.h" // ����Time1�Ķ���

using namespace std;

/*****************���캯��**********************************/
// Time1���캯����˽�г�Ա��ʼ��Ϊ0����֤���󴴽���һ��״̬
Time1::Time1( ) 
{ 
   setTime1( 0, 0, 0 ); // validate and set Time1
} // end Time1 constructor

// Time1���캯����˽�г�Ա��ʼ��Ϊ0����֤���󴴽���һ��״̬
Time1::Time1(int h) 
{ 
   setTime1( h, 0, 0 ); // validate and set Time1
} // end Time1 constructor

// Time1���캯����˽�г�Ա��ʼ��Ϊ0����֤���󴴽���һ��״̬
Time1::Time1(int h, int m) 
{ 
   setTime1( h, m, 0 ); // validate and set Time1
} // end Time1 constructor

// Time1���캯����˽�г�Ա��ʼ��Ϊ0����֤���󴴽���һ��״̬
Time1::Time1( int h, int m, int s ) 
{ 
   setTime1( h, m, s ); // validate and set Time1
} // end Time1 constructor


/*****************��������**********************************/
Time1::~Time1() 
{ 
   
} // end Time1 destructor

/*****************set ����**********************************/
// set ��������ʱ��ֵ�����ṩ��Ч����֤
void Time1::setTime1( int h, int m, int s )
{
   setHour( h ); // set private field hour
   setMinute( m ); // set private field minute
   setSecond( s ); // set private field second
} // end function setTime1

// set hour value
void Time1::setHour( int h )
{
   int hour = ( h >= 0 && h < 24 ) ? h : 0; // validate hour
   seconds = hour * 3600 + (seconds%3600)/60 + (seconds%3600)%60;
} // end function setHour

// set minute value
void Time1::setMinute( int m )
{
   int minute = ( m >= 0 && m < 60 ) ? m : 0; // validate minute
   seconds = (seconds/3600)*3600 + m*60 + (seconds%3600)%60;
} // end function setMinute

// set second value
void Time1::setSecond( int s )
{
   int second = ( s >= 0 && s < 60 ) ? s : 0; // validate second
   seconds = (seconds/3600)*3600 + ((seconds%3600)/60)*60 + s;
} // end function setSecond


/*****************get ����**********************************/
// return hour value
int Time1::getHour()
{
   return seconds/3600;
} // end function getHour

// return minute value
int Time1::getMinute()
{
   return (seconds%3600)/60;
} // end function getMinute

// return second value
int Time1::getSecond()
{
   return (seconds%3600)%60;
} // end function getSecond

/*****************���ʺ���**********************************/
void Time1::Print_Universal()
{
	printUniversal();
}
void Time1::Print_Standard()
{
	printStandard();
}

/*****************���ߺ���**********************************/
// print Time1 in universal-Time1 format (HH:MM:SS)
void Time1::printUniversal()
{
   cout << setfill( '0' ) << setw( 2 ) << getHour() << ":"
      << setw( 2 ) << getMinute() << ":" << setw( 2 ) << getSecond();
} // end function printUniversal

// print Time1 in standard-Time1 format (HH:MM:SS AM or PM)
void Time1::printStandard()
{
   cout << ( ( getHour() == 0 || getHour() == 12 ) ? 12 : getHour() % 12 )
      << ":" << setfill( '0' ) << setw( 2 ) << getMinute()
      << ":" << setw( 2 ) << getSecond() << ( seconds/3600 < 12 ? " AM" : " PM" );
} // end function printStandard
