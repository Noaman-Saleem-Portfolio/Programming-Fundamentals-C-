// This program uses a pointer to display the contents of an array.
#include <iostream>
using namespace std;

// Function prototypes
void getNumber(int *);
void doubleValue(int *);
int main()
{
    int number;
    getNumber(&number);

    doubleValue(&number);

    cout << "That value doubled is " << number << endl;

    return 0;
}

void getNumber(int *input)
{
    cout << "Enter an integer number: ";
    cin >> *input;
}

void doubleValue(int *val)
{
    *val *= 2;
}