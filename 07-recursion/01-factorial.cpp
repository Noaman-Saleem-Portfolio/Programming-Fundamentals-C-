#include <iostream>
using namespace std;

// A function that calls itself is known as a recursive function. And, this technique is known as recursion.

// Example
// Factorial of a Number Using Recursion
// Factorial of n = 1*2*3*...*n

int factorial(int);

int main() 
{
    int n, result;
    cout << "Enter a non-negative number: ";
    cin >> n;
    
    result = factorial(n);
    cout << "Factorial of " << n << " = " << result;
    
    return 0;
}

int factorial(int n){
  if(n > 1)
    return n * factorial(n - 1);
  else 
    return 1;
}

// Note: This program does not work for numbers greater than 12. This is because the factorials of these numbers is very large, and are thus beyond the range of values that can be stored in an int type.

// You can use unsigned long as the return type for the factorial() function