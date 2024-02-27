#include<iostream>
using namespace std;

void square(int x)
{
    cout << "Square of " << x << "=" << x*x << endl;
}
void cube(int y)
{
    cout << "Cube of " << y << "=" << y*y*y << endl;
}

int main()
 { 
    system ("cls");
    int number;
    cout << "Enter any number:  " << endl;
    cin >> number;

    square(number);
    cube(number);

 return 0;
}