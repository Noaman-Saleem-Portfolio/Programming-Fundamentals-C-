#include <iostream>
using namespace std;

struct student
{
    string name;
    string rollNumber;
    int age;
    char gender;
};

void showDetails(student *std);

void getDetails(student *std);

int main()
{
    student s1 = {"Ahmad", "f22-655-45", 19, 'M'};
    student *ptr = nullptr;
    ptr = &s1;

    cout << ptr->name << endl;
    cout << ptr->rollNumber << endl;

    student s2;
    ptr = &s2;
    getDetails(ptr);

    cout << endl;
    cout << endl;

    showDetails(ptr);

    return 0;
}

void showDetails(student *std)
{
    cout << "Name : " << std->name << endl;
    cout << "Roll Number : " << std->rollNumber << endl;
    cout << "Age : " << std->age << endl;
    cout << "Gender : " << std->gender << endl;
}

void getDetails(student *std)
{
    cout << "Enter student name : ";
    cin >> std->name;

    cout << "Enter student Roll Number : ";
    cin >> std->rollNumber;

    cout << "Enter student Age : ";
    cin >> std->age;

    cout << "Enter student Gender : ";
    cin >> std->gender;
}
