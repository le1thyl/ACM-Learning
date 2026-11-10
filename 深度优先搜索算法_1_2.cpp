//
// Created by LEGION on 2026/10/31.
//
#include <iostream>
#include <algorithm>
using namespace std;

int n;
char a[30][30];
int path[410][3];

void print (int k) {
    for (int i = 1;i <= k;i++) {
        cout << "(" << path[i][1] << "," << path[i][2] << ")";
        if (i != k) {
            cout << "->";
        }
    }
    exit(0);
}

void dfs(int x,int y,int k) {
    path[k][1] = x;
    path[k][2] = y;
    a[x][y] = '1';
    if (x == n && y == n) {
        print(k);           //打印输出路径
    }
    if (a[x][y - 1] == '0' && y - 1 >= 1) {
        dfs(x,y - 1,k + 1);
    }
    if (a[x - 1][y] == '0' && x - 1 >= 1) {
        dfs(x - 1,y,k + 1);
    }
    if (a[x][y + 1] == '0' && y + 1 <= n) {
        dfs(x,y + 1,k + 1);
    }
    if (a[x + 1][y] == '0' && x + 1 <= n) {
        dfs(x + 1,y,k + 1);
    }
}

int main() {
    cin >> n;          //距离输入的是4
    for (int i = 0;i <= n;i++) {
        for (int j = 0;j <= n;j++) {
            cin >> a[i][j];
        }
    }
    dfs(1,1,1);
    return 0;
}