//
// Created by LEGION on 2026/10/24.
//
#include <iostream>
#include <vector>
using namespace std;

int sum(vector<int>& a, int i) {
    if (i == a.size()) {
        return 0;
    }

    return a[i] + sum(a, i + 1);
}

int main() {
    vector<int> a = {2, 4, 6, 8, 10};

    cout << sum(a, 0);

    return 0;
}