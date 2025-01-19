#include <iostream>
using namespace std;

struct student{
      string name;
      string rollNumber;
      int age;
      char gender;
    };
    
void showDetails(student std);

void getDetails(student &std);

int main() 
{
  student s1;
  s1.name = "Ali";
  s1.rollNumber = "f20-611-15";
  s1.age=23;
  s1.gender = 'M';
  
  cout<<"Details of s1 student : "<<endl;
  cout<<"Name : "<<s1.name<<endl;
  cout<<"Roll Number : "<<s1.rollNumber<<endl;
  cout<<"Age : "<<s1.age<<endl;
  cout<<"Gender : "<<s1.gender<<endl;
  
  student s2 = {"Ahmad","f22-655-45",19,'M'};
  
  cout<<endl;
   cout<<"Details of s2 student : "<<endl;
   showDetails(s2);
   
   cout<<endl;
   student s3;
   getDetails(s3);
   
   cout<<endl;
   cout<<"Details of s3 student : "<<endl;
   showDetails(s3);
   
   
  
    
    return 0;
}

void showDetails(student std){
    cout<<"Name : "<<std.name<<endl;
  cout<<"Roll Number : "<<std.rollNumber<<endl;
  cout<<"Age : "<<std.age<<endl;
  cout<<"Gender : "<<std.gender<<endl;
}

void getDetails(student &std){
    cout<<"Enter student name : ";
    cin>>std.name;
    
    cout<<"Enter student Roll Number : ";
    cin>>std.rollNumber;
    
    cout<<"Enter student Age : ";
    cin>>std.age;
    
    cout<<"Enter student Gender : ";
    cin>>std.gender;
}









