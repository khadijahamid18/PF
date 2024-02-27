#include<iostream>
using namespace std;
int main()
 { 
    system ("cls");
    float cel, far;
   cout << " Enter temperature in Fahrenheit " << endl;
   cin >> far;
   cel = (far - 32) * 5/9;
   cout << " Enter temperature in Celcius: " << cel << endl;
   cin >> cel;

 return 0;
}