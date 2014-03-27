#include "Bank.h"
#include "DateTime.h"
<<<<<<< HEAD
#include "Event.h"
=======
>>>>>>> 07b42b6f6ca4bdbb31456b10eafe6f5681ace60b

using namespace std;

int main()
{
<<<<<<< HEAD
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
=======
    Bank BENI(4);
     BENI.Arrival();
    cout << "setelah arr" << endl;
    BENI.Arrival();
    cout << "setelah arr" << endl;
    BENI.Departure(1);
    cout << "setelah dep" << endl;
    BENI.Arrival();
    cout << "setelah arr" << endl;
    BENI.Departure(2);
    cout << "setelah dep" << endl;

   /* BENI.Arrival();
    cout << "setelah arr" << endl;


    BENI.Arrival();
    cout << "setelah arr" << endl;
    BENI.Arrival();
    cout << "setelah arrii" << endl;
    BENI.Departure(3);
    cout << "SELESAI Arr!"; */
>>>>>>> 07b42b6f6ca4bdbb31456b10eafe6f5681ace60b
    return 0;
}
