#include <iostream>
using namespace std;

int main()
{

    // Integers

    int x = 516;
    cout << x << " is of type: " << typeid(x).name()<<endl;


    // char

    char y = 'Hell';
    cout << y << " is of type: " << typeid(y).name()<<endl;


    // Boolean

    bool z = true;
    cout << z << " is of type: " << typeid(z).name()<<endl;
    cout<< y;


    // Floating Point ---> It stores up to 7 decimal points and rounds off the rest of the digits.

    float f_p = 77.723904;
    cout << f_p << " is of type: " << typeid(f_p).name()<<endl;


    //Double floating Point ---> It can store up to 15 decimal points without rounding them off.

    double d_f_p = 5.57878909890767;
    cout << d_f_p << " is of type: " << typeid(d_f_p).name()<<endl;


    // Void ---> 

    // Wide Char --->


    return 0;
}