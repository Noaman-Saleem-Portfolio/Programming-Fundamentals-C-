#include <iostream>
using namespace std;

int main(){
    const int NUM_STUDENTS = 5;
    int marks[NUM_STUDENTS];

    cout<<"Enter marks earned by 5 students : ";
    for(int i=0; i<NUM_STUDENTS; i++){
        cin>>marks[i];
    }

    cout<<"Marks earned by each student : \n";
    for(int i=0; i<NUM_STUDENTS; i++){
        cout<<"Stdudent "<<(i+1)<<" marks = "<<marks[i]<<endl;
    }

    return 0;
}