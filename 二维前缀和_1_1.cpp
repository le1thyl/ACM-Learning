//
// Created by LEGION on 2026/10/27.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,m,q;
    cin >> n >> m >> q;

    vector<vector<long long>> pre(n + 1,vector<long long> (m + 1));

    for (int i = 1;i <= n;i++) {                           //注意for循环遍历范围
        for (int j =1;j <= m;j++) {
            long long x;
            cin >> x;
            pre[i][j] = pre[i][j - 1] + pre[i - 1][j] - pre[i - 1][j - 1] + x;
        }
    }

    while (q--) {
                int x1,x2,y1,y2;
                cin >> x1 >> y1 >> x2 >> y2;


                long long sum = pre[x2][y2] - pre[x1 - 1][y2] - pre[x2][y1 - 1] + pre[x1 - 1][y1 - 1];   //因为 x1 和 y1 是目标区域的起始行、列，我们不能把它们也减掉
                cout << sum << endl;
    }
    return 0;
}