#include <iostream>

// 使用迭代方法计算斐波那契数列的第 n 项
long long fibonacci(int n) {
    if (n <= 0) {
        return 0;
    }
    if (n == 1 || n == 2) {
        return 1;
    }
    
    long long prev = 1;
    long long curr = 1;
    
    for (int i = 3; i <= n; ++i) {
        long long next = prev + curr;
        prev = curr;
        curr = next;
    }
    
    return curr;
}

// 打印斐波那契数列的前 n 项
void printFibonacciSequence(int n) {
    if (n <= 0) {
        std::cout << "请输入一个正整数。" << std::endl;
        return;
    }
    
    std::cout << "斐波那契数列前 " << n << " 项：" << std::endl;
    
    long long prev = 1;
    long long curr = 1;
    
    if (n >= 1) {
        std::cout << prev;
    }
    if (n >= 2) {
        std::cout << " " << curr;
    }
    
    for (int i = 3; i <= n; ++i) {
        long long next = prev + curr;
        std::cout << " " << next;
        prev = curr;
        curr = next;
    }
    
    std::cout << std::endl;
}

int main() {
    int n;
    
    std::cout << "请输入要计算的斐波那契数列项数: ";
    std::cin >> n;
    
    if (n < 0) {
        std::cout << "错误：请输入非负整数。" << std::endl;
        return 1;
    }
    
    // 打印前 n 项
    printFibonacciSequence(n);
    
    // 计算并显示第 n 项的值
    if (n > 0) {
        std::cout << "第 " << n << " 项的值: " << fibonacci(n) << std::endl;
    }
    
    return 0;
}
