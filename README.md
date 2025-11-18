# Assembly Language Presentation

Minimalist presentation on Assembly Language for systems programming course.

## The Demo: C vs Hand-Optimized Assembly

This presentation demonstrates the power of assembly by comparing a C loop implementation against hand-optimized assembly that uses a mathematical formula.

### Demo Files

- `demo.c` - Simple C function that sums 1 to n (using a loop)
- `optimized.asm` - Hand-written assembly using formula n*(n+1)/2
- `demo_with_asm.c` - Comparison program that calls both versions
- `DEMO_SCRIPT.md` - Complete interactive demo walkthrough
- `SPEAKER_NOTES.md` - Full presentation notes with timing

## The Key Insight

**C Version (loop):** O(n) time complexity, ~100+ instructions  
**Assembly Version (formula):** O(1) time complexity, 5 instructions

## Running on Ubuntu 22.04

### Install Required Tools
```bash
sudo apt update
sudo apt install build-essential nasm
```

### See What GCC Generates
```bash
# Without optimization
gcc -S -O0 demo.c -o demo_O0.s

# With optimization
gcc -S -O2 demo.c -o demo_O2.s

# View the generated assembly
cat demo_O2.s | grep -A 20 "sum_to_n:"
```

### Build and Run the Comparison
```bash
# Compile C code
gcc -c demo_with_asm.c -o demo_with_asm.o

# Assemble optimized version
nasm -f elf64 optimized.asm -o optimized.o

# Link together
gcc demo_with_asm.o optimized.o -o demo_final

# Run comparison
./demo_final
```

**Expected Output:**
```
C version:   Sum of 1 to 100 = 5050
ASM version: Sum of 1 to 100 = 5050

Both correct? YES
```

## Presentation Structure

1. **Title** - Assembly Language: The Foundation of Computing
2. **History & Purpose** - Born 1940s-50s, one step above machine code
3. **Design Characteristics** - CPU-specific, maximum performance, minimal abstraction
4. **Basic Syntax** - Simple register operations
5. **Install & Run** - Ubuntu 22.04 commands (live demo)
6. **Ecosystem** - NASM, GAS, MASM, GDB
7. **Stack Overflow Says** - Used by ~5% of developers, highly respected
8. **Takeaway** - Where code meets silicon

## Resources

- [NASM Documentation](https://www.nasm.us/doc/)
- [x86-64 Reference](https://www.felixcloutier.com/x86/)
- [Stack Overflow Developer Survey 2025](https://survey.stackoverflow.co/2025/)
