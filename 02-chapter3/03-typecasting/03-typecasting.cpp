#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
  int books, months;
  double booksPerMonth;

  cout<<"How many books do you plan to read? ";
  cin>>books;

  cout<<"How many months would it take? ";
  cin>>months;

//   booksPerMonth = books/months;
  booksPerMonth = static_cast<double>( books)/months;

  cout<<"That is "<<booksPerMonth<<" books per month."<<endl;

  return 0;
}
