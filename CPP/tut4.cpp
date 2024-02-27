#include<iostream>
using namespace std;

int main()
{
    
    system ("cls");
    char c;
    cout << "Enter character= " << endl;
    cin >> c;
    if ((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z'))
    {
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
        {
            cout << "Vowel" << endl;
        }
         else  
        {
            cout << "Consonant" << endl;
        }
    }

    else  
    {
        cout << "Invalid Character" << endl; 
    }
    

    




    return 0;
}