// Mini Calculator using Switch Statements


#include <iostream>
using namespace std;

int main(){
char oper;
double Fnumber, Snumber;
double result;

cout << "Enter Operator ( only use +, -, *, / )" << endl;
cin >> oper;

cout << "Enter First Number " << endl;
cin >> Fnumber;

cout << "Enter Second Number " << endl;
cin >> Snumber;


switch(oper){
    case('+'):
    result = Fnumber + Snumber;
    break;

    case('-'):
    result = Fnumber - Snumber;
    break;

    case('*'):
    result = Fnumber * Snumber;
    break;
    
    case('/'):
    result = Fnumber / Snumber;
    break;

}
    
cout << endl << "Result ---> " << Fnumber << " " << oper << " " << Snumber << " = " << result;

return 0;
}