//
// Created by LEGION on 2026/10/22.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    // 1. 输入数组
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // 2. 计算第一个窗口的和
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += a[i];
    }

    int maxSum = sum;

    // 3. 滑动窗口
    for (int i = k; i < n; i++) {
        sum = sum - a[i - k] + a[i];

        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    // 4. 输出最大和
    cout << maxSum << '\n';

    return 0;
}