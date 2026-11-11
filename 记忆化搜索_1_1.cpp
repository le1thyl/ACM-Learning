//
// Created by LEGION on 2026/10/24.
//
#include <iostream>
using namespace std;

int memo[100] = {};

int fib(int n) {
    if (n <= 2) return 1;

    if (memo[n] != 0) {
        return memo[n];
    }

    memo[n] = fib(n - 1) + fib(n - 2);

    return memo[n];
}

int main() {
    cout << fib(5);
    return 0;
}