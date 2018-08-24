#include "Browser.h"
#include <iostream>

using namespace std;

Browser::Browser()
{
    No_tabs = 0;
}

Browser::~Browser()
{
    //dtor
}

void Browser::OpenTab()
{
    No_tabs++;

    EnterURL();

    cout << "\nNumber Of Open Tabs: " << No_tabs;
}

void Browser::EnterURL()
{
    string URL;

    cout << "\nEnter URL: ";
    cin >> URL;
}

void Browser::CloseTab()
{
        No_tabs--;
}
