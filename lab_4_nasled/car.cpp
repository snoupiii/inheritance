#include "..\include\car.h"
using namespace std;
Car::Car(string n, int y,int g, string h)
{
    name= n;
    group= h;
    GasTankCapacity = g;
    year = y;
}

void Car::setGroup(string h)
{
    group=h;
}
void Car::show()
{
    cout << "Name:  " << name << "   Year:  " << year << "Gas tank capacity:  "<< GasTankCapacity << "Vid avto" << group<< endl;
}
