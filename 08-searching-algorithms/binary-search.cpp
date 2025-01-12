#include<iostream>
using namespace std;

int binarySearch(const int [], int, int);
const int SIZE = 20;

int main(){
    int idNums[SIZE] = {101, 142, 147, 189, 199, 207, 222,
                        234, 289, 296, 310, 319, 388, 394,
                        417, 429, 447, 521, 536, 600};
    int results; // To hold the search results
    int empID; // To hold an employee ID

    // Get an employee ID to search for.
    cout << "Enter the employee ID you wish to search for: ";
    cin >> empID;

     // Search for the ID.
     results = binarySearch(idNums, SIZE, empID);

    if (results == -1)
    cout << "That number does not exist in the array. \n";
    else
    {
    // Otherwise results contains the subscript of
    // the specified employee ID in the array.
    cout << "That ID is found at element " << results + 1;
    cout << " in the array.\n";
    }

    return 0;
}

int binarySearch(const int arr[], int size, int value){
    int first = 0;
    int last = size - 1;
    int middle;
    int position = -1;
    bool found = false;

    while(found == false && first <= last){
        middle = (first + last) / 2;
        if(arr[middle] == value){
            found = true;
            position=middle;
        }
        else if(arr[middle] > value)
            last = middle - 1;
        else
            first = middle + 1;
    }
    return position;
}




