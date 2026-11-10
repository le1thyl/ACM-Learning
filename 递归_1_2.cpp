//
// Created by LEGION on 2026/10/29.
//
#include <iostream>
using namespace std;

// 全局数组，用于“记忆化”（缓存计算结果）。
// 默认初始化为全0。数组大小为100，意味着最多只能安全计算到 n = 99。
// 如果输入的 n >= 100，会导致数组越界
int memo[100] = {};

int fib(int n) {
    // 递归的终止条件（Base case）：斐波那契数列第 1 项和第 2 项都是 1
    if (n <= 2) return 1;

    // 【核心优化】如果 memo[n] 不等于 0，说明 fib(n) 之前已经被计算过了
    // 直接从缓存中读取并返回，避免重复计算（这是这段代码的关键）
    if (memo[n] != 0) {
        return memo[n];
    }

    // 如果缓存中没有，则进行递归计算：当前项 = 前一项 + 前两项
    // 并在计算完成后，将结果存入 memo 数组中进行缓存
    memo[n] = fib(n - 1) + fib(n - 2);

    return memo[n];
}

int main() {
    cout << fib(5);
    return 0;
}