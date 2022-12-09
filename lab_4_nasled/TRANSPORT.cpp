#include "TRANSPORT.h"

using namespace std;
TRANSPORT::TRANSPORT()
{

}
int TRANSPORT::getYear()
{
    return year;
}
int TRANSPORT::getGasTankCapacity()
{
    return GasTankCapacity;
}
void TRANSPORT::show()
{
    cout << "Name:  " << name << "   Year:  " << year << "Gas tank capacity:  "<< GasTankCapacity << endl;
}
void TRANSPORT::setName(string n)
{
    name= n;
}

void TRANSPORT::setGasTankCapacity(int g)
{
    GasTankCapacity = g;

}
void TRANSPORT::setYear(int y)
{
    year = y;
}
