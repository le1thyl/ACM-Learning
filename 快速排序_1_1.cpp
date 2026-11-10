//
// Created by LEGION on 2026/10/31.
//
#include <iostream>
#include <algorithm>
using namespace std;

int a[100];
int n;

void quickSort(int left,int right) {
    if (left >= right) return;
    int i = left;
    int j = right;
    int mid = left + (right - left) / 2;
    int p = a[mid];
    while (i <= j) {
        while (a[i] < p) i++;
        while (a[j] > p) j--;
        if (i <= j) {
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    if (left < j) quickSort(left,j);
    if (i < right) quickSort(i,right);
}
int main() {
    cin >> n;
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }

    quickSort(0,n - 1);

    for (int i = 0;i < n;i++) {
        cout << a[i] << " ";
    }

    return 0;
}