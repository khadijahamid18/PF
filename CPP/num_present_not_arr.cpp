#include<iostream>
using namespace std;

int main()
{
    system ("cls");
    int A[10];
    int num = 0;
    cout << "Enter any number: " << endl;
    cin >> num;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter any value" << endl;
        cin >> A[i];
    }
    for (int i = 0; i < 10; i++)
    {
       if (num == A[i])
       num = A[i];
    }
    for (int i=0; i < 10; i++)
    {
        if(num = A[i])
        num = A[i];
    }
    for (int i=0; i < 10; i++)
    {
    if (num == A[i])
    cout << "Number is present in array" << endl;
    else 
    cout << "Number is not in an array" << endl;
    }
 return 0;
}