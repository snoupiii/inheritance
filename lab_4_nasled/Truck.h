#ifndef TRUCK_H
#define TRUCK_H

#include "TRANSPORT.h"
using namespace std;

class TRUCK : public TRANSPORT
{
    public:
        TRUCK(string, int, int string);
        void setGroup(string);
        void show();
    protected:
    private:
         string group;
};

#endif // TRUCK_H
