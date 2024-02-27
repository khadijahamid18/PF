#include<iostream>
using namespace std;


void armStrong(int number) 
{
    int temp = number;
    int rem = 0, sum = 0;
    while (number > 0)
    {
        rem = number % 10;
        sum = sum + rem*rem*rem*rem;
        number = number / 10;
    }
    if (sum == temp)
    {
        cout << "It is Armstrong ";
    }
    else
        cout << "It is NOT Armstrong";
}

int main()
 { 
    system ("cls");
   int number;
   cout << "Enter any number " << endl;
   cin >> number;

   armStrong(number);

 return 0;
}