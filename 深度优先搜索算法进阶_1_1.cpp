//
// Created by LEGION on 2026/10/31.
//
#include <iostream>
using namespace std;

int n;
bool mark[6][6];
int path[26][3];
int count = 0;
int dx[5] = {0,0,1,0,-1};
int dy[5] = {0,1,0,-1,0};

void print_path(int k) {
    count++;
    cout << count << ":";
    for (int i = 0;i <= k;i++) {
        cout << path[i][1] << "," << path[i][2] << "->";
    }
    cout << path[k][1] << "," << path[k][2] << endl;
}

void dfs(int x,int y,int k) {
    path[k][1] = x;
    path[k][2] = y;
    if (x == n && y == n) {
        print_path(k);
        return;
    }
    for (int i = 1;i <= 4;i++) {
        int tx = x + dx[i];
        int ty = y + dy[i];
        if (mark[tx][ty] == false && tx >= 1 && ty <= n && ty >= 1 && tx <= n) {
            mark[tx][ty] = true;
            dfs(tx,ty,k + 1);
            mark[tx][ty] = false;
            path[k + 1][1] = 0;
            path[k + 1][2] = 0;
        }
    }
}

int main() {
    cin >> n;
    mark[1][1] = true;
    dfs(1,1,1);          //mark的行、mark的列、path的行
    return 0;
}