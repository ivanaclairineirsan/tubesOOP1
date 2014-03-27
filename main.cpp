#include "Bank.h"
#include "DateTime.h"
#include "Event.h"

using namespace std;

int main()
{
    int jumlahTeller;
    cin >> jumlahTeller; //baca masukan jumlah teller
    Bank BENI(jumlahTeller);
    DateTime WaktuTutup;
    WaktuTutup.BacaJamTutupBank();
    Event Event2;
    Event2.BacaEvent();
    while (Event2.GetDT().DTsebelum(WaktuTutup) == true)
	{
	    if(Event2.getkode() == 'A')
            BENI.Arrival();
        else
            BENI.Departure();
        Event2.BacaEvent(); //test baca masukan
	}
    return 0;
}
