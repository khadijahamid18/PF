#include <iostream>
using namespace std;

void C()
{
    cout << "C is called." << endl;
    cout << "C is terminated called." << endl;
}

void B()
{
    cout << "B is called." << endl;

    C();

    cout << "B is terminated called." << endl;
}

void A()
{
    cout << "A is called." << endl;

    B();

    cout << "A is terminated called." << endl;
}

int main()
{
    system("cls");
    cout << "Main is called." << endl;

    A();

    cout << "Main is terminated called." << endl;
    return 0;
}