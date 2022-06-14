// Destructor ---> In object Oriented Programming, a destructor (sometimes abbreviated dtor) is a method which is invoked mechanically just before the memory of the object is released.

#include <iostream>
using namespace std;

int count;

class Demo
{

public:
    Demo(string name) // Constructors can take parameters.
    {
        count++;
        cout << " Constructor initialzed for Object number " << count << endl;
    };

    ~Demo() // A destructor takes no arguments and has no return type.
    {
        cout << " Destructer initialzed for Object number " << count << endl;
        count--;
    };
};

int main()
{

    Demo Obj1("Object 1");
    {
        Demo Obj2("Object 2");
        Demo Obj3("Object 3");
    }
    Demo Obj4("Object 4");

    return 0;
};
