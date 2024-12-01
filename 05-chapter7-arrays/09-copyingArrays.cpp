// This program uses a range-based for loop to
// modify the contents of an array.
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;
    int numbers[SIZE] = {1, 2, 3, 4, 5};
    int newNumbers[SIZE];

    // newNumbers=numbers;    // wrong

    for (int count = 0; count < SIZE; count++)
        newNumbers[count] = numbers[count];

    cout << "newNumbers array elements are : " << endl;
    for (int count = 0; count < SIZE; count++)
        cout << newNumbers[count] << endl;

    return 0;
}