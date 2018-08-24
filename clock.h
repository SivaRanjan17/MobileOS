#include<iostream>
#include<ctime>
using namespace std;
class Clock
{
        public:
        void Display_time()
        {
                time_t now = time(0);
                tm *t = localtime(&now);

                cout << "Time: "<< t->tm_hour << ":";
                cout <<  t->tm_min << ":";
                cout <<  t->tm_sec << endl;
        }
        void Display_date()
        {
                time_t now = time(0);

                tm *d = localtime(&now);

                cout << "Year: " << 1900 + d->tm_year<<endl;
                cout << "Month: "<< 1 + d->tm_mon<< endl;
                cout << "Day: "<<  d->tm_mday << endl;
        }

};


