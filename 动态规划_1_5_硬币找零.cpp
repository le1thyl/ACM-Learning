//
// Created by LEGION on 2026/11/1.
//
#include <iostream>
using namespace std;

int coins[110];
int dp[10010];
int n,target;

int main() {
    cin >> n;
    for (int i = 1;i <= n;i++ ) {
        cin >> coins[i];
    }

    for (int j = 0;j <= target;j++) {
        dp[j] = target + 1;
    }
    dp[0] = 0;

    for (int j = 1;j <= target;j++) {
        for (int i = 1;i <= n;i++) {
            if (coins[i] <= j) {
                dp[j] = min(dp[j],dp[j - coins[i] + 1]);
            }
        }
    }
    if (dp[target] > target) {
        cout << -1;
    } else {
        cout << dp[target];
    }
    return 0;
}