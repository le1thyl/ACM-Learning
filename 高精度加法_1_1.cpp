//
// Created by LEGION on 2026/10/30.
//
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s1,s2;
    int a1[210] = {0},a2[210] = {0},a3[210] = {0};
    getline(cin,s1);
    getline(cin,s2);

    int len = max(s1.size(),s2.size());

    for (int i = 0;i < s1.size();i++) {
        a1[s1.size() - i - 1] = s1[i] - '0';
    }

    for (int j = 0;j < s2.size();j++) {
        a2[s2.size() - j - 1] = s2[j] - '0';
    }

    for (int k = 0;k < len;k++) {
        a3[k] = a1[k] + a2[k];
        if (a3[k] >= 10) {
            a3[k + 1] = a3[k + 1] + (a3[k] / 10);
            a3[k] = a3[k] % 10;
        }
    }

    if (a3[len] != 0) {
        len++;
    }

    for (int i = len - 1;i >+ 0;i--) {               //注意数组初位a[0]
        cout << a3[i];
    }

    return 0;
}