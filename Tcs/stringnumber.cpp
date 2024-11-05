#include <iostream>
#include <string>

using namespace std;

void interchange( string  s) {
    string result;
    for (char c : s) {
        switch (c) {
            case '1': 
            result += "one"; 
            break;

            case '2':
             result += "two";
              break;

            case '3': 
            result += "three"; 
            break;

            case '4':
             result += "four"; 
             break;

            case '5':
             result += "five";
              break;

            case '6':
             result += "six";
              break;

            case '7': 
            result += "seven";
             break;

            case '8': 
            result += "eight"; 

            case '9':
             result += "nine";
              break;

            case '0': 
            result += "zero";
             break;  

            default: result += c;  
        }
    }
    cout << result;
}

int main() {
    string s;
    getline(cin, s);
    interchange(s);
    return 0;
}
