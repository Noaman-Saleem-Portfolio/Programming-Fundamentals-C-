#include <iostream>
using namespace std;

struct Date
{
    int day;
    int month;
    int year;
};

struct Address
{
    string city;
    string province;
};

struct student
{
    string name;
    Date dateOfBirth;
    Address residence;
};

student getStudentData();

int main()
{

    student s1 = getStudentData();

    cout << "Name = " << s1.name << endl;
    cout << "Date of birth = " << s1.dateOfBirth.day << "/" << s1.dateOfBirth.month << "/" << s1.dateOfBirth.year << endl;
    cout << "City = " << s1.residence.city << endl;
    cout << "Province = " << s1.residence.province << endl;

    return 0;
}

student getStudentData()
{
    student temp;
    temp.name = "Afridi";
    temp.dateOfBirth.day = 13;
    temp.dateOfBirth.month = 6;
    temp.dateOfBirth.year = 1992;
    temp.residence.city = "Lahore";
    temp.residence.province = "Punjab";

    return temp;
}
