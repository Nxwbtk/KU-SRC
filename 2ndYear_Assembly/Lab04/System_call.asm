	section	.data
userMsg	db	"Please enter a number: "
lenUserMsg	equ	$ - userMsg
dispMsg	db	"You have entered: "
lenDispMsg	equ	$ - dispMsg

	section	.bss
num	resb	4
	section	.text
		global	_start
_start:	mov	rax, 1
		mov	rdi, 1
		mov	rsi, userMsg
		mov	rdx, lenUserMsg
		syscall

		mov	rax, 0
		mov	rdi, 0
		mov	rsi, num
		mov	rdx, 5
		syscall

		mov	rax, 1
		mov	rdi, 0
		mov	rsi, dispMsg
		mov	rdx, lenDispMsg
		syscall

		mov	rax, 1
		mov	rdi, 0
		mov	rsi, num
		mov	rdx, 5
		syscall

		mov	rax, 60
		mov	rdi, 0
		syscall
