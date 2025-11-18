// demo_with_asm.c - Compare C version vs hand-optimized assembly
#include <stdio.h>

// Pure C version with loop
int sum_to_n(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

// Assembly version (when linked with optimized.asm)
extern int sum_to_n_asm(int n);

int main() {
    int n = 100;
    
    int c_result = sum_to_n(n);
    int asm_result = sum_to_n_asm(n);
    
    printf("C version:   Sum of 1 to %d = %d\n", n, c_result);
    printf("ASM version: Sum of 1 to %d = %d\n", n, asm_result);
    printf("\nBoth correct? %s\n", c_result == asm_result ? "YES" : "NO");
    
    return 0;
}
