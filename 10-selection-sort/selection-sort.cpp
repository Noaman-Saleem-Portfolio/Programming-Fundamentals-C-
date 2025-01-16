#include<iostream>
using namespace std;

void showArray(const int [],int);
void selectionSort(int [],int);

int main(){
    int values[5]={7,1,4,3,9};
    //int values[4]={4,3,2,1};

    cout << "The unsorted values are: \n";
    showArray(values, 5);

    selectionSort(values,5);

    cout << "The sorted values are: \n";
    showArray(values, 5);

    return 0;
}

void selectionSort(int arr[],int n){
    for(int i=0; i<n-1; i++){
        int minIndex=i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[i],arr[minIndex]);
    }
}

void showArray(const int arr[],int size){
    for(int i=0;i<size;i++)
            cout<<arr[i]<<" ";
    cout<<endl;
}
