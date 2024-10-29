// Online C++ compiler to run C++ program online
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string country = "Pakistani";
    double cgpa = 3.53;

    if (country == "Pakistan")
    {
        if (cgpa >= 3.50)
        {
            cout << "Congrats you are selected for Schlorship";
        }
        else
        {
            cout << "Sorry :(, Your cgpa must be greater than or equal to 3.50";
        }
    }
    else
    {
        cout << "You are not eligible for this Schlorship";
    }

    return 0;
}