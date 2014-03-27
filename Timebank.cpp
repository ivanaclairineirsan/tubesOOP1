#include "Timebank.h"

Time::Time(){
	HH = 0;
	MM = 0;
	SS = 0;
}
Time::Time(int a, int b, int c){
	HH = a;
	MM = b;
	SS = c;
}
Time::Time(const Time& DT){
	HH = DT.HH;
	MM = DT.MM;
	SS = DT.SS;
}

Time::~Time(){}

Time& Time::operator=(const Time& TT){
	HH = TT.HH;
	MM = TT.MM;
	SS = TT.SS;
	return *this;
}

void Time::SetHour(int n){
	HH = n;
}
void Time::SetMinute(int n){
	MM = n;
}
void Time::SetSecond(int n){
	SS = n;
}
int Time::GetHour(){
	return HH;
}
int Time::GetMinute(){
	return MM;
}
int Time::GetSecond(){
	return SS;
}


int Time::TimeCheck(Time time){ /*1 jika this sebelum time, -1 jika this sesudah time, 0 jika this sama dengan time*/
	if (GetHour() < time.GetHour()){
		return 1;
	}
	else if (GetHour() > time.GetHour()){
		return -1;
	}
	else {/*Tahun sama*/
		if (GetMinute() < time.GetMinute()){
			return 1;
		}
		else if (GetMinute() > time.GetMinute()){
			return -1;
		}
		else{/*Tahun dan bulan sama*/
			if (GetSecond() < time.GetSecond()){
				return 1;
			}
			else if (GetSecond() > time.GetSecond()){
				return -1;
			}
			else{/*Tahun dan bulan dan hari sama*/
				return 0;
			}
		}
	}
}
