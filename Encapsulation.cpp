// Encapsulation --->

#include <iostream>
using namespace std;

class Employee
{
private:                                                        // Encapsulated the details of employee and username method using private
    string name;
    string team; 
    int salary;
    string username;

    void userEnrollment(string name, string team)
    {
        username = name[2, 5] + team[0, 3] + 00;
    }

public:
    void setDetails(string n, string t, int s)                  // The public setDetails() method take parameters and assign it to private attributes.
    { 

        name = n;
        team = t;
        salary = s;

        

    }

    string getUsername(){
        return username;
    }
};

int main()
{

    Employee e1;
    e1.setDetails("Liancho", "DevRel", 50000);
    cout << e1.getUsername();
    return 0;
}