//
// Created by LEGION on 2026/10/22.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n + 1, 0);
    vector<int> d(n + 2, 0);

    // 1. 输入原数组
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    // 2. 构造差分数组
    for (int i = 1; i <= n; i++) {
        d[i] = a[i] - a[i - 1];
    }

    // 3. 对 m 个区间进行操作
    while (m--) {
        int l, r, x;
        cin >> l >> r >> x;

        d[l] += x;       // 从 l 开始，后面整体增加 x
        d[r + 1] -= x;   // 从 r+1 开始，抵消增加的 x
    }

    // 4. 根据差分数组还原原数组
    for (int i = 1; i <= n; i++) {
        a[i] = a[i - 1] + d[i];
    }

    // 5. 输出结果
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << '\n';

    return 0;
}