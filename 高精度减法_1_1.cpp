//
// Created by LEGION on 2026/10/30.
//
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);

    int a1[210] = {0};
    int a2[210] = {0};
    int a3[210] = {0};

    char flag = '=';

    if (s1.size() < s2.size() || s1.size() == s2.size() && s1 < s2) {
        swap(s1,s2);
        flag = '-';
    }

    for (int i = 0;i < s1.size();i++) {
        a1[s1.size() - i - 1] = s1[i];
    }

    for (int i = 0;i < s2.size();i++) {
        a2[s2.size() - i -1] = s2[i];
    }

    for (int i = 0;i < s1.size();i++) {
        a3[i] = a1[i] - a2[i];
        if (a1[i] < a2[i]) {
            a1[i] = a1[i] + 10;
            a1[i + 1] = a1[i + 1] - 1;
        }
    }

    if (flag = '-') {
        cout << flag;
    }

    int index = 0;

    for (int i = s1.size() - 1;i >= 0;i--) {
        if (a3[i] != 0) {
            index = i;
            break;
        }
    }

    for (int i = index;i >= 0;i--) {
        cout << a3[i];
    }

    return 0;
}