	section .data
var1	dw 1000h
var2	dw 2000h

	section .text
		global _start
_start	mov ax, 0A69Bh
	movzx bx, al
	movzx ecx, ah
	movzx edx, ax

	movsx bx, al
	movsx ecx, ah
	movsx edx, ax

	mov rax, 60
	mov rdi, 0
	syscall
