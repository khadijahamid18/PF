#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int marks[5] = {33, 67, 89, 90, 77};

    int obtMarks = 0;

    for (int i = 0; i < 5; i++)
    {
        obtMarks += marks[i]; // sum = sum + marks[i]
    }

    float per = (obtMarks / 500.0) * 100;

    cout << "Percentage of my Obtained marks = " << per << "%" << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }

    cout << "Elements in Array" << endl;
    for (int i = 0; i <= 4; i++)
    {
        cout << marks[i] << endl;
    }

    return 0;
}