//
// Created by LEGION on 2026/10/22.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> v(n + 1);
    vector<long long> pre(n + 1, 0);

    // 读取数组
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    // 构建前缀和
    for (int i = 1; i <= n; i++) {
        pre[i] = pre[i - 1] + v[i];
    }

    // 处理 q 次查询
    while (q--) {
        int L, R;
        cin >> L >> R;

        long long sum = pre[R] - pre[L - 1];
        cout << sum << '\n';
    }

    return 0;
}