#include <iostream>
using namespace std; 

int main() {
    int input; 
    cin >> input; 
    // setting output if input in positive
    if (input > 0) {
        cout << "Positive"; 
    }
    // setting output if input is negative
    else if (input < 0) {
        cout << "Negative"; 
    }
    // setting the output if "input = 0"
    else{
        cout << "Zero"; 
    }

    return 0;
}