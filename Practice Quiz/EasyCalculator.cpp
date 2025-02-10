#include <iostream>
#include <iomanip>  
using namespace std;

int main() {
   
    int num;
    double num2;
   
    cin >> num >> num2;
   
    double sum = num + num2;
    double difference = num - num2;
    double product = num * num2;
    double quotient = num / num2;
    
    cout << sum << " " << difference << " " << product << " " << quotient << endl;

    return 0;
}
