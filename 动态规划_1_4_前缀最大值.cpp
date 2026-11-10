//
// Created by LEGION on 2026/11/1.
//
#include <iostream>
using namespace std;

int a[10010];
int dp[10010];
int n;

int main() {
    cin >> n;
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
    }

    dp[1] = a[1];

    for (int i = 1;i <= n;i++) {
        dp[i] = max(dp[i - 1],a[i]);
    }

    long long sum = 0;
    for (int i = 1;i <= n;i++) {
        sum += dp[i];
    }

    cout << sum;
    return 0;
}