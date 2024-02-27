#include<iostream>
using namespace std;

void printinfo (string name, int age, int id, float gpa)
{
    cout << "My name is " << name << ". " ;
    cout << "My age is " << age << ". " ;
    cout << "My id is " << id << ". " ;
    cout << "My gpa is " << gpa << ". " ; 
   
}

int main()
 { 
    system ("cls");
    string name;
    int age;
    int id;
    float gpa;

    cout << "Enter your name " << endl;
    cin >> name;

    cout << "Enter your age " << endl;
    cin >> age;

    cout << "Enter your id " << endl;
    cin >> id;

    cout << "Enter your gpa " << endl;
    cin >> gpa;

    printinfo (name,age, id, gpa); 

 return 0;
}