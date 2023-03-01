section	.data
section	.text
	global	_start
_start:
	mov	eax, 91ab0748h
	mov	ebx, 3f54f8f2h
	add	eax, ebx

	mov	eax, 91ab0748h
	sub	eax, ebx

	mov	eax, 91ab0748h
	neg	eax

	clc
	mov	eax, 7fffffffh
	inc	eax

	mov	eax, 0
	dec	eax

	mov	eax, 60
	mov	rdi, 0
	syscall
