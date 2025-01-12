#include<iostream>
using namespace std;

void showArray(const int [],int);
void bubbleSort(int [],int);

int main(){
    int values[6] = {1, 7, 6, 10, 9, 14};

    cout << "The unsorted values are: \n";
    showArray(values, 6);

    bubbleSort(values,6);

    cout << "The sorted values are: \n";
    showArray(values, 6);

    return 0;
}

void bubbleSort(int arr[],int size){
    int temp;
    bool swap;
//    int cycle = 0;

    do{
        swap = false;
        for(int i=0;i<(size - 1);i++){
            if(arr[i]>arr[i + 1]){
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i+1]=temp;
                swap = true;
            }
        }
//        cycle++;
    } while (swap);
//    cout<<"Total Cycle = "<<cycle<<endl;
}

void showArray(const int arr[],int size){
    for(int i=0;i<size;i++)
            cout<<arr[i]<<" ";
    cout<<endl;
}
