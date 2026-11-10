//
// Created by LEGION on 2026/10/31.
//
#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> v(1000000);
int target;

int d(int left,int right) {
    if (left > right) {
        return -1;
    }
    int mid = left + (right - left) / 2;
    if (v[mid] == target) {
        return mid + 1;
    } else if (v[mid] > target) {
        return d(left,mid - 1);
    } else {
        return d(mid + 1,right);
    }
}

int main() {
    cin >> n;
    cin >> target;

    int mid = 0;

    for (int i = 0;i < n;i++ ) {
        cin >> v[i];
    }

    int left = 0;
    int right = n -1;

    cout << d(left,right);
    return 0;
}