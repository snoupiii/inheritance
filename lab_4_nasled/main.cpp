#include "include\TRANSPORT.h"
#include "include\Car.h"
#include "include\Truck.h"
using namespace std;
int main()
{
//    Car s1("Kia",1994, 50, "Car");
  //  Car s2("BMW",1993, 55, "Car");
    TRUCK p1("Mercedes-Benz",2000, 100, "Truck");
    TRUCK p2("Mercedes-Benz",2002, 90, "Truck");
    TRANSPORT* ps[4];
    int maxcapacyity=0, i;

    ps[0]=&s1;
    ps[1]=&s2;
    ps[2]=&p1;
    ps[3]=&p2;

    for(i=0; i<4; i++){
        ps[i]-> show();
    }

   /* for(i=0; i<4; i++)
    {
        if(ps[i]->getGasTankCapacity() < ps[i+1]->getGasTankCapacity()){
            maxcapacyity = ps[i+1]­>getGasTankCapacity();
        }

    };
*/
    cout << "Max Capacity:  " << maxcapacyity << endl;
    return 0;
}

