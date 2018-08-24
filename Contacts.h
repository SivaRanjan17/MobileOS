#ifndef CONTACTS_H
#define CONTACTS_H

#include <iostream>
#include <string>

using namespace std;


class Contacts
{
    public:
        /** Default constructor */
        Contacts();
        /** Default destructor */
        virtual ~Contacts();
        void Add_Contact();
        Contacts Search_Contact(int = 0);
        void Display_Contacts();
        void Delete_Contact();

        char name[100]; //!< Member variable "name"
        char number[14];//[5]; //!< Member variable "number[5]"
};

#endif // CONTACTS_H
