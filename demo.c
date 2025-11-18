// demo.c - Simple function to compare C vs hand-written assembly
// Calculates sum of integers from 1 to n
#include <stdio.h>

// Pure C version - let the compiler do its thing
int sum_to_n(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n = 100;
    int result = sum_to_n(n);
    printf("Sum of 1 to %d = %d\n", n, result);
    return 0;
}
