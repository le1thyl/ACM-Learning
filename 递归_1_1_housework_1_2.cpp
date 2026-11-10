//
// Created by LEGION on 2026/10/29.
//
#include <iostream>
using namespace std;

long long f(int n) {

    if (n == 1 || n == 0) {
        return 1;
    }
    return f(n - 1) * n;
}
int main() {
    cout << "阶乘:" << f(5) << endl;
    return 0;
}