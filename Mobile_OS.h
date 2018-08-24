#ifndef MOBILE_OS_H
#define MOBILE_OS_H
#include "Contacts.h"
#include "Phone.h"
#include "Setting.h"
#include "Messages.h"
#include "Music.h"
#include "calculator.h"
#include "Browser.h"
#include "todolist.h"
#include "clock.h"
#include "lockscreen.h"

class Mobile_OS
{
    public:
        Mobile_OS();
        virtual ~Mobile_OS();
        bool lock();
        int Main_Menu();
        void MessagesOS();
        void PhoneOS();
        void ContactsOS();
        void SettingsOS();
        void MusicOS();
        void CalculatorOS();
        void BrowserOS();
        void ToDoListOS();
        void ClockOS();
        void Others();
        bool lockstatus;


    protected:

    private:
        lockscreen L;
        Contacts C;
        Phone P;
        Messages M;
        Settings S;
        Music Mu;
        calculator Ca;
        Browser B;
        todolist TDL;
        Clock Cl;
        int battery;

};

#endif // MOBILE_OS_H
