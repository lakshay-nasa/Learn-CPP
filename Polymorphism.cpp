// Polymorphism ----> Polymorphism means "many forms", we can define polymorphism as the ability of a message to be displayed in more than one form.

    
    
    // Best and simple example for Polymorhism is ADD function --->


#include <iostream>
using namespace std;


int main(){
    int n1 = 5;
    int n2 = 4;

    string s1 = "Hello! ";
    string s2 = "Stranger";

    cout << " ADD 1st form - " << " We can add two int 5 and 4 using '+'. " << " ------>   5 + 4 = " << 5+4 << endl;
    cout << " ADD another form - " << " We can add two strings Hello and Stranger using '+'. " << "------>  Hello! + Stranger = " << s1 + s2 << endl;

}