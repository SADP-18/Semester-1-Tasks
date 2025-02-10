// If cannot run on vscode, run in Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
float money; 

int main() {
    // Write C++ code here
    cout << "Enter your money spent to see the discounted amount" <<endl;
    cin >> money; 
        if (money < 100) {
            cout << money <<endl; 
        }
        else if (100 <= money <= 500) {
            cout << money / 1.05 <<endl; 
        }
        else if (501 <= money <= 1000) {
            cout << money / 1.1 <<endl; 
        }
        else if (money > 1000) {
            cout << money / 1.15 <<endl; 
        }
    
    return 0;
}
