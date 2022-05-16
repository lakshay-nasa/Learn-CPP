// Pointers ---> Symbolic representation of addresses. The pointer in C++ language is a variable, it is also known as locator or indicator that points to an address of a value.


// Difference b/w Pointer(*) and Reference(&) 
// Pointer ---> A pointer can be initialized to any value anytime after it is declared. It can be assigner to NULL.
//  Reference(constant pointer) ---> A reference is an alias for already existing variable. Once a reference is initialized to a variable, it cannot be changed to refer to another variable. It must be initialized when a value is declared. It cannot be NULL.


#include <iostream>
using namespace std;

int main()
{

    string modelNo = "A922";    // We can also use int* for int values. ---> A pointer variable points to a data type (like int or string) of the same type, and is created with the * operator.
    string *ptr = &modelNo;     // It stores the address of modelNo; & ---> address  *---> Derefrence operator

    // string* ptr;
    // ptr = &modelNo;

    cout << modelNo << endl; // It prints model No A922

    cout << "The address of modelNo is " << &modelNo << endl; // It prints the address of modelNo

    cout << "The address of modelNo is " << ptr << endl; // It prints the address of modelNo 

    // Derefrence Operator
    cout << "The value at address " << ptr << " is " << *ptr << endl;
    cout << endl;


    // Double Pointer or Pointer to Pointer

    string** ptr2;
    ptr2 = &ptr;

    cout << "The value of ptr2 is " << ptr2 << endl;
    cout << "The address(value) at ptr is " << *ptr2 << endl;
    cout << "The value at address " << ptr << " is " << **ptr2 << endl;



    return 0;
}