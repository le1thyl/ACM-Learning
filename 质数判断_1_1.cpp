//
// Created by LEGION on 2026/10/22.
//
#include <iostream>
using namespace std;

bool isPrime(int n) {
    // 小于 2 的数不是质数
    if (n < 2) {
        return false;
    }

    // 只检查到平方根
    for (int i = 2; i <= n / i; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    if (isPrime(n)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}