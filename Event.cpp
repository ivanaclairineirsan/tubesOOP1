#include "Event.h"
#include "DateTime.h"
#include <sstream>
#include <string.h>
using namespace std;

Event::Event()	//ctor
{

}

Event::Event(const Event& E) //cctor
{
    DT = (E.DT);
    kode = E.kode;
}

Event::Event(DateTime DT, char kode) //ctor param
{
    this->DT = (DT);
    this->kode = kode;
}

Event& Event::operator=(const Event& E)
{
    DT = E.DT;
    kode = E.kode;
    return *this;
}

Event::~Event() //dtor
{

}

void Event::BacaEvent()
//dibuat dengan asumsi user selalu memasukkan format yang benar, yaitu MM-DD-YY;HH;JJ:MM:SS C (int)
{
    DT.ReadDT();
/*
    char kode1;
	cin >> kode1; //ambil bagian kodenya

    kode = kode1;*/
    cin >> kode;
}

char Event::getkode()
{
    return kode;
}

void Event::PrintEvent()
{
    DT.PrintDateTime();
    cout << kode << endl;
}

DateTime Event::GetDT()
{
    return DT;
}
