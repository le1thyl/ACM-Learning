//
// Created by LEGION on 2026/10/22.
//
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s) {
    int l = 0;
    int r = (int)s.size() - 1;

    while (l < r) {
        if (s[l] != s[r]) {
            return false;
        }

        l++;
        r--;
    }

    return true;
}

int main() {
    string s;
    cin >> s;

    if (isPalindrome(s)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}