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

int main()
{
    student s1;
    s1.name = "Afridi";
    s1.dateOfBirth.day = 13;
    s1.dateOfBirth.month = 6;
    s1.dateOfBirth.year = 1992;
    s1.residence.city = "Lahore";
    s1.residence.province = "Punjab";

    cout << "Name = " << s1.name << endl;
    cout << "Date of birth = " << s1.dateOfBirth.day << "/" << s1.dateOfBirth.month << "/" << s1.dateOfBirth.year << endl;
    cout << "City = " << s1.residence.city << endl;
    cout << "Province = " << s1.residence.province << endl;

    return 0;
}
