#include<iostream>
using namespace std;

int main()
{
    system ("cls");
    int A[10], sum=0;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter any number= "  << endl;
        cin >> A[i];
    }
    for (int i = 0; i < 10; i++)
    {
        sum = sum+A[i];
        cout << A[i];
    }
    cout << "sum is=  " << sum << endl;
    
    

 return 0;
}