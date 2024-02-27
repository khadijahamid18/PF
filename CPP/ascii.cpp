#include <iostream>
using namespace std;

int main()
{
   system("cls");
   char ch;
   cout << "Enter any character: " << endl;
   cin >> ch;
   while (ch <= 255)
   {
      cout << "ASCII Value of " << ch << "is :  " << (int)ch << endl;
   }

   return 0;
}