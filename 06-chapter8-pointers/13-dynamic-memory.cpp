#include <iostream>
using namespace std;

int main()
{
    // int* ptr=nullptr;
    // ptr=new int;
    // *ptr=25;
    // cout<<*ptr;

    // delete ptr;

    double *namazCount = nullptr;
    double total, average;
    int numDays;
    cout << "How many days you want to count for namaz : ";
    cin >> numDays;

    namazCount = new double[numDays];

    for (int i = 0; i < numDays; i++)
    {
        cout << "Namaz parhi in day " << i + 1 << ": ";
        cin >> namazCount[i];
    }
    cout << endl;
    for (int i = 0; i < numDays; i++)
    {
        cout << namazCount[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < numDays; i++)
    {
        total += namazCount[i];
    }
    average = total / numDays;

    cout << "Average namaz per day = " << average;

    delete[] namazCount;

    return 0;
}