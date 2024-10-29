// Determine whether the number input by user is zero or other than zero
#include<iostream>
using namespace std;

int main(){
    int number;

    cout<<"Enter any number : ";
    cin>>number;

    if(!(number == 0)){
        cout<<"You typed a number other than 0";
    } else {
        cout << "You typed zero";
    }

    return 0;
}


