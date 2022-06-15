// Template -->

#include <iostream>
using namespace std;

template <class a, class b>
class A
{
public:
    a a1;
    b b1;

    void display()
    {
        cout << "value of a1 is " << a1 << endl;
        cout << "value of b1 is " << b1;
    };
};

int main()
{

    A<int, double> obj1;
    obj1.a1 = 12;
    obj1.b1 = 2.2;
    obj1.display();

    return 0;
}
