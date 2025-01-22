#include<iostream>
using namespace std;

void fibo(int n){
    int t1=0,t2=1,nextTerm;

    for(int i=1;i<=n;i++){
        if(i==1){
            cout<<t1<<",";
            continue;
        }
         if(i==2){
            cout<<t2<<",";
            continue;
        }
        nextTerm = t1 + t2;
        t1=t2;
        t2=nextTerm;
        cout<<nextTerm<<",";
    }

}

int main(){
    int n;

    cout<<"Enter the number of terms : ";
    cin>>n;

    while(n<=0){
    cout<<"Enter the number of terms: ";
    cin>>n;
    }

    fibo(n);


    return 0;
}
