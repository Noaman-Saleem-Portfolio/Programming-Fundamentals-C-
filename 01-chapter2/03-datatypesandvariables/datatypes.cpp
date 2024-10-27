#include<iostream>
using namespace std;

int main(){
    int age = 15;
    cout<<"age = "<<age<<endl;

    char ch = 'a';
    cout<<"ch = "<<ch<<endl;
    //char newChar = 'aa';

    bool isSignin = true;
    cout<<"isSignin = "<<isSignin<<endl;

    float weight = 77.2;
    cout<<"weight = "<<weight<<endl;

    double temperature = 22.34;
    cout<<"temperature = "<<temperature<<endl;

    //sizeof() operator: sizeof() operator is used to find the number of bytes occupied by a variable/data type in computer memory.

    cout<<"Size of age is "<<sizeof(age)<<endl;
    cout<<"Size of ch is "<<sizeof(ch)<<endl;
    cout<<"Size of isSignin is "<<sizeof(isSignin)<<endl;
    cout<<"Size of weight is "<<sizeof(weight)<<endl;
    cout<<"Size of temperature is "<<sizeof(temperature)<<endl;

    //int size = sizeof(age);
    //cout<<"Size of age is "<<size<<endl;

    //int size = sizeof(ch);
    //cout<<"Size of ch is "<<size<<endl;

    //int size = sizeof(isSignin);
    //cout<<"Size of isSignin is "<<size<<endl;

    //int size = sizeof(weight);
    //cout<<"Size of weight is "<<size<<endl;

    //int size = sizeof(temperature);
    //cout<<"Size of temperature is "<<size<<endl;
}


