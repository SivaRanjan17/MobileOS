#include <iostream>
#include "calculator.h"
using namespace std;

calculator::calculator()
{
	a = 0;
	b = 0;
}

void calculator::Execute()
{
	int choice;
	cout<<"1.Add \n2.Subtract \n3.Divide \n4.Multiply \n5.Percentage \n6.Intergration \n7.Derivation \nEnter Choice: ";
	cin>>choice;
	if(choice==1)
    {
        cout<<"Enter A: ";
        cin>>a;
        cout<<"Enter B: ";
        cin>>b;
        add(a,b);
    }
    if(choice==2)
    {
        cout<<"Enter A: ";
        cin>>a;
        cout<<"Enter B: ";
        cin>>b;
        Subtract(a,b);
    }
    if(choice==3)
    {
        cout<<"Enter A: ";
        cin>>a;
        cout<<"Enter B: ";
        cin>>b;
        divide(a,b);
    }
	if(choice==4)
    {
        cout<<"Enter A: ";
        cin>>a;
        cout<<"Enter B: ";
        cin>>b;
        multiply(a,b);
    }
	if(choice==5)
    {
        cout<<"Enter A: ";
        cin>>a;
        cout<<"Enter B: ";
        cin>>b;
        percent(a,b);
    }
	if(choice==6)
    {
        intergration();
    }
	if(choice==7)
    {
        derivation();
    }


}

float calculator::add(float a, float b)
{
    float c;
    c=a+b;
    cout<<c;
    float n;
    cout<<"\n1.Add answer \n2.Return to Menu \nEnter Choice: ";
    cin>>n;
    if(n==1)
    {
        cout<<c<<" + ";
        cin>>b;
        add(c,b);
    }
    else
        calculator();

}

float calculator::Subtract(float a, float b)
{
    float c;
    c=a-b;
    cout<<c;
    float n;
    cout<<"\n1.Subtract answer \n2.Return to Menu \nEnter Choice: ";
    cin>>n;
    if(n==1)
    {
        cout<<c<<" - ";
        cin>>b;
        Subtract(c,b);
    }
    else
        calculator();
}

float calculator::divide(float a, float b)
{
    try
    {
        if (b==0)
        {
            throw "ERROR";
        }

        else
        {
                float c;
                c=a/b;
                cout<<c;
                float n;
                cout<<"\n1.Divide answer \n2.Return to Menu \nEnter Choice: ";
                cin>>n;
                if(n==1)
                {
                    cout<<c<<" / ";
                    cin>>b;
                    divide(c,b);
                }
                else
                    calculator();
        }
    } catch (...) {
        cout << "Division by zero not defined\n";
        calculator();
    }

}

float calculator::multiply(float a, float b)
{
        float c;
        c=a*b;
        cout<<c;
        float n;
        cout<<"\n1.Multiply answer \n2.Return to Menu \nEnter Choice: ";
        cin>>n;
        if(n==1)
        {
            cout<<c<<" - ";
            cin>>b;
            multiply(c,b);
        }
        else
            calculator();
}

float calculator::percent(float a, float b)
{
    int c;
    c = (((a/b)*100));
    cout<<c<<"%";
}


void calculator::intergration()
{
    cout<<"Enter any constant to the variable (if none, enter 1): ";
    cin>>a;

    char var;
    cout<<"Enter the variable to be integrated: ";
    cin>>var;

    cout<<"Enter the power of that variable: ";
    cin>>b;

    b=b+1;
    a= b/a;

    cout << "The integral is: " << a << "" << var << "^" << b;
    cout<<"\n";
    calculator();

}

void calculator::derivation()
{
    cout<<"Enter any constant to the variable (if none, enter 1): ";
    cin>>a;

    char var1;
    cout<<"Enter the variable to be derived: ";
    cin>>var1;

    cout<<"Enter the power of that variable: ";
    cin>>b;

    b=b-1;
    a= b*a;

    cout << "The derivative is: " << a << "" << var1 << "^" << b;
    cout<<"\n";
    calculator();

}
