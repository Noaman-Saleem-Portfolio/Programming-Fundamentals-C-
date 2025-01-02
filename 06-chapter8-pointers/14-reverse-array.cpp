#include <iostream>
using namespace std;

void reverseArray(int[], int);

int main()
{
    const int SIZE = 5;
    int numbers[SIZE] = {2, 4, 6, 8, 10};
    reverseArray(numbers, SIZE);

    cout << "After reversing array : " << endl;
    for (int i = 0; i < SIZE; i++)
        cout << numbers[i] << " ";

    return 0;
}

void reverseArray(int arr[], int size)
{
    int left = 0;
    int right = size - 1;

    while (left < right)
    {
        // swaping
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        // swap(arr[left],arr[right]);

        left++;
        right--;
    }
}
