// This program uses a range-based for loop to
// modify the contents of an array.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int SIZE = 5;
    string students[SIZE] = {"Ali","Nomi","Hina","Rida","Anam"};
    int marks[SIZE] ={75,84,56,65,94};

    for(int i=0; i<SIZE; i++){
        cout<<"Marks of "<<students[i]<<" = "<<marks[i]<<endl;
    }

    return 0;
}