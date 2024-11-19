// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a 3 digit number : ";
    cin >> num;

    int dupNum = num;
    int sum = 0;

    while (num > 0)
    {
        int cube = 0;
        int lastNum = num % 10;
        cube = (lastNum * lastNum * lastNum);
        cout << "Cube of " << lastNum << " = " << cube << endl;
        sum += cube;
        num = num / 10;
    }

    if (sum == dupNum)
        cout << "Number is Armstrong";
    else
        cout << "Not Amstrong";
    return 0;
}