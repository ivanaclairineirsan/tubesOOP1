#ifndef DATETIMEBANK_H
#define DATETIMEBANK_H

#include "DateTime.h"
#include <iostream>

class Event{
	public :
		Event(); //ctor
		Event(const Event&); //cctor
		Event& operator=(const Event&);
		Event(DateTime, char); //ctor param
		~Event(); //dtor
        void BacaEvent();
		char getkode();
		void PrintEvent();
		DateTime GetDT();

	private:
		DateTime DT;
		char kode;
};

#endif
