#include <iostream>
using namespace std;

//int age =99;
int main()
{
    int age=22;
    cout<<"Outer age = "<<age<<endl;

    {
    int age=33;
    cout<<"Inner age = "<<age<<endl;
    }


    return 0;
}
