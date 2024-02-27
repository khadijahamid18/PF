#include<iostream>
using namespace std;

int main()
{
    system ("cls");
    int x = 5, y = 10;
    int temp = x;
    x = y;
    y = temp;
    cout << "x =  " << x << endl;
    cout << "y =  " << y << endl;



 return 0;
}