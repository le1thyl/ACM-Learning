//
// Created by LEGION on 2026/10/22.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }

    // 按照右端点升序排序
    sort(a.begin(), a.end(),
        [](const auto& x, const auto& y) {
            return x.second < y.second;
        });

    int ans = 0;
    int lastEnd = 0;

    for (int i = 0; i < n; i++) {
        // 第一支箭，或者当前箭无法覆盖
        if (ans == 0 || a[i].first > lastEnd) {
            ans++;
            lastEnd = a[i].second;
        }
    }

    cout << ans << '\n';
    return 0;
}