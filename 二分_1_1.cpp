//
// Created by LEGION on 2026/10/31.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<int> v(1000000);
int target;
int pos = -1;

int main() {
    cin >> n;
    cin >> target;

    int mid = 0;

    for (int i = 0;i < n;i++ ) {
        cin >> v[i];
    }

    int left = 0;
    int right = n -1;
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (v[mid] == target) {
            pos = mid + 1;
            break;
        } else if (v[mid] > target) {
            right = mid - 1;
        } else if (v[mid] < target) {
            left = mid + 1;
        }
    }

    cout << pos << endl;


    return 0;
}