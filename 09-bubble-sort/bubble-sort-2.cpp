#include<iostream>
using namespace std;

void showArray(const int [],int);
void bubbleSort(int [],int);

int main(){
    int values[6] = {10, 1, 7, 6,14, 9};

    cout << "The unsorted values are: \n";
    showArray(values, 6);

    bubbleSort(values,6);

    cout << "The sorted values are: \n";
    showArray(values, 6);

    return 0;
}

void bubbleSort(int arr[],int n){
    for(int i = 1; i<n; i++) {
        //for round 1 to n-1
        bool swapped = false;

        for(int j =0; j<n-i; j++) {

            //process element till n-i th index
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }

        }

        if(swapped == false) {
            //already sorted
            break;
        }

    }
}

void showArray(const int arr[],int size){
    for(int i=0;i<size;i++)
            cout<<arr[i]<<" ";
    cout<<endl;
}
