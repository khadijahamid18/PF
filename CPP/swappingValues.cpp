#include<iostream>
using namespace std;


void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
//     cout << "After swapping in function=  " << endl;
//    cout << "a=  " << a << "    b=  " << b << endl;

}

int main()
 { 
    system ("cls");
   int a, b;
   cout << "Enter a  " << endl;
   cin >> a;
   cout << "Enter b  " << endl;
   cin >> b;

   cout << "Before swapping " << endl;
   cout << "a=  " << a << "    b=  " << b << endl;

   swap(a,b);
   cout << "After swapping " << endl;
   cout << "a=  " << a << "    b=  " << b << endl;

 return 0;
}