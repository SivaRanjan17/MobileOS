#ifndef LOCKSCREEN_H
#define LOCKSCREEN_H
#include <string>
#include "lockscreen.h"
using namespace std;



class lockscreen
{
    public:
        lockscreen();
        bool verify();
        void setpin();
        void setpass();
        void set_intial();
        void change_lock();
        int a[4];
        string pass;
        bool fail;
};

#endif // LOCKSCREEN_H
