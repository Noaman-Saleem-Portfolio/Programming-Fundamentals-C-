#include <iostream>
using namespace std;

void display(const int *const, int);

int main()
{
    const int SIZE = 5;
    const int salary[SIZE] = {2000, 45000, 33000, 76000, 88000};
    display(salary, SIZE);

    return 0;
}

void display(const int *const arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + 1) << " ";
        // cout<<arr[i]<<" ";
    }
    int x = 88;
    // illegal
    // arr=&x;
}
