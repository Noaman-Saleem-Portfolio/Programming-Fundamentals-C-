#include<iostream>
using namespace std;

/*
Function defination
*/
void greet(){
    cout<<"Good Morning!"<<endl;
}

int main(){
    cout<<"I am in main"<<endl;
    for(int i=1;i<=5;i++){
        greet();
    }
    cout<<"Back to main function";
    return 0;
}
