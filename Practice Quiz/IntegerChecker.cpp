#include <iostream>
using namespace std; 

int main() {
    int input; 
    cin >> input; 
    
    if (input > 0) {
        cout << "Positive"; 
    }
    
    else if (input < 0) {
        cout << "Negative"; 
    }
    
    else{
        cout << "Zero"; 
    }

    return 0;
}