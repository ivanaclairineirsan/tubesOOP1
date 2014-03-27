#include "Bank.h"
#include "Queue.h"
#include <iostream>
using namespace std;

int Bank::id = 0;

Bank::Bank() //saat ctor param, defaultnya adalah 4
{
    Teller = new Queue[4];
    N = 4;
} //ctor

Bank::Bank(int n) //ctor param
{
    N = n;
    Teller = new Queue[N];
}

Bank::~Bank(){} //dtor


int Bank::NextTeller(){ //mengecek teller untuk antrian berikutnya
    int j = 1;
    int minteller = 0;

    while(j < N){
        if (Teller[j].GetNeff() < Teller[minteller].GetNeff())
            minteller = j;
        j++;
    }
    return minteller;
}

void Bank::Arrival(){

    int T = NextTeller();
    id = id + 1;
    Teller[T].Add(id);

    // setelah penambahan, di-print antrian Teller-nya

    for(int i = 0; i < N; i++){
        if (!(Teller[i].IsEmpty()))
            std::cout << "Q[" << i << "] = ";
        Teller[i].Print();
    }

}

void Bank::Departure(){
    int out_id;
    cin >> out_id;
    // memeriksa Teller yang diantri oleh out_id
    bool found = false;
    int i = 0;
    while (!(found) && i < N){
        if (Teller[i].GetHeadValue() == out_id)
        {
            found = true;
            Teller[i].Delete();
        }
        else
            i++;
    }

    int j = 0;

    while (j < N){
        if (!(Teller[j].IsEmpty()))
            std::cout << "Q[" << j << "] = ";
        Teller[j].Print();
        j++;
    }
}


