//
// Created by LEGION on 2026/10/29.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n,r;
    cin >> n >> r;

    vector<int> v(n);

    for (int i = 0;i < n;i++) {
        cin >> v[i];
    }

    sort(v.begin(),v.end());

    int min_time = 0;
    for (int j = 0;j < n;j++) {
        if (j >= r) {
            v[j] = v[j] + v[j - r];
        }
        min_time += v[j];                   //找的是通项公式
    }

    cout << "ans = " << min_time << endl;

        return 0;
}