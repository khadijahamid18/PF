#include<iostream>
using namespace std;


void increment(int x)
{
    x++;
    cout << "x in increment function() =  " << x << endl; 
   
}

int main()
 { 
    system ("cls");
   int x=8;
   increment (x);
   cout << "x= " << x << endl;


 return 0;
}