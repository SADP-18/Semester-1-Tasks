#include <iostream>
using namespace std;

int main() {
    string input;
    int vowelCount = 0, consonantCount = 0;
    
    
    
     cin >> input; 

    
    for (char c : input) {
        
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || 
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vowelCount++;
        }
        
        else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            consonantCount++;
        }
    }
    
   
    cout << vowelCount << " " << consonantCount;
    

    return 0;
}
  