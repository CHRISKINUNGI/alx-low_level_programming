global main

section .data
message db 'Hello, Holberton', 10 ; 10 is the ASCII code for newline

section .text
main:
    mov rax, 1       
    mov rdi, 1       
    mov rsi, message 
    mov rdx, 17      
    syscall          

    mov rax, 60      
    xor rdi, rdi     
    syscall          
