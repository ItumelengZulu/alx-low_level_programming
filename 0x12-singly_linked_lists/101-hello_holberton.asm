section .data
    hello db "Hello, Holberton",10 ; The string to be printed (with newline character)

section .text
    global main

extern printf

main:
    ; Call printf to print the string
    mov rdi, hello      ; The format string
    call printf

    ; Exit the program
    mov rax, 60         ; syscall number for exit (64-bit)
    xor rdi, rdi        ; status: 0
    syscall

