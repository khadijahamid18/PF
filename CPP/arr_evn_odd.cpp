#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int marks[5] = {33, 67, 89, 90, 77};

    

    int even = 0, odd = 0;

    for (int i = 0; i < 5; i++)
    {
        if(marks[i] % 2 == 0)
           even++;         // even = even + 1;
        else
           odd++;          // odd = odd + 1;
    }

    cout<<"Even = "<<even<<endl;
    cout<<"Odd = "<<odd<<endl;


   
    

    return 0;
}