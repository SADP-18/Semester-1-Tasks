// If cannot run on vscode, run in Online C++ compiler to run C++ program online
#include <iostream>
using namespace std; 

int number, number2, number3;

int main() {
    cout << "Enter your integer to find the minimum and maximum value" <<endl;
    cin >> number; 
    cin >> number2;
    cin >> number3; 

    int minimum = number;
    int maximum = number;
        
        if (number2 < minimum) {
        minimum = number2;
    }
    if (number2 > maximum) {
        maximum = number2;
    }

 
    if (number3 < minimum) {
        minimum = number3;
    }
    if (number3 > maximum) {
        maximum = number3;
    }

    cout << "Minimum value: " << minimum << endl;
    cout << "Maximum value: " << maximum << endl;
    
    return 0;
}

//success 