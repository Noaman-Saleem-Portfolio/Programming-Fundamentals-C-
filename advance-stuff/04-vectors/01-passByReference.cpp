// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
// #include <vector>
using namespace std;

void fun1(vector<int> &v){
    for(int i=0;i<v.size();i++){
        v[i]=v[i]*2;
    }
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main() {
    vector<int> x={1,2,3,4,5};
    fun1(x);
    cout<<"After Function \n";
    for(auto i:x){
        cout<<i<<" ";
    }

    return 0;
}