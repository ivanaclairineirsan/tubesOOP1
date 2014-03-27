#ifndef QUEUEBANK_H
#define QUEUEBANK_H
#include <iostream>

class Queue{
	public:
		Queue(); //ctor
		Queue(int); //ctor param
		Queue (const Queue& ); //cctor
		Queue& operator=(const Queue&); //operator=
		~Queue(); //dtor

		// operasi dasar
		void Add(int); //untuk memasukkan ID saat arrival, akan masuk ke paling belakang
		void Delete(); // untuk departure (hilangkan yang paling depan)
		void DelBack(); //untuk jockeying (yang paling belakang dihilangkan)

		//operasi lainnya
		bool IsEmpty();
        int GetNeff();
        int GetHeadValue();
        int GetTailValue();
        void Print();

	private:
		int *T;
		int N;
		int HEAD;
		int TAIL;
};

#endif // QUEUEBANK_H
