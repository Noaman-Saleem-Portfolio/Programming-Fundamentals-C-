#include <iostream>
using namespace std;

int main()
{
    const int NUM_STUDENTS = 5;
    int marks[NUM_STUDENTS];
    
    cout<<"Enter marks earned by 5 students : ";
    cin>>marks[0];
    cin>>marks[1];
    cin>>marks[2];
    cin>>marks[3];
    cin>>marks[4];
    
    cout<<"Displat marks earned by each student : ";
    cout<<" "<<marks[0];
    cout<<" "<<marks[1];
    cout<<" "<<marks[2];
    cout<<" "<<marks[3];
    cout<<" "<<marks[4];

    return 0;
}