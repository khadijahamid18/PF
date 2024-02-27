#include <iostream>
using namespace std;
int main()
{
    system ("cls");
    int marks[5] = {66, 54, 89, 87, 34};

    for (int i=0; i < 5; i++)
    {
        cin >> marks[i];
    }

    cout << "Elements in array " << endl;

    return 0;

}