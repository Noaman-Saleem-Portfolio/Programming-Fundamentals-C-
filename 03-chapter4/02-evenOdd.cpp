// Online C++ compiler to run C++ program online
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "EVEN";
    }
    else
    {
        cout << "ODD";
    }

    return 0;
}