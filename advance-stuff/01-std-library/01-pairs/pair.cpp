#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int,int> p = {33,4};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int, pair<int, int>> p1={2,{5,6}};
    cout<<p1.first<<" "<<p1.second.second<<" "<<p1.second.first<<endl;

    pair<int,int> arr[]={{1,2},{3,4},{5,6}};
    cout<<arr[0].second;

    return 0;
}
