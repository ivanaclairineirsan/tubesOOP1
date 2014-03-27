#include "DateTime.h"
using namespace std;

DateTime::DateTime(){

}
DateTime::DateTime(int a, int b, int c, int d, int e, int f){
	Date date1(a, b, c);
	date = date1;
	Time time1(d, e, f);
	time = time1;
}
DateTime::DateTime(const DateTime& DT){
	date = DT.date;
	time = DT.time;
}
DateTime::~DateTime(){}

DateTime& DateTime::operator=(const DateTime& DT){
	date = DT.date;
	time = DT.time;
	return *this;
}

bool DateTime::DTsebelum(DateTime DT){ /*true jika this sebelum DT*/
	if (date.DateCheck(DT.date) == 1){
		return true;
	}
	else if (date.DateCheck(DT.date) == -1)
		return false;
	else{
		if (time.TimeCheck(DT.time) == 0 | time.TimeCheck(DT.time) == 1)
			return true;
		else
			return false;
	}

}


void DateTime::PrintDateTime()
{
    cout << date.GetDay() << ':' << date.GetMonth() << ':' << date.GetYear() << ';' << time.GetHour() << ':' << time.GetMinute() << ':' << time.GetSecond() << endl;
}

void DateTime::ReadDT()
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

	Date Date1(Hari,Bulan,Tahun);
	date = Date1;

	Time Time1(Hour,Minute,Second);
	time = Time1;
}
