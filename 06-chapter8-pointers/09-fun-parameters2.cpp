// This program uses a pointer to display the contents of an array.
#include <iostream>
using namespace std;

int totalSales(int *arr, int size)
{
    int sum = 0;
    // for (int i = 0; i < size; i++)
    // {
    //     sum += arr[i];
    // }

    for (int i = 0; i < size; i++)
    {
        sum += *arr;
        arr++;
    }

    return sum;
}

int main()
{
    const int QATERS = 4;
    // int sales[QATERS] = {5000, 2300, 3600, 2130};
    int sales[QATERS] = {5, 10, 5, 10};

    cout << totalSales(sales, QATERS);

    return 0;
}
