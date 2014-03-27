#include "Date.h"
#include <iostream>
using namespace std;

Date::Date(){
	D = 0;
	M = 0;
	Y = 0;
}
Date::Date(int a, int b, int c){
	D = a;
	M = b;
	Y = c;
}
Date::Date(const Date& DT){
	D = DT.D;
	M = DT.M;
	Y = DT.Y;
}
Date::~Date(){}

void Date::PrintDate()
{
    cout << D << ':' << M << ':' << Y << endl;
}

Date& Date::operator=(const Date& DD){
	D = DD.D;
	M = DD.M;
	Y = DD.Y;

	return *this;
}

void Date::SetDay(int n){
	D = n;
}
void Date::SetMonth(int n){
	M = n;
}
void Date::SetYear(int n){
	Y = n;
}
int Date::GetDay(){
	return D;
}
int Date::GetMonth(){
	return M;
}
int Date::GetYear(){
	return Y;
}
int Date::DateCheck(Date date){ /*1 jika this sebelum date, -1 jika this sesudah date, 0 jika this sama dengan date*/
	if (GetYear() < date.GetYear()){
		return 1;
	}
	else if (GetYear() > date.GetYear()){
		return -1;
	}
	else {/*Tahun sama*/
		if (GetMonth() < date.GetMonth()){
			return 1;
		}
		else if (GetMonth() > date.GetMonth()){
			return -1;
		}
		else{/*Tahun dan bulan sama*/
			if (GetDay() < date.GetDay()){
				return 1;
			}
			else if (GetDay() > date.GetDay()){
				return -1;
			}
			else{/*Tahun dan bulan dan hari sama*/
					return 0;
			}
		}
	}
}
