#include<iostream>
using namespace std;

int main()
{
    
    system ("cls");
    int x, y;
    char c;
    while (1) 
    {
        cout << "Enter first number" << endl;
        cin >> x;
        if ( x == -999 )
            break;
        cout << "Enter Arithmetic Operation" << endl;
        cin >> c;
        cout << "Enter second number" << endl;
        cin >> y;

        if ( c == '+')
            cout << x << "+" << y << " = " << x+y << endl;
        else if ( c == '-')
            cout << x << "-" << y << " = " << x-y << endl;
        else if ( c == '*')
            cout << x << "*" << y << " = " << x*y << endl;
        else if ( c == '/')
            cout << x << "/" << y << " = " << (float) x/y << endl;
        else if ( c == '%')
            cout << x << "%" << y << " = " << x%y << endl;
        else
            cout << "Invalid Character" << endl;
    }







    
   return 0;
}