// Program to check if you are eligible to get bank loan
// minIncome >= 60000 or jobExperience >= 5

#include<iostream>
using namespace std;

int main(){
    int monthlyIncome, yearsOfExperience;

    cout<<"Enter your monthly income : ";
    cin>>monthlyIncome;

    cout<<"Enter your job experience in Years : ";
    cin>>yearsOfExperience;

    if((monthlyIncome >= 60000) || (yearsOfExperience >= 5)){
        cout<<"Congrats you can apply for loan";
    } else {
        cout<<"Bro go and earn some income first";
    }


    return 0;
}
