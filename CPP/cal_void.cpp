#include<iostream>
using namespace std;


void addition()
{
    int x, y;
    cout << x << "+" << y << "=" << x+y << endl;
}
void subtraction()
{
    int x, y;
    cout << x << "-" << y << "=" << x-y << endl;
}
void multiplication()
{
    int x, y;
    cout << x << "*" << y << "=" << x*y << endl;
}
void division(int x, int y)
{
    
    cout <<" x/y =  " << (float)x/y << endl;
}
void addition(int x, int y)
{
    
    cout <<" x+y =  " << x+y << endl;
}
void sub(int x, int y)
{
    
    cout <<" x-y =  " << x-y << endl;
}
void multiplication(int x, int y)
{
    
    cout <<" x*y =  " << x*y << endl;
}


int main()
 { 
    system ("cls");
    int x,y;
    cout << "Enter first number" << endl;
    cin >> x;
    cout << "Enter second number" << endl;
    cin >> y;

    addition(x,y);
    sub(x,y); 
    multiplication(x,y);
    division(x,y);
    

    
 return 0;
}