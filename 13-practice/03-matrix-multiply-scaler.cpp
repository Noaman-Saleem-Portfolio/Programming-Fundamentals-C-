#include<iostream>
using namespace std;

int main(){
    int mat[2][3] = {{6,4,24},
                     {1,-9,8}};

    // printing the matrix
     for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    // multiply this matrix by 2
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            mat[i][j] *= 2;
        }
    }

    cout<<endl;
    cout<<"After multiply by 2 : \n";

    // printing the matrix
     for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}


// https://www.mathsisfun.com/algebra/matrix-multiplying.html
