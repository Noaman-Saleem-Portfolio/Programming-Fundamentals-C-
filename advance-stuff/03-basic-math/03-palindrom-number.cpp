// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    int dupNum = num;
    int revNum = 0;

    while (num > 0)
    {
        int lastNum = num % 10;

        revNum = (revNum * 10) + lastNum;
        num = num / 10;
    }

    if (revNum == dupNum)
        cout << "Number is Palinderom";
    else
        cout << "Not palindrom";
    return 0;
}