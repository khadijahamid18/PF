#include<iostream>
using namespace std;

int main()
{
    system ("cls");
    int days, years, weeks;
    cout << "Enter number of days:  " << endl;
    cin >> days;
    years = days/365;
    days = days%365;
    weeks = days/7;
    days = days%7;
    cout << "Years = " << years << " " << "Weeks= " << weeks << " " << "Days= " << days << " " << endl;


 return 0;
}