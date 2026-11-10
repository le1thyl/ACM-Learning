//
// Created by LEGION on 2026/10/29.
//
#include <iostream>
using namespace std;

int get_num(int n) {
    if (n <= 1) {
        return 2;
    }
    return get_num(n - 1) * 2;
}

long long get_sum(int n) {
    if (n <= 1) {
        return 2;
    }
    return get_sum(n - 1) + get_num(n);
}

int main() {
    cout << "求和:" << get_sum(5) << endl;
    return 0;
}