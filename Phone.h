#ifndef PHONE_H
#define PHONE_H

#include "Contacts.h"


class Phone : public Contacts
{
    public:
        Phone();
        virtual ~Phone();
        void Make_Phone_Call();

    protected:

    private:
};

#endif // PHONE_H
