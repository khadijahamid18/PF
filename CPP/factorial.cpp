#include<iostream>
using namespace std;

int main()
{
    system ("cls");
    int x, fact = 1;
    cout << "Enter any value" << endl;
    cin >> x;
    for (int i = x; i >= 1; i--)
    {
        fact = fact*i;
    }
    cout << "Factorial of " << x << "=" << fact << endl;
    
 return 0;
}