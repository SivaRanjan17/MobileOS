#include "Phone.h"
#include <fstream>
#include <iostream>
#include "Contacts.h"
#include <string.h>

using namespace std;

Phone::Phone()
{
    //ctor
}

Phone::~Phone()
{
    //dtor
}

void Phone::Make_Phone_Call()
{
    int choice;
    string pnumber;

    cout << "\n1.Call By Name";
    cout << "\n2.Dial By Number";

    Contacts temp1;

    ifstream infile ("Contacts.dat");

    cout << "\nEnter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1)
    {
        temp1 = temp1.Search_Contact(1);

        if (strcmp(temp1.name, "") == 0)
        {
            cout << "\nPhone: Contact not found";
        }

        else
        {
           cout << "\nCalling " << temp1.name << "...";
        }


    }

    else
    {
        cout << "\nEnter a number: ";
        cin >> pnumber;

        temp1 = temp1.Search_Contact(2); ///Avoid Redundant, number entry

        if (strcmp(temp1.number, "") == 0)
        {
            cout << "\nCalling " << pnumber << "...";

            ///Give choice for saving new contact
        }

        else
        {
           cout << "\nCalling " << temp1.name << "...";
        }


    }
}
