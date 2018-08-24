#include "Mobile_OS.h"
#include "Contacts.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <chrono>
#include <thread>


using namespace std;


///Clrscr on opening apps

Mobile_OS::Mobile_OS()
{
    battery = 100;
    lockstatus = true;
}

Mobile_OS::~Mobile_OS()
{
    //dtor
}

bool Mobile_OS::lock()
{
    if (lockstatus == true)
    {
        lockstatus = L.verify();
        return lockstatus;
    }

    else
    {
        lockstatus = false;
        return lockstatus;
    }
    //eturn lockstatus;
}

int Mobile_OS::Main_Menu()
{
    cout << "\n\nBattery: " << battery << "%";
    cout << "\n1.Messages            2.Phone            3.Browser" << "\n\n";
    cout << "4.Camera                5.Contacts         6.Settings" << "\n\n";
    cout << "7.Music                 8.Calculator       9.To Do List" << "\n\n";
    cout << "10.Clock                11.Others" << "\n\n";

    int choice;

    cout << "\nOpen app: ";
    cin >> choice;

    if (choice >=1 && choice <= 9)
    {
        battery--;
    }

    if (choice == 1)
    {
        this->MessagesOS();
    }

    else if (choice == 2)
    {
        this->PhoneOS();
    }

    else if (choice == 3)
    {
        this->BrowserOS();

    }
/*
    else if (choice == 4)
    {
        this->Camera();
    }
*/
    else if (choice == 5)
    {
        this->ContactsOS();
    }

    else if (choice == 6)
    {
        this->SettingsOS();
    }

    else if (choice == 7)
    {
        this->MusicOS();
    }

    else if (choice == 8)
    {
        this->CalculatorOS();
    }

    else if (choice == 9)
    {
        this->ToDoListOS();
    }

    else if (choice == 10)
    {
        this->ClockOS();
    }

    else if (choice == 11)
    {
        this->Others();
    }
}


void Mobile_OS::MessagesOS()
{
    int loop = true;
    while(loop)
    {
        cout << "1.New Message\n2.View Messages\n3.Main Menu";

        int choice;

        cout << "\nEnter your choice(1, 2, or 3): ";
        cin >> choice;

        if (choice == 1)
        {   //system("CLS");
            M.New_Message();
        }

        else if (choice == 2)
        {
            //system("CLS");
            M.View_Messages();
        }

        else if (choice == 3)
        {
            loop = false;
        }
    }
}

void Mobile_OS::PhoneOS()
{
    P.Make_Phone_Call();
}

void Mobile_OS::ContactsOS()
{
    int choice;
    int loop = true;
    while(loop)
    {
        cout << "\n1.Add new contact";
        cout << "\n2.View contacts";
        cout << "\n3.Delete contacts";
        cout << "\n4.Main Menu";



        cout << "\nEnter your choice(1,2, or 3): ";
        cin >> choice;

        if (choice == 1)
        {
            C.Add_Contact();
        }

        else if (choice == 2)
        {
            C.Display_Contacts();
        }

        else if (choice == 3)
        {
            C.Delete_Contact();
        }

        else if (choice == 4)
        {
            loop = false;
        }
    }
}

void Mobile_OS::SettingsOS()
{
    S.Options();
}

void Mobile_OS::MusicOS()
{
    int choice;

    int loop = true;
    while(loop)
    {
        cout << "\n1.Play song";
        cout << "\n2.Add new song";
        cout << "\n3.Delete song";
        cout << "\n4.Main Menu";

        cout << "\nEnter your choice (1,2, or 3): ";
        cin >> choice;

        if (choice == 1)
        {
            string song;

            cout << "\nEnter name of song: ";
            cin >> song;
            Mu.play(song);
        }

        else if (choice == 2)
        {
            string song;
            cout << "\nEnter name of song: ";
            cin >> song;
            Mu.add(song);
        }

        else if (choice == 3)
        {
            string song;
            cout << "\nEnter name of song: ";
            cin >> song;
            Mu.Delete(song);

        }

        else if (choice == 4)
        {
            loop = false;
        }
    }
}

void Mobile_OS::CalculatorOS()
{
    Ca.Execute();

}

void Mobile_OS::BrowserOS()
{
    int loop = true;
    while(loop)
    {
        cout << "\n1.Open new tab"; ///Tab could be defined as a class
        cout << "\n2.Close Tab";
        cout << "\n3.Main Menu";

        int choice;

        cout << "\nEnter your choice(1 or 2): ";
        cin >> choice;

        if (choice == 1)
        {
            B.OpenTab();
        }

        else if(choice == 2)
        {
            B.CloseTab();
        }

        else if (choice == 3)
        {
            loop = false;
        }
    }
}

void Mobile_OS::Others()
{
    int loop = true;
    while(loop)
    {
        cout << "\n1.Lock phone";
        cout << "\n2.Switch Off";
        cout << "\n3.Mute Phone";
        cout << "\n4.Main Menu";

        int choice;

        cout << "\nEnter your choice(1, 2, or 3): ";
        cin >> choice;

        if (choice == 1)
        {
            lockstatus = true;
            loop = false;
        }

        else if (choice == 2)
        {
            system("CLS");

            cout << "SWITCHING OFF...";

            _sleep(500);

            exit(0);
        }

        else if (choice == 3)
        {
            cout << "\nPhone Muted!";
            battery--;
        }

        else if (choice == 4)
        {
            loop = false;
        }
    }
}

void Mobile_OS::ToDoListOS()
{
    TDL.taskmanagement();
}

void Mobile_OS::ClockOS()
{
    int choice;

    cout << "\n1.Display Time \n2.Display Date";
    cin >> choice;

    if (choice == 1)
    {
        Cl.Display_time();
    }

    else if (choice == 2)
    {
        Cl.Display_date();
    }
}
