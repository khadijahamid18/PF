#include<iostream>
using namespace std;

int main()
{
    
    system ("cls");
    int a;
    cout << "Enter a =  " << endl;
    cin >> a;
    if (a < 300)
    {
        if (a < 150)
        {
            cout << "a is less than 150" << endl;
        }
        else
        {
            cout << "a is greater than 150 and less then 300" << endl;
        }
    }
    else
    {
        cout << "a is greater than 300" << endl;
    }
    





    return 0;
}