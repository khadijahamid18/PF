#include<iostream>
using namespace std;

int main()
{
    system ("cls");
    int marks[5];
    int smallest;
    for(int i=0; i < 5; i++)
    {
       cout << "Enter marks: " << endl;
       cin >> marks[i];
    }
    smallest = marks[0];
    
    for (int i=1; i<5; i++)
    {
       if (marks[i] < smallest)
       smallest = marks[i];
    }
    cout << "Smallest Number:  " << smallest << endl;

 return 0;
}