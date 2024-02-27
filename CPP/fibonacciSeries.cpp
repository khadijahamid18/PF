#include<iostream>
using namespace std;


void fibonacciSeries(int number)
{
    int n1 = 0, n2 = 1, n3;
    cout << n1 << "  " << n2 << "  " ;

    for (int i = 3; i <= number; i++)
    {
        n3 = n1 + n2;
        cout << n3 << "   " ;

        n1 = n2;
        n2 = n3;
    }
}

int main()
 { 
    system ("cls");
   int number;
   cout << "Enter any number " << endl;
   cin >> number;

   fibonacciSeries(number);

 return 0;
}