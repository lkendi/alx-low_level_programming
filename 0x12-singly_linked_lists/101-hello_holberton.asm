string: db "Hello, Holberton\n", 0

section .text
global start_prog

start_prog:
	mov rax, 1
	mov rdi, 1
	mov rsi, string
	mov rdx, 16
	syscall
	ret

	mov rax, 60
	xor rdi, rdi
	syscall

