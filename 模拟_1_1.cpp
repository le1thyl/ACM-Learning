//
// Created by LEGION on 2026/10/22.
//
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int x = 0;
    int y = 0;
    int dir = 0;

    // 方向：北、东、南、西
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    for (int i = 0; i < n; i++) {

        if (s[i] == 'R') {
            // 向右转
            dir = (dir + 1) % 4;
        }
        else if (s[i] == 'L') {
            // 向左转
            dir = (dir + 3) % 4;
        }
        else if (s[i] == 'F') {
            // 向当前方向前进一步
            x += dx[dir];
            y += dy[dir];
        }
    }

    cout << x << " " << y << '\n';

    string names[4] = {"N", "E", "S", "W"};
    cout << names[dir] << '\n';

    return 0;
}