#include <iostream>
using namespace std;

int main()
{
   system("cls");
   int marks[5];
   int largest;
   for (int i = 0; i < 5; i++)
   {
      cout << "Enter marks: " << endl;
      cin >> marks[i];
   }
   largest = marks[0];

   for (int i = 1; i < 5; i++)
   {
      if (marks[i] > largest)
         largest = marks[i];
   }
   cout << "Largest Number:  " << largest << endl;

   return 0;
}