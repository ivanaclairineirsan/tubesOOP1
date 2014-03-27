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
    string S;
    cin >> S; //baca masukan jam bank tutup
    string tanggal = S.substr(0,10); //ambil bagian tanggalnya saja(masih berupa string)
	int Hari = (tanggal[0]-'0')*10+(tanggal[1]-'0'); //masukkan bagian hari dari tanggal
	int Bulan = (tanggal[3]-'0')*10+(tanggal[4]-'0'); //masukkan bagian bulan dari tanggal
	int Tahun = (tanggal[6]-'0')*1000+(tanggal[7]-'0')*100+(tanggal[8]-'0')*10+(tanggal[9]-'0'); //masukkan bagian tahun dari tanggal

	string jam = S.substr(11,20); //ambil bagian jamnya saja (masih berupa string)
	int Hour = (jam[0]-'0')*10+(jam[1]-'0');
	int Minute = (jam[3]-'0')*10+(jam[4]-'0');
	int Second = (jam[6]-'0')*10+(jam[7]-'0');

    char kode1;
	cin >> kode1; //ambil bagian kodenya

    DateTime DateTime1(Hari,Bulan,Tahun,Hour,Minute,Second);
    DT = DateTime1;
    kode = kode1;
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
