// Program to check whether you are eligible for PHD admission or not
// maxAge= 40, CGPA >= 3.5, Education = MS

#include<iostream>
using namespace std;

int main(){
    char isMasterCompleted;
    double cgpa;
    int age;
    const int MAX_AGE = 40;

    cout<<"If you have completed your MS Degree then enter y"<<endl;
    cout<<"If you have not completed your MS Degree then enter n"<<endl;
    cin>>isMasterCompleted;

    cout<<"Enter your MS CGPA : ";
    cin>>cgpa;
    cout<<"Enter your age : ";
    cin>>age;

    if((isMasterCompleted == 'y') && (cgpa >= 3.5) && (age <= MAX_AGE)){
        cout<<"Congrats you are eligible for PHD admission";
    } else {
        cout<<"Sorry you can not apply for PHD position";
    }


    return 0;
}
