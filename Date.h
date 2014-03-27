#ifndef DATEBANK_H
#define DATEBANK_H

#include <iostream>

class Date{
	public:
		Date(); //ctor
		Date(int,int,int); //ctor param
		Date(const Date&); //cctor
		~Date(); //dtor

		Date& operator=(const Date&);
		void SetDay(int);
		void SetMonth(int);
		void SetYear(int);
		int GetDay();
		int GetMonth();
		int GetYear();
		int DateCheck(Date);
		void PrintDate();

	private :
		int D;
		int M;
		int Y;
};

#endif // DATEBANK_H
