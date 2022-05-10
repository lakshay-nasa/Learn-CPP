/*

Program that uses a structure called point to model a point Define three points, and have the user input    values to two of them Then set the third point equal to the sum of the other two. and display the value of the new point Interaction with the program might look like this:
Enter coordinates for PI :		3	4
Enter coordinates for P2: 		5	7
Coordinates of PI + P2 are: 	8	11

*/

#include <iostream>
using namespace std;

struct point
{
    int x;
    int y;
};

int main(){
    point A,B,C;
    cout << "Enter coordinates for p1: ";
    cin>> A.x >> A.y;
    cout << "Enter coordinates for p2: ";
    cin >> B.x>> B.y;
    
    C.x = A.x + B.x;
    C.y = A.y + B.y;

    cout << "Coordinates of p1 + p2 are: " << C.x << "," << C.y;

    return 0;
}

