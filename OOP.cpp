/* Object-Oriented Programming

--> Classes and objects are the two main aspects of object-oriented programming.

1. Classes
        ----> It is a user-defined data type, which holds its own attributes and methods, which can be accessed and used by creating an instance of that class.

Types -
i. Private              ---> The class members declared as private can be accessed only by the functions inside the class.
ii. Public              ---> All the class members declared under public will be available to everyone.
iii. Protected          ---> Members cannot be accessed from outside the class, however, they can be accessed in inherited classes.


2. Objects
        ----> An Object is an instance of a Class.

*/

#include <iostream>
using namespace std;

class Person                                                                                    // Base class
{

private:                                                                                        // Access specifier
        int bonus = 800;
                                                                                 
public:                                                                                         // Access specifier
        string name;                                                                            // Attribute
        string status;
        int score;

        int totalScore(){                                                                       // Methods (functon)
                int total = score + bonus;
                return total;
        }
};

int main()
{       
                
        Person p1;                                                                              //create object of Person class
        
        // Access attributes and set values
        p1.name = "Lakshay";
        p1.status = "online";
        p1.score = 1900;
        // p1.bonus = 89;                                                                       // We can't access this directly.

        cout << p1.name << " " << p1.status << " " << "score: " << p1.totalScore() << endl;             // Print attribute values
       

        
        Person p2;                                                                              //create another object of Person class
        
        // Access attributes and set values
        p2.name = "User2";
        p2.status = "offline";
        p2.score = 0;
        // p1.bonus = 89;                                                                       // We can't access this directly.

        cout << p2.name << " " << p2.status << " " << "score: " << p2.totalScore();             // Print attribute values
        return 0;
}
