#include <iostream>
using namespace std;
int main()
{
  system("cls");
  float x;
  float y;
  char op;
  float result = 0;
  cout << "Enter x" << endl;
  cin >> x;
  cout << "Enter any operation" << endl;
  cin >> op;
  cout << "Enter y" << endl;
  cin >> y;

  if (op == '+')
    result = x + y;
  else if (op == '-')
    result = x - y;
  else if (op == '*')
    result = x * y;
  else if (op == '/')
    result = x / y;

  cout << x << op << y << "=" << result << endl;
  return 0;
}