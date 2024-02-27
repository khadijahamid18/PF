#include<iostream>
using namespace std;


void square(int x)
{
     //int x = 3;
     x++;
     cout << "x = " << x << endl;
}

int main()
 { 
    system ("cls");
    int x=5;
    square(x);
    cout << "x = " << x << endl;

 return 0;
}