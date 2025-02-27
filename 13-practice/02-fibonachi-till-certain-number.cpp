#include<iostream>
using namespace std;

void fibo(int n){
    int t1=0,t2=1,nextTerm;

    // displays the first two terms which is always 0 and 1
    cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";
    nextTerm = t1 + t2;

    while(nextTerm<= n){
        cout << nextTerm << ", ";
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

}

int main(){
    int n;

    cout<<"Enter a positive number : ";
    cin>>n;

    while(n<=0){
    cout<<"Enter a positive number : ";
    cin>>n;
    }

    fibo(n);


    return 0;
}


// https://www.mathsisfun.com/algebra/matrix-multiplying.html
