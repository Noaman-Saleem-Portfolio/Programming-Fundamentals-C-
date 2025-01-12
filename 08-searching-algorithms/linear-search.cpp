#include<iostream>
using namespace std;

int linearSearch(const int [],int,int);
const int SIZE = 10;

int main(){

    int value;
    int result;

    const int marks[SIZE] = {22,45,89,97,56,48,75,19,63,44};

    cout<<"Enter search value : ";
    cin>>value;

    result = linearSearch(marks,SIZE,value);

    if(result == -1)
        cout<<"Value not found"<<endl;
    else
        cout<<value<<" is present at position "<<result + 1<<endl;

    return 0;
}

int linearSearch(const int arr[],int size,int value){
    bool found = false;
    int position = -1;
    int index = 0;

    while(found == false && index < size){
        if(arr[index] == value){
            found = true;
            position = index;
        }
        index++;
    }
    return position;
}
