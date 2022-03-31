/* Object-Oriented Programming

----> Classes and objects are the two main aspects of object-oriented programming.

1. Classes
        i. Private
        ii. Public
        iii. Protected
        

2. Objects

*/

#include <iostream>
using namespace std;

class Person {
        public:
        
        string name;
        string status;
};

int main(){
        Person p1;
        p1.name = "Lakshay";
        p1.status = "online";

        cout << p1.name << " " << p1.status;
        return 0;
}
