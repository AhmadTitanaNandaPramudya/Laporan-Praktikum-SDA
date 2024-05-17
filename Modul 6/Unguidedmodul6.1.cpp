#include <iostream>
#include <stack>
#include <cctype>
#include <string>

using namespace std;

bool isPalindrome(const string &str) {
    stack<char> s;
    string cleanedStr;

    for (char ch : str) {
        if (isalpha(ch)) {
            cleanedStr += tolower(ch);
        }
    }

    
    for (char ch : cleanedStr) {
        s.push(ch);
    }

    
    for (char ch : cleanedStr) {
        if (ch != s.top()) {
            return false;
        }
        s.pop();
    }

    return true;
}

int main() {
    string input;

    cout << " kalimat: ";
    getline(cin, input);

    if (isPalindrome(input)) {
        cout << "Kalimat \"" << input << "\"  adalah : palindrom" << endl;
    } else {
        cout << "Kalimat \"" << input << "\"  bukan palindrom" << endl;
    }

    return 0;
}
