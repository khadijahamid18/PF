#include<iostream>
using namespace std;


void increment(string n, string m)
{
    string fullName = n + m;
    cout << "Full Name =  " << fullName << endl;
   
}

int main()
 { 
    system ("cls");
   string fname = "Khadija " ;
   string lname = "Hamid" ;

   increment (fname, lname);

 return 0;
}