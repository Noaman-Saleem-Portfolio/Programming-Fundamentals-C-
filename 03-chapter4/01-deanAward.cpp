// Online C++ compiler to run C++ program online
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int pf, ict, math;
    double average;

    cout << "Enter your marks in PF :";
    cin >> pf;

    cout << "Enter your marks in ICT :";
    cin >> ict;

    cout << "Enter your marks in Math :";
    cin >> math;

    // calculate average
    average = (pf + ict + math) / 3.0;

    cout << showpoint << fixed << setprecision(1);

    cout << "Your average is " << average << endl;

    if (average > 95)
        cout << "Shabash tum great ho beta :)" << endl;

    return 0;
}