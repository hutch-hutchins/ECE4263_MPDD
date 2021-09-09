#include <iostream>

using namespace std;

class Student {
    public:
        string  name;
        string  department;
        float gpa;
        int year;
        Student () {
            cout << "Creating Student " << endl;
        }
};

int main()
{
    Student student1;

    student1.name = "Nathan";
    student1.department = "ECE";
    student1.gpa = 3.9;
    student1.year = 2018;


    cout << "Student1: " << student1.name << endl;

}