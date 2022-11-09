; a 64-bit program in assembly that prints Hello, Holberton, followed by a new line
; compiled using nasm and gcc : 
; nasm -f elf64 101-hello_holberton.asm && gcc -no-pie -std=gnu89

section .text
extern printf
global main

main:
	mov rax, 0
	mov rsi, message
	mov rdi, format
	call printf
	
	mov rax, 0
	ret

section .data
	message: db "Hello, Holberton", 0
	format db "%s", 10, 0
