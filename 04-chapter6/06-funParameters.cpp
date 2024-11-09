#include<iostream>
using namespace std;

void displayNumber(int);
//void displayNumber(int num);

int main(){
   displayNumber(2);
   displayNumber(4);
   displayNumber(9 + 9);
   displayNumber(15.6);

   return 0;
}

void displayNumber(int num){
    cout<<"The value is "<<num<<endl;
}
