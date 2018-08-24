#include "todolist.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
using namespace std;

todolist::todolist()
{

}

void todolist::taskmanagement()
{
    bool loop = true;
    while (loop)
    {
        cout<<"1.Create a Task \n2.Read Task(s) \n3.Exit \nEnter Option: ";
        int op;
        cin>>op;

        if (op == 1)
        {
            char task[100];

            ofstream outfile("todolist.txt", ios::app);

            cout << "\nEnter new task: ";
            cin >> task;

            outfile << task << "\n";

            outfile.close();
        }

        else if (op == 2)
        {
            ifstream infile("todolist.txt");

            char task[100];

            while (!infile.eof())
            {
                infile.getline(task, 100);

                cout << "\n" << task;
            }

            infile.close();

        }

        else if (op == 3)
        {
            loop = false;
        }
    }
}


