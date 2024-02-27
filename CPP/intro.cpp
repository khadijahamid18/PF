#include<iostream>
using namespace std;
int main()
 { 
    system ("cls");
   string name;
   int rollno;
   int age;
   string degree;

   cout << " Enter name  " << endl ;
   cin >> name;
   
   cout << " Enter roll number " << endl; ;
   cin >> rollno;
   
   cout << " Enter degree " << endl; ;
   cin >> degree;
   
   cout << " Enter age " << endl; ;
   cin >> age;
   

   cout << " Hi, my name is: " << name ;
   cout << " having roll number:  " << rollno ;
   cout << "  and enrolled in: " << degree ;
   cout << " My age is:  " << age ;

 return 0;
}