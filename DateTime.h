#ifndef DATETIME_H
#define DATETIME_H
#include "Date.h"
#include "Timebank.h"

class DateTime{
	public:
		DateTime(); //ctor
		DateTime(int, int, int, int, int, int); //ctor param
		DateTime(const DateTime&); //cctor
		~DateTime(); //dtor
        DateTime& operator=(const DateTime&);
        
		bool DTsebelum(DateTime); //untuk membandingkan DateTime (digunakan untuk membandingkan jam input dengan jam tutup
        void PrintDateTime();
        void ReadDT();


	private:
		Date date;
		Time time;
};

#endif
