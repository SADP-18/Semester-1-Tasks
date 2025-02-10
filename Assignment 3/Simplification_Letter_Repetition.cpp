#include <iostream>
#include <string>
using namespace std;

string compressString(string s) {
    string compressed = "";
    int count = 1;
    // setting the array
    for (int i = 1; i <= s.length(); i++) {
        if (i < s.length() && s[i] == s[i - 1]) {
            count++;
        } 
        else {
           
            compressed += s[i - 1];
            if (count > 1) {
                compressed += to_string(count);
            }
            count = 1; 
        }
    }

    return compressed.length() < s.length() ? compressed : s;
}

int main() {
    string s;
    cin >> s;

    string result = compressString(s);
    cout << result << endl;

    return 0;
}
