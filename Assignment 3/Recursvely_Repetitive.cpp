#include <iostream>
using namespace std;

int main() {
    int n;
    
    cin >> n;

   // setting the first and second number first in the list so it can (0 + 1)
    int first = 0, second = 1, next;
 
    if (n == 1) {
        cout << first << endl;
    }
    else {
        cout <<  first << " " << second << " ";
        // setting the condition for the 4th element in the array
        for (int i = 3; i <= n; i++) {
            next = first + second;
            cout << next << " ";
            first = second;  
            second = next;
        }
        cout << endl;
    }

    return 0;
}
