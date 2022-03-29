//   A function is a set statement that performs a task. It is is a block of code which only runs when it is called.


#include <iostream>
using namespace std;



void my(string usernmae) {                  // Declaring Function
    cout << "hello! " << usernmae;
}

int main() {
    my("Stranger");                         // Calling Function
    return 0;
}