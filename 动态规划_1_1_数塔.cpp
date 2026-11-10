//
// Created by LEGION on 2026/11/1.
//
#include <iostream>
using namespace std;

int t[110][110];
int dp[110][110];
int n;

void d() {
    for (int j = 1; j <= n;j++) {
        dp[n][j] = t[n][j];
    }
    for (int i = n - 1;i >= 1;i--) {
        for (int j = 1;j <= i;j++) {
            dp[i][j] = t[i][j] + max(dp[i + 1][j],dp[i + 1][j + 1]);
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0;i <= n;i++ ) {
        for (int j = 1;j <= i;j++ ) {
            cin >> t[i][j];
        }
    }
    d();
    cout << dp[1][1] << endl;

    return 0;
}