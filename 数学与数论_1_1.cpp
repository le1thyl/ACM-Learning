//
// Created by LEGION on 2026/10/22.
//
#include <iostream>
using namespace std;

// 求最大公约数
int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;

        a = b;
        b = r;
    }

    return a;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << gcd(a, b) << '\n';

    return 0;
}