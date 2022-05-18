#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    static int rollNo;

    // void setName(name){
    //     cin >> name;
    // }

    void getData(void)
    {   rollNo++;
        cout << name << endl << rollNo << endl;
    };

};


int Student:: rollNo;

int main()
{

    Student s1, s2, s3;
    s1.name = "Hun";
    s1.getData();
    
    s2.name = "Yun";
    s2.getData();

    s3.name = "Win";
    s3.getData();

    return 0;
}