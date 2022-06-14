// Inheritance is one key feature of Object Oriented Programming. It allows us to create a new class (derived class) from an existing class (base class). Using inheritance, it is possible to inherit attributes and methods from one class to another.

#include <iostream>
using namespace std;

class Company
{ // Base Class
public:
    string C_name = "A-one";

private:
    string C_data;
    int cashflow;

protected:
    string numberOfemployees;
    int numberOfDeapartments = 52;
};

class Employee : Company
{ // Derived Class

public:
    string E_name;
    string E_id;


private:
    int E_salary;


public:
    void details()
    {
        cout << "Employee details" << endl
             << endl;
        cout << "Company  " << C_name << endl;
        // cout << "Comapny Cash Flow" << cashflow << endl;       //Cashflow is private member.
        cout << "Employee Name " << E_name << endl;
        cout << "Employee id " << E_id << endl;
        cout << "Number of Departments " << numberOfDeapartments << endl;
    };
};

int main()
{
    Employee E1;
    E1.E_name = "E1";
    E1.E_id = "A01";
    E1.details();

    return 0;
};
