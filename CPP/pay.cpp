#include<iostream>
using namespace std;
int main()
 { 
    system ("cls");
  int payAmount=2000;
  int payPeriods=12;
  int annualPay;

  cout << "Enter pay amount: " << payAmount << endl;
  cout << "Enter pay periods: " << payPeriods << endl;
  annualPay = (payAmount*payPeriods);
  cout << "Find annual pay: " << annualPay << endl;

 return 0;
}