#include<iostream>
using namespace std;

float calculateArea (float base, float altitude)
{
    float area = (0.5)*base*altitude;
    return area;
   
}

int main()
 { 
    system ("cls");
    float base, altitude;

    cout << "Enter base " << endl;
    cin >> base;

    cout << "Enter altitude " << endl;
    cin >> altitude;

    
    float area = calculateArea (base, altitude); 
    cout << "Area of triangle is " << area << endl;

 return 0;
}