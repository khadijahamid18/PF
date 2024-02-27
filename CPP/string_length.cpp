#include<iostream>
using namespace std;

int main()
{
    system ("cls");
    string str;
    cout << "Enter any string" << endl;
    getline (cin, str);        // getline reads space too
    // cin >> str;

    cout << "Lenth of string is:  " << str.length() << endl;

 return 0;
}