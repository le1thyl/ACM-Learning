//
// Created by LEGION on 2026/10/22.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, target;
    cin >> n >> target;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int l = 0;
    int r = n - 1;

    while (l < r) {
        int sum = a[l] + a[r];

        if (sum == target) {
            cout << "YES" << '\n';
            return 0;
        }
        else if (sum < target) {
            l++;
        }
        else {
            r--;
        }
    }

    cout << "NO" << '\n';
    return 0;
}