//
// Created by LEGION on 2026/10/31.
//
#include <iostream>
using namespace std;

int a[110][110];
int p[10010][4];       //修改为4
int n,m;
int head = 1;
int tail = 1;
int dx[5] = {0,0,1,0,-1};
int dy[5] = {0,1,0,-1,0};
int tx,ty;
int k = 1;

int print(int x) {
    if (p[x][3] != 0) {
        print(p[x][3]);
    }
    cout << "(" << p[x][1] << "," << p[x][2] << ")";
}

int main() {
    cin >> n >> m;
    a[1][1] = 1;
    p[1][1] = 1;
    p[1][2] = 1;
    while (head <= tail) {
        for (int i = 0;i <= 4;i++) {
             tx = p[head][1] + dx[i];
             ty = p[head][2] + dy[i];
            if (tx >= 1 && tx <= n &&ty >= 1 && ty <= m && a[tx][ty] == 0) {
                tail++;
                p[tail][1] = tx;
                p[tail][2] = ty;
                p[tail][3] = head;
                a[tx][ty] = k + 1;
                k++;
                if (tx == n && ty == m ) {
                    print(tail);
                }
            }
        }
        head++;
    }
    cout << endl;

    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= m;j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}