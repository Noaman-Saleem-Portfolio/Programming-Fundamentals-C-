#include<iostream>
using namespace std;

void printArr(int*,int);

int main() {
   const int SIZE = 5;
   int numbers[SIZE] = {1,2,3,4,5};
   
   printArr(numbers,SIZE);

    return 0;
}

void printArr(int* arr,int size){
  // base condition
    if(size == 0){
      return;
    }
    cout<<arr[size - 1]<<" ";
    printArr(arr, size - 1);
}