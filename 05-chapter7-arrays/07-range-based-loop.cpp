#include <iostream>
using namespace std;

int main()
{
    int numbers[] = {11, 12, 22, 34, 56};

    cout << "Here are the numbers : \n";
    for (int num : numbers)
    {
        cout << "The next element is = " << num << endl;
    }

    string planets[] = {"Mercury", "Venus", "Earth", "Mars",
                        "Jupiter", "Saturn", "Uranus",
                        "Neptune", "Pluto (a dwarf planet)"};
    
    cout << "Here are the planets : \n";
    for (string val : planets)
    {
        cout << val << endl;
    }

    cout << "Here are the numbers with auto : \n";
    for (auto num : numbers)
    {
        cout << "The next element is = " << num << endl;
    }

    return 0;
}