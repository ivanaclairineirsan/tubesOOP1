#include <iostream>
#include "Queue.h"
#include <assert.h>

using namespace std;

Queue::Queue() //ctor
{
	T = new int[100];
	HEAD = 0;
	TAIL = 0;
	T[0] = 0;
	N = 0;
}

Queue::Queue(int x) //ctor param
{
	T = new int[x];
	HEAD = 0;
	TAIL = 0;
	T[0] = 0;
	N = 0;
}

Queue::Queue(const Queue& Q1) //cctor
{
	for(int i = Q1.HEAD; i<= Q1.TAIL; i++)
		T[i] = Q1.T[1];
	HEAD = Q1.HEAD; TAIL = Q1.TAIL;
	N = Q1.N;
}

Queue& Queue::operator=(const Queue& Q1) //operator=
{
    for(int i = Q1.HEAD; i<= Q1.TAIL; i++)
		T[i] = Q1.T[i];
	HEAD = Q1.HEAD; TAIL = Q1.TAIL;
	N = Q1.N;
	return *this;
}

Queue::~Queue(){} //dtor

void Queue::Add(int ID) //untuk memasukkan ID saat arrival, akan masuk ke paling belakang
{
	if(HEAD == 0) //saat mengisi pertama kali
		HEAD = HEAD+1; //head ikut maju saat pertama kali di-Push
	TAIL = TAIL+1; //untuk setiap pengisian, tail akan selalu maju
	T[TAIL] = ID;
	N++;
}

void Queue::Delete() // untuk departure (hilangkan yang paling depan)
{
	//assert(!(IsEmpty()));
	HEAD = HEAD+1; //HEAD akan terus selama elemen belum habis
	if(HEAD > TAIL) // saat HEAD sudah melewati TAIL, berarti elemen terakhir dari queue sudah dikeluarkan
	{
		HEAD = 0;
		TAIL = 0;
	}
	N--;
}

void Queue::DelBack() //untuk jockeying (yang paling belakang dihilangkan)
{
	TAIL = TAIL-1;
	if(HEAD > TAIL)
	{
		HEAD = 0;
		TAIL = 0;
	}
	N--;
}


bool Queue::IsEmpty()
{
	return (HEAD == 0 && TAIL == 0 || N == 0);
}

int Queue::GetNeff(){
    return N;
}

int Queue::GetHeadValue(){
    return T[HEAD];
}
int Queue::GetTailValue(){
    return T[TAIL];
}
void Queue::Print(){
    if (!(IsEmpty())){
        //int i = HEAD;
        cout << "{";
        for(int i = HEAD; i < TAIL; i++){
            cout << T[i] << ", ";
          //  i++;
        }
        cout << T[TAIL] << "}" << endl;
    }
}
