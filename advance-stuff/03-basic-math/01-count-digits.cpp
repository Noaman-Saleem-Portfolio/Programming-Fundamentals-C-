#include<bits/stdc++.h>
using namespace std;
// count the digits in a Number 456378

/*
    cout<<26/10<<endl;
    cout<<"4595/10 = "<<4595/10<<endl;
    cout<<"459/10 = "<<459/10<<endl;
    cout<<"45/10 = "<<45/10<<endl;
    cout<<"4/10 = "<<4/10<<endl;

    cout<<"4595%10 = "<<4595%10<<endl;
    cout<<"459%10 = "<<459%10<<endl;
    cout<<"45%10 = "<<45%10<<endl;
    cout<<"4%10 = "<<4%10<<endl;
*/

int main(){
    int num;
    cout<<"Enter any number : ";
    cin>>num;
    int count=0;
    //while(num > 0){
        //count++;
        //num=num/10;
    //}
    count =log10(num) + 1 ;
    cout<<count;
}
