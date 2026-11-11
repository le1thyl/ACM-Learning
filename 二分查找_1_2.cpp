//
// Created by LEGION on 2026/10/22.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    long long k;
    cin >> n >> k;

    vector<long long> a(n);

    long long r = 0;

    // 输入木头长度
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        r = max(r, a[i]);
    }

    long long l = 1;
    long long ans = 0;

    while (l <= r) {
        long long mid = l + (r - l) / 2;

        long long sum = 0;

        // 计算能切出多少段
        for (int i = 0; i < n; i++) {
            sum += a[i] / mid;

            if (sum >= k) {
                break;
            }
        }

        if (sum >= k) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    cout << ans << '\n';

    return 0;
}