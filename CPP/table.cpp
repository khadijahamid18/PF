#include<iostream>
using namespace std;

int main()
{
    system ("cls");
    int number, multiplier;
    multiplier = 1;
    cout << "Enter the number" << endl;
    cin >> number;
    
    while (multiplier <= 10)
    {
        cout << number << "*" << multiplier << "=" << number*multiplier << endl;
        multiplier++;
    }
   

    return 0;
}