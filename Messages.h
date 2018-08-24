#ifndef MESSAGES_H
#define MESSAGES_H

#include "Contacts.h"


class Messages : public Contacts
{
    public:
        Messages();
        virtual ~Messages();
        void New_Message();
        void View_Messages();
};

#endif // MESSAGES_H
