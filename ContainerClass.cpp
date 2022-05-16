/* 

Container Class / Containership ---> We can create an object of one class into another and that object will be a member of the class. 

The object that is part of another object is called contained object, 
whereas object that contains another object as its part or attribute is called container object.


Types
1. Homogeneous  ---> A container class is known as homogeneous container when it contains a set of similar objects.
2. Heterogeneous ---> A container class is known as heterogeneous container, when it contains a set of different objects.


Difference b/w Inheritance and Containership --->
Inheritance is the methodology of creating a new class using the properties and methods of an existing class. But, containership is a type of aggregation that allows a class to contain an object of a different class as a member data.


*/


#include <iostream>
using namespace std;

class first
{

public:
    // int a;
    void func1()
    {
        cout << "This is first class " << endl;
    }
};


class second
{
    first f;

public:
    void func2()
    {
        cout << "This is second class " << endl;
        f.func1();
    }
};


int main(){
    second a1;
    a1.func2();

    return 0;
}
