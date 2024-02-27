#include <iostream>
using namespace std;
int main()
{
  system("cls");
  int number[20];
  int largest;
  for (int i = 0; i < 20; i++)
  {
    cout << "Enter number:  " << endl;
    cin >> number[i];
  }
  largest = number[0];

  for (int i = 1; i < 20; i++)
  {
    if (number[i] > largest)
      largest = number[i];
  }
  cout << "Largest value:  " << largest << endl;

  return 0;
}