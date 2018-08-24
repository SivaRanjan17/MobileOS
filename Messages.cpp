#include "Messages.h"
#include <fstream>
#include <iostream>
#include "Contacts.h"
#include <string.h>

Messages::Messages()
{
    //ctor
}

Messages::~Messages()
{
    //dtor
}

void Messages::New_Message()
{
    int choice;
    string pnumber;

    cout << "\n1.Message By Name";
    cout << "\n2.Message By Number";

    Contacts temp1;

    ifstream infile ("Contacts.dat");

    cout << "\nEnter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1)
    {
        temp1 = temp1.Search_Contact(1);

        if (strcmp(temp1.name, "") == 0)
        {
            cout << "\nMessages: Contact not found";
        }

        else
        {
            cout << "\nSelected: " << temp1.name;
            string message;
            cout << "\nType message...:";
            cin >> message;

            cout << "\nSent.";

            ofstream msgfile("textmsg.txt", ios::app);

            msgfile << temp1.name << ": " << message << "\n";

            msgfile.close();
        }


    }

    else
    {
        cout << "\nEnter a number: ";
        cin >> pnumber;

        temp1 = temp1.Search_Contact(2); ///Avoid Redundant, number entry

        if (strcmp(temp1.number, "") == 0)
        {
            cout << "\nSelected: " << pnumber;
            string message;
            cout << "\nType message...:";
            cin >> message;

            cout << "\nSent.";

            ofstream msgfile("textmsg.txt", ios::app);

            msgfile << pnumber << ": " << message << "\n";

            msgfile.close();
        }

        else
        {
           cout << "\nSelected: " << temp1.name;
            string message;
            cout << "\nType message...:";
            cin >> message;

            cout << "\nSent.";

            ofstream msgfile("textmsg.txt", ios::app);

            msgfile << temp1.name << ": " << message << "\n";

            msgfile.close();
        }


    }
}

void Messages::View_Messages()
{
    ifstream infile ("textmsg.txt");

    char message[100];

    cout << "\nSent Messages: ";

    while (!infile.eof())
    {
        infile.getline(message, 100);
        cout << "\n" << message;
    }
}
