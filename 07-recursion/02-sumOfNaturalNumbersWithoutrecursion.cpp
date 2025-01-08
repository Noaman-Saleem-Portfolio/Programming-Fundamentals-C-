#include<iostream>
using namespace std;

int sum(int);

int main() {
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    
    cout<<sum(n);

    return 0;
}

int sum(int n){
  int accumulator = 0;
  for(int i=1;i<=n;i++){
    accumulator += i;
  }
  return accumulator;
}
