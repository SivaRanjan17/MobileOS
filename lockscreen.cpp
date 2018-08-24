#include "lockscreen.h"
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <cstdlib>
using namespace std;


lockscreen::lockscreen()
{
    fail=true;
	pass = "PSG";
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	a[3] = 4;

}

void lockscreen::set_intial()
{


    cout <<"\n\aSelect: \n1.PIN \n2.Password";
    int choice;

    cout << "\nEnter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1)
    {
        int b[4];

        cout << "\nEnter your 4-digit PIN: ";

        for (int i = 0; i < 4; i++)
        {
            cin >> b[i];

            a[i] = b[i];
        }

        cout << "\n\aPIN saved";
    }

    else if (choice == 2)
    {
        string tpass;

        cout << "\nEnter your password: ";
        cin >> tpass;

        pass = tpass;

        cout << "\n\aPassword Saved";
    }

    verify();
}

bool lockscreen:: verify()
{
    int p, countver=0;
    cout<<"1.Enter PIN \n2.Enter Password";
    cout << "\nEnter your choice (1 or 2): ";
    cin>>p;

    if(p==1)
    {
        int i=0;
        int b[4];
v1:     cout<<"Enter PIN: ";
        for(i=0; i<4; i++)
        {
            cin>>b[i];
        }

	for(i=0;i<4;i++)
	{
		if(a[i]!=b[i])
		{
			fail=true;
		        if(fail==true)
		        {
		            cout<<"Invalid PIN";
		            countver++;
		            if(countver!=3)
                		goto v1;
		            else
		                exit(1);
		        }
		}
        	else
	            continue;
    	}

    return false;
    }

    if(p==2)
    {
        string c;
v2:     cout<<"Enter Password!";
        cin>>c;
        if(c==pass)
            fail=false;
        else
            fail=true;
        if(fail==true)
        {
            cout<<"Invalid Password";
            countver++;
            if(countver!=3)
                goto v2;
            else
                exit(1);
        }
        if(fail==false)
            return false;

    }
}

void lockscreen::setpin ()
{
	int b[4], flag=0 , c[4] ,i=0;
    	if(a!=NULL)
	{
		l1:cout<<"\nEnter your old PIN: ";
		for(i=0;i<4;i++)
		{
			cin>>b[i];
		}
		for(i=0;i<4;i++)
		{
			if(a[i] == b[i])
				flag = 0;
			else
			{
				flag = 1;
				break;
			}
		}
		if(flag == 1)
			goto l1;
		else if(flag == 0)
		{
			cout<<"\nEnter your new PIN: ";
			for(i=0;i<4;i++)
			{
				cin>>b[i];
			}
l2:			cout<<"\nRetype your PIN: ";
			for(i=0;i<4;i++)
			{
				cin>>c[i];
			}
			for(i=0;i<4;i++)
			{
				if(b[i] == c[i])
					flag = 0;
				else
				{
					flag = 1;
					break;
				}
			}
			if(flag == 1)
			{
				cout<<"PIN's do not match";
				goto l2;
			}
			else if(flag == 0)
			{
				for(i=0;i<4;i++)
				{
					a[i] = b[i];
				}
				cout<<"\nNew PIN is set";
			}
		}
	}
}

void lockscreen::setpass()
{
	string p1,p2,p3;
	if(pass.empty()==false)
	{
l2:		cout<<"\nEnter your old Password: ";
		cin>>p1;
		if(p1 == pass)
		{
l3:			cout<<"\nEnter your new Password: ";
			cin>>p2;

			int plength;
			plength = p2.length();
			if(plength<6)
			{
				cout<<"Password too short, ensure it's 6 characters long!";
				goto l3;
			}

l1:			cout<<"\nRetype your password: ";
			cin>>p3;
			if(p2 == p3)
			{
				pass = p2;
			}
			else
			{
				cout<<"New Password's do not match: ";
				goto l1;
			}
		}
		else
		{
			cout<<"Old Password doesn't match! ";
			goto l2;
		}
	}
}

void lockscreen::change_lock()
{
    cout << "\n1.Change Password \n2.Change PIN";

    int choice;

    cout << "\nEnter your choice(1 or 2): ";
    cin >> choice;

    if (choice == 1)
    {
        setpass();
    }

    else
    {
            setpin();
    }
}

