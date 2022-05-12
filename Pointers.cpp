// Pointers ---> Symbolic representation of addresses. The pointer in C++ language is a variable, it is also known as locator or indicator that points to an address of a value.

#include <iostream>
using namespace std;

int main(){
    
    string modelNo = "A922";
    string* ptr = &modelNo;

    cout << modelNo << endl;

    cout << &modelNo << endl;
    
    cout << ptr << endl;

    return 0;
}