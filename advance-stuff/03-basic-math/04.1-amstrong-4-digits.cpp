// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long num, n;
    cout << "Enter any digit number : ";
    cin >> num;

    long dupNum = num;
    long sum = 0;

    while (dupNum > 0)
    {
        dupNum = dupNum / 10;
        n++;
    }
    dupNum = num;

    while (num > 0)
    {
        long power = 0;
        int lastNum = num % 10;
        power = pow(lastNum, n);
        cout << "Power of " << n << " of " << lastNum << " = " << power << endl;
        sum += power;
        num = num / 10;
    }
    cout << "Sum = " << sum << endl;

    if (sum == dupNum)
        cout << "Number is Armstrong";
    else
        cout << "Not Amstrong";
    return 0;
}