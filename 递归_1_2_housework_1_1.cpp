//
// Created by LEGION on 2026/10/29.
//
#include <iostream>
using namespace std;

int f(int n) {
    if (n == 1) {
        return 1;
    }
    return (f(n - 1) + 1) * 2;
}
int main() {
    cout << f(10) << endl;
    return 0;
}