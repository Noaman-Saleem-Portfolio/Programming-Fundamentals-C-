#include<iostream>
using namespace std;

int main(){
    int r1=2,c1=3;
    int r2=3,c2=2;

    int A[r1][c1] = {{1,2,3},
                     {4,5,6}};

    int B[r2][c2] = {{7,8},
                     {9,10},
                     {11,12}};

    cout<<"printing the matrix A"<<endl;
    // printing the matrix A
     for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<"printing the matrix B"<<endl;
    // printing the matrix B
     for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }

    int mult[r1][c2];

     cout<<endl;
    //Initializing elements of matrix mult to 0

     for(int i = 0; i < r1; ++i){
        for(int j = 0; j < c2; ++j)
        {
            mult[i][j]=0;
        }
     }

     cout<<endl;

    cout<<"printing the matrix A*B before multiplying : "<<endl;
    for(int i = 0; i < r1; ++i){
        for(int j = 0; j < c2; ++j)
        {
            cout<<mult[i][j]<<" ";
        }
        cout<<endl;
     }

     // Multiplying matrix a and b and storing in array mult
      for(int i = 0; i < r1; ++i){
        for(int j = 0; j < c2; ++j)
        {
           for(int k=0;k<c1;k++){
            mult[i][j] += A[i][k] * B[k][j];
           }
        }
     }

     cout<<"printing the matrix A*B after multiplying : "<<endl;
    for(int i = 0; i < r1; ++i){
        for(int j = 0; j < c2; ++j)
        {
            cout<<mult[i][j]<<" ";
        }
        cout<<endl;
     }


    return 0;
}


// https://www.mathsisfun.com/algebra/matrix-multiplying.html
