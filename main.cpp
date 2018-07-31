#include <iostream>

using namespace std;

class NestedClass
{
    public:
        int x;
        class ClassN
        {
            public:
                int y;
        };

        void display()
        {
            ClassN obj2;
            obj2.y = 10;

            cout << "\nY: " << obj2.y;
        }

};

int main()
{
    //ClassN obj1;

    //obj1.y = 10;
    //cout << "\nY: " << obj1.y;

    NestedClass obj2;

    obj2.x = 20;

    cout << "\nX: " << obj2.x;

    obj2.display();

     return 0;
}
