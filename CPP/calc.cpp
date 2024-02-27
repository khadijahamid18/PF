#include<iostream>
using namespace std;
int main()
{
    system("cls");
    char c;

    int num1 , num2;
    int result = 0;
    char op;
    cout << "Enter num1 =  " << endl;
    cin >> num1;
    while (num1 != -999)
    { 
       
        cout << "Enter Operator ( +, -, *, / ) =  " << endl;
        cin >> op;
        cout << "Enter num2 =  " << endl;
        cin >> num2;
        if ( op == '+')
            result = num1 + num2;
        else if ( op == '-')
            result = num1 - num2;
        else if ( op == '*')
            result = num1 * num2;
        else if ( op == '/')
            result = num1 / num2;

        cout << num1 << op << num2 << " = " << result << endl;
        cout << "Enter num1 =  " << endl;
        cin >> num1;
    
    }
    return 0;
}