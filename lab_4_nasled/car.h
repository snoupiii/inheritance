#ifndef CAR_H
#define CAR_H
#include "TRANSPORT.h"
using namespace std;

class Car : public TRANSPORT
{
    public:
        Car(string , int, int string);
        void setGroup(string);
        void show();
    protected:
    private:
        string group;
};


#endif // CAR_H
