#include <iostream>
using namespace std;

bool checkPrime(int num)
{
    if (num > 1) // Prime number is always greater than 1. If it is not then direstly return false
    {
        for (int i = 2; i < num; i++) // For loop iterating from 2 to num-1
        {
            if (num % i == 0)
                return false; //  If num is divisible by any number between 2 and num-1, means it is not a prime number
        }
        return true; // If num is NOT divisible by any number between 2 and num-1, means it is PRIME number
    }
    else
        return false;
}

int main()
{
    system("cls");
    int number;
    cout << "Enter any integer" << endl;
    cin >> number; // Taking input from user

    if (checkPrime(number)) // if checkPrime() returns true, 'if' condition will be true.
        cout << number << " is a prime number." << endl;
    else // if checkPrime() returns false, 'if' condition will be false
        cout << number << " is NOT a prime number." << endl;

    return 0;
}
