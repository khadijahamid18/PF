#include<iostream>
using namespace std;
int main()
 { 
    system ("cls");
   int n=1 ;
  
   while (n < 10 )
   {
         cout << "Write first ten positive numbers: " << endl;
         cin >> n;
         n++;
   }
   cout <<"Positive numbers" << n << endl;
   cout << "While loop ended" << endl;

 return 0;
}