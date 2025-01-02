#include <iostream>
using namespace std;

int main()
{
    int salary = 23000;
    // constant pointer
    int *const ptr = &salary;
    cout << *ptr << endl;

    int marks = 44;
    // illegal
    // ptr=&marks;

    return 0;
}
