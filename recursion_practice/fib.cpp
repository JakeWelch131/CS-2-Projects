//Jacob Welch
//10/20/2023
//Lab 9 Recursion


#include <iostream>

int nfib(int n) {
    if (n == 0) {return 0; } 
    else if (n == 1) {return 1; }
    else {return nfib(n-1) + nfib(n-2); }
}

int nfibTail(int n, int a = 0, int b = 1) {
    if (n == 0) {
        return a;
    } else if (n == 1) {
        return b;
    } else {
        return nfibTail(n - 1, b, a + b);
    }
}

int main() {
    int num = 9;
    for (int i = 0; i <= num; ++i) { 
    std::cout << "fib: " << nfib(i) << std::endl;
    }

    for (int i = 0; i <= num; ++i) {
        std::cout << "fibTail: " << nfibTail(i) << std::endl;
    }
}