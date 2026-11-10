//
// Created by LEGION on 2026/10/29.
//
#include <iostream>
using namespace std;

int f(int n) {
    int ans;
    if (n == 1) {
        ans = 2;
    } else {
        ans = f(n - 1) * 2;
    }
    return ans;
}

int main() {
    cout << "等比数列" << f(6) << endl;
    return 0;
}

//