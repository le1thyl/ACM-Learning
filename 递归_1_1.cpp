//
// Created by LEGION on 2026/10/29.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int f(int n) {
    int ans;
    if (n == 1) {
        ans = 1;
    } else {
        ans = f(n - 1) + 3;
    }
    return ans;
}
int main() {
    cout << f(6) << endl;
    cout << f(5) << endl;
    return 0;
}