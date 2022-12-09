#include "..\include\TRUCK.h"

TRUCK::TRUCK(string n, int y,int g, string h)
{
    name=n;
    group= h;
    GasTankCapacity = g;
    year = y;
}
void TRUCK::setGroup(string h)
{
    group=h;
}
void TRUCK::show()
{
cout << "Name:  " << name << "   Year:  " << year << "Gas tank capacity:  "<< GasTankCapacity << "Vid avto" << group<< endl;}

