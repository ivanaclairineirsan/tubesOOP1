#include "Bank.h"
#include "DateTime.h"

using namespace std;

int main()
{
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
    return 0;
}
