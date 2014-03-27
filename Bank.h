#ifndef BANK_H
#define BANK_H

#include "Queue.h"
#include "Event.h"

#include <iostream>


class Bank{
	public:
		Bank(); //ctor

		Bank(int); //ctor param

		//Bank(const Bank&); //cctor

		~Bank(); //dtor


        int NextTeller();
		void Arrival();
        void Departure();
        static int id;

	private :
		Queue *Teller;
		int N;
};

#endif // BANK_H
