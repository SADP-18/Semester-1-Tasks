#include <iostream>
using namespace std;

// setting the inputs and conditions for GCD
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

//setting the inputs and conditions or LCM 
int lcm(int a, int b) {
    return (a * b) / gcd(a, b); 
}
//setting the inputs and outputs
int main() {
    int num1, num2;
    cin >> num1 >> num2;

    int resultGCD = gcd(num1, num2);
    int resultLCM = lcm(num1, num2);

    cout << "GCD: " << resultGCD << endl;
    cout << "LCM: " << resultLCM << endl;

    return 0;
}
