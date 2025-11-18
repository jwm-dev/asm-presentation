// demo_with_asm.c - Compare C version vs hand-optimized assembly
#include <stdio.h>
#include <time.h>

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
    clock_t start, end;
    double c_time, asm_time;
    
    // Time C version
    start = clock();
    int c_result = sum_to_n(n);
    end = clock();
    c_time = ((double)(end - start)) / CLOCKS_PER_SEC;
    
    // Time ASM version
    start = clock();
    int asm_result = sum_to_n_asm(n);
    end = clock();
    asm_time = ((double)(end - start)) / CLOCKS_PER_SEC;
    
    printf("C version:   Sum of 1 to %d = %d (Time: %.9f seconds)\n", n, c_result, c_time);
    printf("ASM version: Sum of 1 to %d = %d (Time: %.9f seconds)\n", n, asm_result, asm_time);
    printf("\nBoth correct? %s\n", c_result == asm_result ? "YES" : "NO");
    printf("Time differential: %.9f seconds\n", c_time - asm_time);
    if (asm_time > 0) {
        printf("Speedup: %.2fx\n", c_time / asm_time);
    }
    
    return 0;
}
