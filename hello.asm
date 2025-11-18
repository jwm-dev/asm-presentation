; optimized.asm - Hand-optimized assembly version
; Calculates sum of 1 to n using the mathematical formula: n*(n+1)/2
; Much more efficient than the loop-based C version!

section .text
    global sum_to_n_asm

sum_to_n_asm:
    ; Input: edi = n
    ; Output: eax = sum
    
    ; Formula: n * (n + 1) / 2
    mov eax, edi        ; eax = n
    inc edi             ; edi = n + 1
    imul eax, edi       ; eax = n * (n + 1)
    shr eax, 1          ; eax = (n * (n + 1)) / 2
    ret                 ; return eax
