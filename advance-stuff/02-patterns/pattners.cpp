#include<iostream>
using namespace std;

int main(){
/*  ****
    ****
    ****
*/
    for(int i=1;i<=6;i++){
            for(int j=1; j<=6;j++){
                cout<<"*";
            }
            cout<<endl;
    }
cout<<endl<<endl;
/*  *
    **
    ***
    ****
    *****
*/
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

cout<<endl<<endl;
/*  1
    12
    123
    1234
    12345
*/
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }

cout<<endl<<endl;
/*  1
    22
    333
    4444
    55555
*/
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }

cout<<endl<<endl;
/*  *****
    ****
    ***
    **
    *
*/

    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i ;j--){
            cout<<"*";
        }
        cout<<endl;
    }

cout<<endl<<endl;
/*  12345
    1234
    123
    12
    1
*/

    int n1=5;
    for(int i=1;i<=n1;i++){
        for(int j=n1;j>=i ;j--){
            cout<<n1-j+1;
        }
        cout<<endl;
    }

    return 0;

}
