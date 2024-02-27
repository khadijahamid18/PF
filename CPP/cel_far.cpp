#include<iostream>
using namespace std;

int main()
{
    system ("cls");
    double cel, far;
    cout << "Enter temperature in Celcius:  " << endl;
    cin >> cel;
    far = (cel*1.8) + 32;
    cout << "Enter temperature in Farenhite:  " << far << endl;
    cin >> far;

 return 0;
}