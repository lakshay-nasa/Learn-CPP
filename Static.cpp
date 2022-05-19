/* 

Static Members --->
 We use the static keyword to define the static data member or static member function inside and outside of the class.

A static member has certain special characteristics. These are:
    1. Only one copy of that member is created for the entire class and is shared by all the objects of that class, no matter how many objects are created.
    2. It is visible only within the class, but its lifetime is the entire program.
    3. It is initialized to zero when the first object of its class is created.


 Static Function --->
 Static function of a class in C++ cannot access non-static variables, but, it can access static variable only. However, non-static member function can access static and non-static variable both.

*/

#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    static int rollNo;                                                  // Static Data Variable

    void setData()
    {
        cout << endl
             << "Enter Your Name ";
        cin >> name;
    };

    void getData(void)
    {
        rollNo++;
        cout << endl
             << name << " your Roll No is " << rollNo << endl;
    };

    static void passGen()                                               // Static Method
    {
        // string Student::name;
        cout << "Your usercode is "
             << "$#&" << rollNo << endl;
    }
};

// int Student::rollNo = 1;
int Student::rollNo;

int main()
{

    Student s1, s2, s3, s4;
    s1.setData();
    s1.getData();
    s1.passGen();

    s2.setData();
    s2.getData();
    s2.passGen();

    s3.setData();
    s3.name = "Winny";                                                  // This sets up the global variable(name). Thus overwirite the function variable (name).
    s3.getData();
    s3.passGen();

    return 0;
}