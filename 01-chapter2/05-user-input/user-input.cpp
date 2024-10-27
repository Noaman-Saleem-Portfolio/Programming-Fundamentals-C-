/*
Calculate total percentage marks in FSC

*/

#include<iostream>
using namespace std;

int main(){
    double bio, chemistry, physics, urdu, english, percentage, totalMarks = 500;

    cout<<"Enter your marks in Biology : ";
    cin>>bio;

    cout<<"Enter your marks in Chemistry : ";
    cin>>chemistry;

    cout<<"Enter your marks in Physics : ";
    cin>>physics;

    cout<<"Enter your marks in Urdu : ";
    cin>>urdu;

    cout<<"Enter your marks in English : ";
    cin>>english;

    //Operator precedence
    //Left to right * / % + -
    //brackets are used to change the execution sequence
    //cout<<2+2+6/2<<endl;
    //cout<<((2+2+6)/2)<<endl;
    //cout<<24/2*3<<endl;
    //cout<<24/(2*3)<<endl;

    percentage = ((bio+chemistry+physics+urdu+english)/500) * 100;

    cout<<"Total Percentage marks = "<<percentage<<endl;

    return 0;
}
