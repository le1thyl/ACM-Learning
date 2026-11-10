//
// Created by LEGION on 2026/10/30.
//
#include <iostream>
#include <iomanip>
using namespace std;

int a[10][10];
void f(int x,int y,int k) {
    a[x][y] = k;
    if (y + 1 <= 4 && a[x][y + 1] == 0) {
        f(x,y + 1,k + 1);
    }
    if (x + 1 <= 4 && a[x + 1][y] == 0) {
        f(x + 1,y,k + 1);
    }
    if (y - 1 >= 1 && a[x][y - 1] == 0) {
        f(x,y - 1,k + 1);
    }
    if (x - 1 >= 1 && a[x - 1][y] == 0) {
        f(x - 1,y,k + 1);
    }
}
int main() {
    f(1,1,1);
    for (int i = 0;i <= 4;i++) {
        for (int j = 0;j <= 4;j++) {
            cout << setw(5) << a[i][j];
        }
    }
    return 0;
}