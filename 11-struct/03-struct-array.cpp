#include <iostream>
using namespace std;

struct student
{
    string name;
    string rollNumber;
    int age;
    char gender;
};

void showDetails(student std);

void getDetails(student &std);

void displayArray(student[], int);

int main()
{
    student students[2];
    students[0].name = "Afridi";
    students[0].rollNumber = "111";
    students[0].age = 21;
    students[0].gender = 'M';

    cout << "Name = " << students[0].name << endl;
    cout << "Roll Number = " << students[0].rollNumber << endl;
    cout << "Age = " << students[0].age << endl;
    cout << "Gender = " << students[0].gender << endl;

    cout << endl;
    getDetails(students[1]);

    cout << endl;
    cout << endl;

    // showDetails(students[1]);

    cout << endl;
    cout << endl;

    cout << "Now calling showArray function : " << endl;
    displayArray(students, 2);

    return 0;
}

void showDetails(student std)
{
    cout << "Name : " << std.name << endl;
    cout << "Roll Number : " << std.rollNumber << endl;
    cout << "Age : " << std.age << endl;
    cout << "Gender : " << std.gender << endl;
}

void getDetails(student &std)
{
    cout << "Enter student name : ";
    cin >> std.name;

    cout << "Enter student Roll Number : ";
    cin >> std.rollNumber;

    cout << "Enter student Age : ";
    cin >> std.age;

    cout << "Enter student Gender : ";
    cin >> std.gender;
}

void displayArray(student std[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Name : " << std[i].name << endl;
        cout << "Roll Number : " << std[i].rollNumber << endl;
        cout << "Age : " << std[i].age << endl;
        cout << "Gender : " << std[i].gender << endl;

        cout << endl;
    }
}
