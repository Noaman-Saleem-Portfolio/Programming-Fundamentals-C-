#include <iostream>
using namespace std;

void display(const int *, int);
void display2(const int[], int);

int main()
{
    const int SIZE = 5;
    const int salary[SIZE] = {2000, 45000, 33000, 76000, 88000};
    display(salary, SIZE);

    cout << endl;

    display2(salary, SIZE);

    return 0;
}

void display(const int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << " ";
        // cout<<arr[i]<<" ";
    }
}

void display2(const int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << " ";
        // cout<<arr[i]<<" ";
    }
}