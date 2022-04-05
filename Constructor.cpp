// Constructor ---> A constructor is a special method that is called automatically when an object is created.

#include <iostream>
using namespace std;

class Staff                                             // The class
{
public:                                                 // Access specifier
    Staff(string name, string team, int Progress)       //We can Also specify constructor without parameters
    {
        cout << "Hello! " << name << endl << "Welcome To Team " << team << endl << "Your Progress is " << Progress << "%" << endl;
    }
};

int main()
{
    Staff p1("Xoro", "Beta", 70);                       //create object of Staff class and calls the constructor
    Staff p2("Zia", "Omega", 72);                       //create another object of Staff class and calls the constructor with different values

    return 0;
}