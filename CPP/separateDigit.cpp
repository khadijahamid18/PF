#include<iostream>
using namespace std;


void seperateDigit(int x)
{
    for (int i = 10000; i > 0; i = i/10)
    {
        int y = x/i;
        cout << y%10 << "   " ;
    }
}

int main()
 { 
    system ("cls");
   int num;
   cout << "Enter any digit " << endl;
   cin >> num;

   seperateDigit(num);

 return 0;
}