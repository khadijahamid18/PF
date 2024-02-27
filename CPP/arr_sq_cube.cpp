#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int marks[5] = {33, 67, 89, 90, 77};

   // char name[15] = {'A', 'b', 'd', 'u', 'l'};

    cout<< marks[5] <<endl;

    int squares[5], cubes[5];

    for (int i = 0; i < 5; i++)
    {
        squares[i] = marks[i] * marks[i];
        cubes[i] = marks[i] * marks[i] * marks[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout<< marks[i] <<"     "<<squares[i]<<"     "<< cubes[i]<<endl;
    }
    

   

    return 0;
}