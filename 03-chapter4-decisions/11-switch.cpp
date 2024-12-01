#include <iostream>
using namespace std;

//int age =99;
int main()
{
  int option=2;
  char ch = 'a';

  switch(option){
    case 1:
        cout<<"I am in 1"<<endl;
        cout<<"One"<<endl;
        break;
    case 2:
        cout<<"I am in 2"<<endl;
        cout<<"Two"<<endl;
        break;
    case 3:
        cout<<"I am in 3"<<endl;
        cout<<"Three"<<endl;
        break;
    case 'a':
        cout<<"I am in a"<<endl;
        cout<<"a"<<endl;
        break;
    default:
        cout<<"I am in Default"<<endl;
        cout<<"Default"<<endl;
  }


    return 0;
}
