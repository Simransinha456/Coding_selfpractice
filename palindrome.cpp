// To check whether the string is palindrome or not--
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    int n = s.length();
    int start = 0;
    int end = n - 1;

    // you can use while loop also--
    // while(start < end)

    for (int i = 0; i < n / 2; i++) {
        if (s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    string inputString;
    cout << "Enter a string: ";
    cin >> inputString;

    if (isPalindrome(inputString)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}
