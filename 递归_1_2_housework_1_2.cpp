//
// Created by LEGION on 2026/10/29.
//
#include <iostream>
#include <iomanip> // 用于保留小数位数 setprecision
using namespace std;

int main() {
    int n;
    cin >> n;

    double sum = 0.0;
    double a = 1.0;
    double b = 1.0;

    for (int i = 0;i < n;i++) {
        sum = sum + a / b;

        // 计算下一项的分子和分母
        const double next_a = b;         // 下一项分子 = 当前项分母
        const double next_b = a + b;     // 下一项分母 = 当前项分子 + 当前项分母

        // 更新变量
        a = next_a;
        b = next_b;
    }
    // 输出结果，保留3位小数
    cout << fixed << setprecision(3) << sum << endl;
    return 0;
}