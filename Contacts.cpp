#include "Contacts.h"
#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>

using namespace std;

Contacts::Contacts()
{
    strcpy(name, "");
    strcpy(number, "");
}

Contacts::~Contacts()
{
    //dtor
}

void Contacts::Add_Contact()
{
    cout << "\nEnter the name of the contact: ";
    cin >> name;

    int n;

    cout << "\nEnter phone number #" /*i + 1*/ << ": ";
    cin >> number;

    ofstream outfile ("Contacts.dat",ios::app | ios::binary);

    outfile.write(reinterpret_cast<char *>(this), sizeof(*this));

    outfile.close();

}

Contacts Contacts::Search_Contact(int sel)
{
    string tname;
    string tnum;
    int choice;

    int flag = 1;

    if (sel == 0)
    {
        cout << "\n1.Search By Name";
        cout << "\n2.Search By Number";
        cout << "\nEnter your choice (1 or 2): ";
        cin >> choice;
    }

    else if (sel == 1)
    {
        choice = 1;
    }

    else
    {
        choice = 2;
    }

    Contacts temp;

    ifstream infile ("Contacts.dat", ios::binary);

    if (choice == 1)
    {
        cout << "\nEnter name of contact: ";
        cin >> tname;

        while (!infile.eof())
        {
            flag = 1;

            infile.read(reinterpret_cast<char *>(&temp), sizeof(temp));
            cout << "\n" << temp.name;

            if (tname.compare(temp.name) == 0)
            {
                cout << "\nContact Found!";
                infile.close();
                return temp;
            }

            else
            {
                flag = 0;
            }


        }

        if (flag == 0)
        {
            cout << "Contacts: Contact not found!";
            strcpy(temp.name, "");
            strcpy(temp.number, "");
            infile.close();
            return temp;

        }
    }

        else
        {
            cout << "\nEnter Number of contact: ";
            cin >> tnum;

            while (!infile.eof())
            {
                flag = 1;
                infile.read(reinterpret_cast<char *>(&temp), sizeof(temp));

                if (tnum.compare(temp.number) == 0)
                {
                    cout << "\nContact Found!";
                    infile.close();
                    return temp;
                }

                else
                {
                    flag = 0;
                }


            }

            if (flag == 0)
            {
                cout << "Contact: Contact not found!";
                strcpy(temp.name, "");
                strcpy(temp.number, "");
                infile.close();
                return temp;
            }

        }

}

void Contacts::Display_Contacts()
{
    ifstream infile("Contacts.dat", ios::binary);

    Contacts temp;

    while (!infile.eof())
    {
        infile.read(reinterpret_cast<char *>(&temp), sizeof(temp));
        cout << "\nName: " << temp.name << "Num: " << temp.number;
    }
}

void Contacts::Delete_Contact()
{
    int choice;

    cout << "\n1.Delete single contact";
    cout << "\n2.Delete all contacts";

    cout << "\nEnter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1)
    {
        Contacts dtemp, ttemp;

        dtemp =  dtemp.Search_Contact(1);

        ifstream infile("Contacts.dat", ios::binary);

        ofstream outfile("New.dat", ios::binary);

        while (!infile.eof())
        {
            infile.read(reinterpret_cast<char *>(&ttemp), sizeof(ttemp));

            if (strcmp(ttemp.name, dtemp.name) == 0 || strcmp(ttemp.number, dtemp.number) == 0 )
            {
                continue;
            }

            outfile.write(reinterpret_cast<char *>(&ttemp), sizeof(ttemp));
        }

        infile.close();
        outfile.close();

        remove("Contacts.dat");
        rename("New.dat", "Contacts.dat");
    }

    else if(choice == 2)
    {
        ///Ask for reconfirmation
        remove("Contacts.dat");
        cout << "\nAll contacts deleted!";
    }
}



