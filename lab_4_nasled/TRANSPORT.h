#ifndef TRANSPORT_H
#define TRANSPORT_H
#include <iostream>
#include <string.h>
using namespace std;


class TRANSPORT
{
    public:
        TRANSPORT();
        int getYear();
        int getGasTankCapacity();
        virtual void show();
        void setName(string);
        void setYear(int);
        void setGasTankCapacity(int);

    protected:
        string name;
        int year;
        int GasTankCapacity;
    private:

};

#endif // TRANSPORT_H
