#include<bits/stdc++.h>
using namespace std;
// count the digits in a Number 456378

int main(){
    int number;
    cout<<"Enter a number : ";
    cin>>number;

    int revNum = 0;
    while(number > 0){
        int ld = number % 10;
         revNum = (revNum*10) + ld;
         number=number/10;
    }
    cout<<revNum;

    return 0;
}
