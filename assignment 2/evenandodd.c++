// If cannot run on vscode, run in Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int number; 

int main() {
    cout << "Enter your integer to see if it an even or odd number" <<endl;
    cin >> number; 
        if (number % 2 == 0 )
        cout << "This is an even number"; 
        else 
        cout << "This is an odd number"; 
        
    return 0;
}