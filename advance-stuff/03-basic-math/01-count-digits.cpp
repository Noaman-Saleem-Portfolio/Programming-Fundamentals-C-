#include<bits/stdc++.h>
using namespace std;
// count the digits in a Number 456378

int main(){
    int num;
    cout<<"Enter any number : ";
    cin>>num;
    int count=0;
    //while(num > 0){
        //count++;
        //num=num/10;
    //}
    count =log10(num) ;
    cout<<count;
}
