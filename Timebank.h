#ifndef TIMEBANK_H
#define TIMEBANK_H

#include <iostream>

class Time{
	public :
		Time(); //ctor
		Time(int, int, int); //ctor param
		Time(const Time&); //cctor
		~Time(); //dtor
		Time& operator=(const Time&);
		void SetHour(int); //
		void SetMinute(int);
		void SetSecond(int);
		int GetHour();
		int GetMinute();
		int GetSecond();

		int TimeCheck(Time time);
	private :
		int HH;
		int MM;
		int SS;

};
#endif // TIMEBANK_H

