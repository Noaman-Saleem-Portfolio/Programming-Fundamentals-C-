#include<iostream>
using namespace std;

int main(){
    int testScore;
    const int A_SCORE = 90, B_SCORE = 80, C_SCORE = 70, D_SCORE =60;

    cout<<"Enter your test score : ";
    cin>>testScore;

    if(testScore >= A_SCORE){
        cout<<"Your grade is A";
    } else if(testScore >= B_SCORE){
        cout<<"Your grade is B";
    } else if(testScore >= C_SCORE){
        cout<<"Your grade is C";
    } else if(testScore >= D_SCORE){
        cout<<"Your grade is D";
    } else {
        cout<<"Your grade is F";
    }

    return 0;
}
