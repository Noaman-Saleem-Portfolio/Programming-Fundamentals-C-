#include<iostream>
using namespace std;

// 3 students
// 4 courses
// std1 = 56, 78, 45, 89
// std2 = 98, 44, 87, 67
// std3 = 77, 49, 81, 32

// Find average score of each student

int main(){
    const int STUDENTS = 3;
    const int COURSES = 4;
    double scores[STUDENTS][COURSES] = {{56, 78, 45, 89},
                                        {98, 44, 87, 67},
                                        {77, 49, 81, 32} };

    // first print this an analyze the output
    /*for(int i=0; i<STUDENTS; i++){
        cout<<scores[i]<<endl;
    }*/

    /* this loop prints the individual score by each student in each course
    for(int i=0; i<STUDENTS; i++){
        for(int j=0; j<COURSES; j++){
            cout<<scores[i][j]<<" ";
        }
        cout<<endl;
    } */

    cout<<"Printing the average marks of each students in all 4 subjects :"<<endl;
    // this loop prints the average score by each student in all courses
    for(int i=0; i<STUDENTS; i++){
        double average = 0;
        double sum = 0;
        for(int j=0; j<COURSES; j++){
            sum = sum + scores[i][j];
        }
        cout<<"Sum = "<<sum<<endl;
        average = sum/COURSES;
        cout<<"Average of student "<<(i+1)<<" = "<<average<<endl;
        cout<<endl;

    }

    cout<<"Printing the average marks in each course by all students :"<<endl;
    // Can you print the average score in each course by all students in other words sum of columns
    for(int col=0; col<COURSES; col++){
        double average = 0;
        double sum = 0;
        for(int row=0; row<STUDENTS; row++){
            //cout<<scores[row][col]<<endl;
            sum = sum + scores[row][col];
        }
        cout<<"Sum = "<<sum<<endl;
        average = sum/STUDENTS;
        cout<<"Average of Course "<<(col+1)<<" = "<<average<<endl;
        cout<<endl;

    }

    return 0;
}
