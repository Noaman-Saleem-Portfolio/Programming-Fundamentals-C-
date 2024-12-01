// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    //howmany students how many tests
    int numStudents,numTest;
    cout<<"Enter number of students : ";
    cin>>numStudents;

    cout<<"Enter number of test : ";
    cin>>numTest;
    for(int i=1;i<=numStudents;i++){
        double total=0, average=0;
        for(int j =1;j<=numTest;j++){
            double score;
            cout<<"Enter score in test "<<j<<" for student "<<i<<" : ";
            cin>>score;
            total +=score;
        }
        average = total/numTest;
        cout<<"Average score of student "<<i<<" is "<<average<<endl<<endl;
    }


    return 0;
}
