#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include "Mobile_OS.h"

using namespace std;

int main()
{

   Mobile_OS N1100;


   while (true)
   {
       if (N1100.lock())
       {
           cout << "\nPhone Locked";
       }

        else
        {
            N1100.Main_Menu();
        }
    }

    cout << "\nHello world!" << endl;
    return 0;
}
