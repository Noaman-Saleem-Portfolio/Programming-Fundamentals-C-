#include <iostream>
using namespace std;

class Heap
{
public:
    int arr[100];
    int size;

    Heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int data)
    {
        size = size + 1;
        int index = size;
        arr[index] = data;

        while (index > 1)
        {
            //cout<<index<<endl;
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deleteFromHeap(){
        if(size==0){
            cout<<"Nothing to delete"<<endl;
            return;
        }
        // step 1: replace root with last element
        arr[1] = arr[size];

        // step 2: delete last element
        size--;

        // step 3: satisfy heap property
        int i=1;
        while(i<size){
            int leftIndex=2*i;
            int rightIndex=2*i+1;

            if(leftIndex <= size &&  arr[i] < arr[leftIndex] && arr[leftIndex] > arr[rightIndex]){
                cout<<"Left k andar\n";
                swap(arr[i],arr[leftIndex]);
                i=leftIndex;
            } else if(rightIndex <= size && arr[i] < arr[rightIndex] && arr[rightIndex] > arr[leftIndex]){
                cout<<"Right k andar\n";
                swap(arr[i],arr[rightIndex]);
                i=rightIndex;
            } else {
                return;
            }
        }
    }
};

int main()
{
    Heap h;
    //h.insert(50);
    //h.insert(55);
    //h.insert(53);
    //h.insert(52);
    //h.insert(54);

    h.insert(55);
    h.insert(54);
    h.insert(55);
    h.insert(52);

    h.print();

    h.deleteFromHeap(); // 54 52 53 50

    h.print();

    return 0;
}
