string: db "Hello, Holberton\n", 0

section .text
global _start

_start:
	mov rax, 1
	mov rdi, 1
	mov rsi, string
	mov rdx, 15
	syscall

	mov rax, 60
	xor rdi, rdi
	syscall

