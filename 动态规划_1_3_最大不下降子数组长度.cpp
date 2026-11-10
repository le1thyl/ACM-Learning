//
// Created by LEGION on 2026/11/1.
//
#include <iostream>
using namespace std;

int a[10100];
int dp[10100];
int n;
int res;

int main() {
    cin >> n;
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
    }

    for (int i = 1;i <= n;i++) {
        dp[i] = 1;
        for (int j = 1;j < i;j++) {
            if (a[i] >= a[j]) {
                dp[i] = max(dp[i - 1] + 1,dp[i]);
            }
        }
    }
    cout << res << endl;
    return 0;
}