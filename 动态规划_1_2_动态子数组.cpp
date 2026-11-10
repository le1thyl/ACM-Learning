//
// Created by LEGION on 2026/11/1.
//
#include <iostream>
using namespace std;

int a[100010];
int dp[100010];
int n;

int main() {
    cin >> n;
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
    }

    dp[1] = a[1];
    int g_m = dp[1];
    for (int i = 2;i <= n;i++) {
        dp[i] = max(dp[i - 1] + a[i],a[i]);
        g_m = max(g_m,dp[i]);
    }
    cout << g_m << endl;
    return 0;
}