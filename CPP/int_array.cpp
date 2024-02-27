#include<iostream>
using namespace std;

int main()
{
    system ("cls");
    int A[10];
    
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter any value" << endl;
        cin >> A[i];
    }
    
    
    for (int i = 0; i < 10; i++)
    {
        cout << A[i] << endl;
    }

 return 0;
}