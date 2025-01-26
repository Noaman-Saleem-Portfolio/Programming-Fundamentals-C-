// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
   int A[2][3]= {{6,4,24},
                {1,-9,8}};
                
    cout<<"A Before transpose : \n";
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    // initializing T matrix
    int T[3][2];
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            T[i][j]=0;
        }
    }
    
    cout<<"T Matrix : \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<T[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            T[j][i]=A[i][j];
        }
    }
    
    cout<<"After transpose : \n";
    cout<<"T Matrix : \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<T[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}